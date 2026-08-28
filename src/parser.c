#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_module = 1,
  anon_sym_import = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_DOT = 5,
  anon_sym_DASH_GT = 6,
  sym_identifier = 7,
  sym__integerDecimal = 8,
  sym__integerHexadecimal = 9,
  sym__integerOctal = 10,
  sym__integerBinary = 11,
  sym_double = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_BSLASH = 14,
  anon_sym_NUL = 15,
  anon_sym_SOH = 16,
  anon_sym_STX = 17,
  anon_sym_ETX = 18,
  anon_sym_EOT = 19,
  anon_sym_ENQ = 20,
  anon_sym_ACK = 21,
  anon_sym_BEL = 22,
  anon_sym_BS = 23,
  anon_sym_HT = 24,
  anon_sym_LF = 25,
  anon_sym_VT = 26,
  anon_sym_FF = 27,
  anon_sym_CR = 28,
  anon_sym_SO = 29,
  anon_sym_SI = 30,
  anon_sym_DLE = 31,
  anon_sym_DC1 = 32,
  anon_sym_DC2 = 33,
  anon_sym_DC3 = 34,
  anon_sym_DC4 = 35,
  anon_sym_NAK = 36,
  anon_sym_SYN = 37,
  anon_sym_ETB = 38,
  anon_sym_CAN = 39,
  anon_sym_EM = 40,
  anon_sym_SUB = 41,
  anon_sym_ESC = 42,
  anon_sym_FS = 43,
  anon_sym_GS = 44,
  anon_sym_RS = 45,
  anon_sym_US = 46,
  anon_sym_SP = 47,
  anon_sym_DEL = 48,
  aux_sym_char_token1 = 49,
  aux_sym_char_token2 = 50,
  aux_sym_char_token3 = 51,
  aux_sym_char_token4 = 52,
  aux_sym_char_token5 = 53,
  anon_sym_DQUOTE = 54,
  anon_sym_BSLASH_LBRACE = 55,
  aux_sym_string_token1 = 56,
  anon_sym_RBRACE = 57,
  anon_sym_BSLASH_BSLASH = 58,
  aux_sym_string_token2 = 59,
  aux_sym_string_token3 = 60,
  sym_module = 61,
  sym_declaration = 62,
  sym_module_declaration = 63,
  sym_import_declaration = 64,
  sym_type_signature = 65,
  sym_function_definition = 66,
  sym_module_name = 67,
  sym_type = 68,
  sym__type_atom = 69,
  sym_expression = 70,
  sym_integer = 71,
  sym__number = 72,
  sym_char = 73,
  sym_string = 74,
  sym__text = 75,
  aux_sym_module_repeat1 = 76,
  aux_sym_module_name_repeat1 = 77,
  aux_sym_type_repeat1 = 78,
  aux_sym_string_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [sym_identifier] = "identifier",
  [sym__integerDecimal] = "_integerDecimal",
  [sym__integerHexadecimal] = "_integerHexadecimal",
  [sym__integerOctal] = "_integerOctal",
  [sym__integerBinary] = "_integerBinary",
  [sym_double] = "double",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_NUL] = "NUL",
  [anon_sym_SOH] = "SOH",
  [anon_sym_STX] = "STX",
  [anon_sym_ETX] = "ETX",
  [anon_sym_EOT] = "EOT",
  [anon_sym_ENQ] = "ENQ",
  [anon_sym_ACK] = "ACK",
  [anon_sym_BEL] = "BEL",
  [anon_sym_BS] = "BS",
  [anon_sym_HT] = "HT",
  [anon_sym_LF] = "LF",
  [anon_sym_VT] = "VT",
  [anon_sym_FF] = "FF",
  [anon_sym_CR] = "CR",
  [anon_sym_SO] = "SO",
  [anon_sym_SI] = "SI",
  [anon_sym_DLE] = "DLE",
  [anon_sym_DC1] = "DC1",
  [anon_sym_DC2] = "DC2",
  [anon_sym_DC3] = "DC3",
  [anon_sym_DC4] = "DC4",
  [anon_sym_NAK] = "NAK",
  [anon_sym_SYN] = "SYN",
  [anon_sym_ETB] = "ETB",
  [anon_sym_CAN] = "CAN",
  [anon_sym_EM] = "EM",
  [anon_sym_SUB] = "SUB",
  [anon_sym_ESC] = "ESC",
  [anon_sym_FS] = "FS",
  [anon_sym_GS] = "GS",
  [anon_sym_RS] = "RS",
  [anon_sym_US] = "US",
  [anon_sym_SP] = "SP",
  [anon_sym_DEL] = "DEL",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_char_token3] = "char_token3",
  [aux_sym_char_token4] = "char_token4",
  [aux_sym_char_token5] = "char_token5",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_LBRACE] = "\\{",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [sym_module] = "module",
  [sym_declaration] = "declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_type_signature] = "type_signature",
  [sym_function_definition] = "function_definition",
  [sym_module_name] = "module_name",
  [sym_type] = "type",
  [sym__type_atom] = "_type_atom",
  [sym_expression] = "expression",
  [sym_integer] = "integer",
  [sym__number] = "_number",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__text] = "_text",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym__integerDecimal] = sym__integerDecimal,
  [sym__integerHexadecimal] = sym__integerHexadecimal,
  [sym__integerOctal] = sym__integerOctal,
  [sym__integerBinary] = sym__integerBinary,
  [sym_double] = sym_double,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_NUL] = anon_sym_NUL,
  [anon_sym_SOH] = anon_sym_SOH,
  [anon_sym_STX] = anon_sym_STX,
  [anon_sym_ETX] = anon_sym_ETX,
  [anon_sym_EOT] = anon_sym_EOT,
  [anon_sym_ENQ] = anon_sym_ENQ,
  [anon_sym_ACK] = anon_sym_ACK,
  [anon_sym_BEL] = anon_sym_BEL,
  [anon_sym_BS] = anon_sym_BS,
  [anon_sym_HT] = anon_sym_HT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_VT] = anon_sym_VT,
  [anon_sym_FF] = anon_sym_FF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_SO] = anon_sym_SO,
  [anon_sym_SI] = anon_sym_SI,
  [anon_sym_DLE] = anon_sym_DLE,
  [anon_sym_DC1] = anon_sym_DC1,
  [anon_sym_DC2] = anon_sym_DC2,
  [anon_sym_DC3] = anon_sym_DC3,
  [anon_sym_DC4] = anon_sym_DC4,
  [anon_sym_NAK] = anon_sym_NAK,
  [anon_sym_SYN] = anon_sym_SYN,
  [anon_sym_ETB] = anon_sym_ETB,
  [anon_sym_CAN] = anon_sym_CAN,
  [anon_sym_EM] = anon_sym_EM,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_ESC] = anon_sym_ESC,
  [anon_sym_FS] = anon_sym_FS,
  [anon_sym_GS] = anon_sym_GS,
  [anon_sym_RS] = anon_sym_RS,
  [anon_sym_US] = anon_sym_US,
  [anon_sym_SP] = anon_sym_SP,
  [anon_sym_DEL] = anon_sym_DEL,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_char_token3] = aux_sym_char_token3,
  [aux_sym_char_token4] = aux_sym_char_token4,
  [aux_sym_char_token5] = aux_sym_char_token5,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_LBRACE] = anon_sym_BSLASH_LBRACE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_module] = sym_module,
  [sym_declaration] = sym_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_import_declaration] = sym_import_declaration,
  [sym_type_signature] = sym_type_signature,
  [sym_function_definition] = sym_function_definition,
  [sym_module_name] = sym_module_name,
  [sym_type] = sym_type,
  [sym__type_atom] = sym__type_atom,
  [sym_expression] = sym_expression,
  [sym_integer] = sym_integer,
  [sym__number] = sym__number,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__text] = sym__text,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__integerDecimal] = {
    .visible = false,
    .named = true,
  },
  [sym__integerHexadecimal] = {
    .visible = false,
    .named = true,
  },
  [sym__integerOctal] = {
    .visible = false,
    .named = true,
  },
  [sym__integerBinary] = {
    .visible = false,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_US] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEL] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_type, 2},
  [3] =
    {field_body, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(6);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(27);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'V') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'B') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'H') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'U') ADVANCE(136);
      if (lookahead == 'V') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '3') ADVANCE(105);
      if (lookahead == '4') ADVANCE(106);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'X') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 16:
      if (lookahead == 'F') ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(9);
      if (lookahead == 'Y') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'K') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'K') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == 'Q') ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(115);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(117);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'X') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(87);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'B') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'H') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'U') ADVANCE(136);
      if (lookahead == 'V') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(96);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(9);
      if (lookahead == 'Y') ADVANCE(25);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(115);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(116);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(117);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(153);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 56},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 56},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__integerDecimal] = ACTIONS(1),
    [sym__integerHexadecimal] = ACTIONS(1),
    [sym__integerOctal] = ACTIONS(1),
    [sym__integerBinary] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_NUL] = ACTIONS(1),
    [anon_sym_SOH] = ACTIONS(1),
    [anon_sym_STX] = ACTIONS(1),
    [anon_sym_ETX] = ACTIONS(1),
    [anon_sym_EOT] = ACTIONS(1),
    [anon_sym_ENQ] = ACTIONS(1),
    [anon_sym_ACK] = ACTIONS(1),
    [anon_sym_BEL] = ACTIONS(1),
    [anon_sym_BS] = ACTIONS(1),
    [anon_sym_HT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_VT] = ACTIONS(1),
    [anon_sym_FF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SO] = ACTIONS(1),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_DLE] = ACTIONS(1),
    [anon_sym_DC1] = ACTIONS(1),
    [anon_sym_DC2] = ACTIONS(1),
    [anon_sym_DC3] = ACTIONS(1),
    [anon_sym_DC4] = ACTIONS(1),
    [anon_sym_NAK] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_ETB] = ACTIONS(1),
    [anon_sym_CAN] = ACTIONS(1),
    [anon_sym_EM] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_ESC] = ACTIONS(1),
    [anon_sym_FS] = ACTIONS(1),
    [anon_sym_GS] = ACTIONS(1),
    [anon_sym_RS] = ACTIONS(1),
    [anon_sym_US] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [anon_sym_DEL] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token2] = ACTIONS(1),
    [aux_sym_char_token3] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(40),
    [sym_declaration] = STATE(5),
    [sym_module_declaration] = STATE(28),
    [sym_import_declaration] = STATE(28),
    [sym_type_signature] = STATE(28),
    [sym_function_definition] = STATE(28),
    [aux_sym_module_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(11), 38,
      anon_sym_NUL,
      anon_sym_SOH,
      anon_sym_STX,
      anon_sym_ETX,
      anon_sym_EOT,
      anon_sym_ENQ,
      anon_sym_ACK,
      anon_sym_BEL,
      anon_sym_BS,
      anon_sym_HT,
      anon_sym_LF,
      anon_sym_VT,
      anon_sym_FF,
      anon_sym_CR,
      anon_sym_SO,
      anon_sym_SI,
      anon_sym_DLE,
      anon_sym_DC1,
      anon_sym_DC2,
      anon_sym_DC3,
      anon_sym_DC4,
      anon_sym_NAK,
      anon_sym_SYN,
      anon_sym_ETB,
      anon_sym_CAN,
      anon_sym_EM,
      anon_sym_SUB,
      anon_sym_ESC,
      anon_sym_FS,
      anon_sym_GS,
      anon_sym_RS,
      anon_sym_US,
      anon_sym_SP,
      anon_sym_DEL,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
  [41] = 7,
    ACTIONS(15), 1,
      sym__integerDecimal,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_double,
    ACTIONS(17), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(21), 5,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [70] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_module,
    ACTIONS(28), 1,
      anon_sym_import,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(4), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(28), 4,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [93] = 6,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(28), 4,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [116] = 4,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(7), 1,
      aux_sym_string_repeat1,
    ACTIONS(40), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [131] = 4,
    ACTIONS(38), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      aux_sym_string_repeat1,
    ACTIONS(44), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [146] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(48), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [161] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_DASH_GT,
    STATE(13), 1,
      aux_sym_type_repeat1,
    ACTIONS(54), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [176] = 4,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(10), 1,
      aux_sym_string_repeat1,
    ACTIONS(63), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [191] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(68), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [206] = 4,
    ACTIONS(50), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(75), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [221] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_DASH_GT,
    STATE(13), 1,
      aux_sym_type_repeat1,
    ACTIONS(79), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [236] = 4,
    ACTIONS(56), 1,
      anon_sym_DASH_GT,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_type_repeat1,
    ACTIONS(86), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [251] = 1,
    ACTIONS(88), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [259] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
    ACTIONS(79), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [269] = 2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
    ACTIONS(68), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [279] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [288] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [297] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [306] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [315] = 2,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [324] = 2,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [333] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [342] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [351] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [360] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [369] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [378] = 3,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(14), 1,
      sym__type_atom,
    STATE(23), 1,
      sym_type,
  [388] = 2,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(138), 1,
      aux_sym_char_token5,
  [395] = 2,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(16), 1,
      sym__type_atom,
  [402] = 2,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(27), 1,
      sym_module_name,
  [409] = 2,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      anon_sym_EQ,
  [416] = 2,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(18), 1,
      sym_module_name,
  [423] = 1,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
  [427] = 1,
    ACTIONS(150), 1,
      aux_sym_string_token1,
  [431] = 1,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
  [435] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [439] = 1,
    ACTIONS(156), 1,
      sym_identifier,
  [443] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 221,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 269,
  [SMALL_STATE(18)] = 279,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 306,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 333,
  [SMALL_STATE(25)] = 342,
  [SMALL_STATE(26)] = 351,
  [SMALL_STATE(27)] = 360,
  [SMALL_STATE(28)] = 369,
  [SMALL_STATE(29)] = 378,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 395,
  [SMALL_STATE(32)] = 402,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 416,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 427,
  [SMALL_STATE(37)] = 431,
  [SMALL_STATE(38)] = 435,
  [SMALL_STATE(39)] = 439,
  [SMALL_STATE(40)] = 443,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(32),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(34),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(36),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(39),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_idris2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
