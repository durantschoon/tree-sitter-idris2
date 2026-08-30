#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "tree_sitter/parser.h"

enum TokenType {
  WITH_LAYOUT_START,
  WITH_LAYOUT_SEPARATOR,
  WITH_LAYOUT_END,
  NEWLINE,
  BIRD_TRACK,
  LITERATE_COMMENT,
};

typedef struct {
  uint32_t layout_column;
  bool layout_active;
  bool is_literate;
  bool checked_first_line;
} Scanner;

void *tree_sitter_idris2_external_scanner_create(void) {
  return calloc(1, sizeof(Scanner));
}

void tree_sitter_idris2_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_idris2_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  memcpy(buffer, scanner, sizeof(*scanner));
  return sizeof(*scanner);
}

void tree_sitter_idris2_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  memset(scanner, 0, sizeof(*scanner));
  if (length == sizeof(*scanner)) {
    memcpy(scanner, buffer, sizeof(*scanner));
  }
}

static inline void skip_horizontal_space(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\r' || lexer->lookahead == '\f') {
    lexer->advance(lexer, true);
  }
}

static inline void advance_char(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

// Reads newlines, blank lines, and comments, and returns the indentation column
// of the first non-whitespace, non-comment token on a subsequent line.
// Returns false if no newline was encountered.
static bool peek_next_line_indent(Scanner *scanner, TSLexer *lexer, uint32_t *column, bool *is_eof) {
  skip_horizontal_space(lexer);
  if (lexer->lookahead != '\n') {
    return false;
  }

  while (!lexer->eof(lexer)) {
    if (lexer->lookahead == '\n') {
      advance_char(lexer);
    }

    if (scanner->is_literate) {
      if (lexer->lookahead == '>') {
        advance_char(lexer);
        if (lexer->lookahead == ' ') {
          advance_char(lexer);
        }
      } else if (!lexer->eof(lexer) && lexer->lookahead != '\n') {
        // Line without bird track in literate mode ends layout
        *column = 0;
        *is_eof = false;
        return true;
      }
    }

    *column = 0;
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
           lexer->lookahead == '\r' || lexer->lookahead == '\f') {
      *column += (lexer->lookahead == '\t') ? 8 : 1;
      advance_char(lexer);
    }

    if (lexer->eof(lexer)) {
      *is_eof = true;
      return true;
    }

    if (lexer->lookahead == '\n') {
      // Empty line, continue to next line
      continue;
    }

    // Check for line comment `--`
    if (lexer->lookahead == '-') {
      advance_char(lexer);
      if (lexer->lookahead == '-') {
        while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
          advance_char(lexer);
        }
        continue;
      }
      *is_eof = false;
      return true;
    }

    *is_eof = false;
    return true;
  }

  *is_eof = true;
  return true;
}

bool tree_sitter_idris2_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  if (lexer->get_column(lexer) == 0) {
    if (lexer->lookahead == '>') {
      scanner->is_literate = true;
      scanner->checked_first_line = true;
      if (valid_symbols[BIRD_TRACK]) {
        advance_char(lexer);
        if (lexer->lookahead == ' ') {
          advance_char(lexer);
        }
        lexer->mark_end(lexer);
        lexer->result_symbol = BIRD_TRACK;
        return true;
      }
    }

    if (!scanner->checked_first_line) {
      scanner->checked_first_line = true;
      if (lexer->lookahead == '#') {
        scanner->is_literate = true;
      }
    }

    if (scanner->is_literate) {
      if (valid_symbols[LITERATE_COMMENT] &&
          lexer->lookahead != '>' &&
          lexer->lookahead != '\n' &&
          lexer->lookahead != '\r' &&
          !lexer->eof(lexer)) {
        while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
          advance_char(lexer);
        }
        lexer->mark_end(lexer);
        lexer->result_symbol = LITERATE_COMMENT;
        return true;
      }
    }
  }

  if (valid_symbols[WITH_LAYOUT_START]) {
    uint32_t column = 0;
    bool is_eof = false;
    if (peek_next_line_indent(scanner, lexer, &column, &is_eof)) {
      if (!is_eof && lexer->lookahead != '{' && column > 0) {
        scanner->layout_column = column;
        scanner->layout_active = true;
        lexer->mark_end(lexer);
        lexer->result_symbol = WITH_LAYOUT_START;
        return true;
      }
    }
  }

  if (scanner->layout_active &&
      (valid_symbols[WITH_LAYOUT_SEPARATOR] || valid_symbols[WITH_LAYOUT_END])) {
    if (valid_symbols[WITH_LAYOUT_END] && lexer->eof(lexer)) {
      scanner->layout_active = false;
      lexer->result_symbol = WITH_LAYOUT_END;
      return true;
    }

    uint32_t column = 0;
    bool is_eof = false;
    if (peek_next_line_indent(scanner, lexer, &column, &is_eof)) {
      if (is_eof) {
        if (valid_symbols[WITH_LAYOUT_END]) {
          scanner->layout_active = false;
          // Zero-width token before EOF
          lexer->result_symbol = WITH_LAYOUT_END;
          return true;
        }
      } else if (valid_symbols[WITH_LAYOUT_SEPARATOR] && column == scanner->layout_column) {
        lexer->mark_end(lexer);
        lexer->result_symbol = WITH_LAYOUT_SEPARATOR;
        return true;
      } else if (valid_symbols[WITH_LAYOUT_END] && column < scanner->layout_column) {
        scanner->layout_active = false;
        // Do not call mark_end; token is 0-width at start of lookahead
        lexer->result_symbol = WITH_LAYOUT_END;
        return true;
      }
    }
  }

  if (valid_symbols[NEWLINE]) {
    skip_horizontal_space(lexer);
    if (lexer->lookahead == '\n') {
      advance_char(lexer);
      lexer->mark_end(lexer);
      lexer->result_symbol = NEWLINE;
      return true;
    }
  }

  return false;
}
