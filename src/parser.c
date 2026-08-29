#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_module = 1,
  anon_sym_import = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_DOT = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  aux_sym_application_token1 = 11,
  anon_sym__ = 12,
  anon_sym_QMARK = 13,
  sym_doc_comment = 14,
  sym_line_comment = 15,
  sym_block_comment = 16,
  sym_identifier = 17,
  sym__integerDecimal = 18,
  sym__integerHexadecimal = 19,
  sym__integerOctal = 20,
  sym__integerBinary = 21,
  sym_double = 22,
  anon_sym_SQUOTE = 23,
  anon_sym_BSLASH = 24,
  anon_sym_NUL = 25,
  anon_sym_SOH = 26,
  anon_sym_STX = 27,
  anon_sym_ETX = 28,
  anon_sym_EOT = 29,
  anon_sym_ENQ = 30,
  anon_sym_ACK = 31,
  anon_sym_BEL = 32,
  anon_sym_BS = 33,
  anon_sym_HT = 34,
  anon_sym_LF = 35,
  anon_sym_VT = 36,
  anon_sym_FF = 37,
  anon_sym_CR = 38,
  anon_sym_SO = 39,
  anon_sym_SI = 40,
  anon_sym_DLE = 41,
  anon_sym_DC1 = 42,
  anon_sym_DC2 = 43,
  anon_sym_DC3 = 44,
  anon_sym_DC4 = 45,
  anon_sym_NAK = 46,
  anon_sym_SYN = 47,
  anon_sym_ETB = 48,
  anon_sym_CAN = 49,
  anon_sym_EM = 50,
  anon_sym_SUB = 51,
  anon_sym_ESC = 52,
  anon_sym_FS = 53,
  anon_sym_GS = 54,
  anon_sym_RS = 55,
  anon_sym_US = 56,
  anon_sym_SP = 57,
  anon_sym_DEL = 58,
  aux_sym_char_token1 = 59,
  aux_sym_char_token2 = 60,
  aux_sym_char_token3 = 61,
  aux_sym_char_token4 = 62,
  aux_sym_char_token5 = 63,
  anon_sym_DQUOTE = 64,
  anon_sym_BSLASH_LBRACE = 65,
  aux_sym_string_token1 = 66,
  anon_sym_BSLASH_BSLASH = 67,
  aux_sym_string_token2 = 68,
  aux_sym_string_token3 = 69,
  sym_module = 70,
  sym_declaration = 71,
  sym_module_declaration = 72,
  sym_import_declaration = 73,
  sym_type_signature = 74,
  sym_function_definition = 75,
  sym_module_name = 76,
  sym_type = 77,
  sym__type_atom = 78,
  sym_explicit_binder = 79,
  sym_implicit_binder = 80,
  sym_expression = 81,
  sym_application = 82,
  sym__expression_atom = 83,
  sym_parenthesized_expression = 84,
  sym_qualified_name = 85,
  sym_hole = 86,
  sym_integer = 87,
  sym__number = 88,
  sym_char = 89,
  sym_string = 90,
  sym__text = 91,
  aux_sym_module_repeat1 = 92,
  aux_sym_module_name_repeat1 = 93,
  aux_sym_type_repeat1 = 94,
  aux_sym_application_repeat1 = 95,
  aux_sym_string_repeat1 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_application_token1] = "application_token1",
  [anon_sym__] = "_",
  [anon_sym_QMARK] = "\?",
  [sym_doc_comment] = "doc_comment",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
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
  [sym_explicit_binder] = "explicit_binder",
  [sym_implicit_binder] = "implicit_binder",
  [sym_expression] = "expression",
  [sym_application] = "application",
  [sym__expression_atom] = "_expression_atom",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_qualified_name] = "qualified_name",
  [sym_hole] = "hole",
  [sym_integer] = "integer",
  [sym__number] = "_number",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__text] = "_text",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_application_repeat1] = "application_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_application_token1] = aux_sym_application_token1,
  [anon_sym__] = anon_sym__,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_doc_comment] = sym_doc_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
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
  [sym_explicit_binder] = sym_explicit_binder,
  [sym_implicit_binder] = sym_implicit_binder,
  [sym_expression] = sym_expression,
  [sym_application] = sym_application,
  [sym__expression_atom] = sym__expression_atom,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_qualified_name] = sym_qualified_name,
  [sym_hole] = sym_hole,
  [sym_integer] = sym_integer,
  [sym__number] = sym__number,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__text] = sym__text,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_application_repeat1] = aux_sym_application_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_application_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
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
  [sym_explicit_binder] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_binder] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_application] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_hole] = {
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
  [aux_sym_application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_body = 2,
  field_function = 3,
  field_name = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_function] = "function",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
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
  [5] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [7] =
    {field_argument, 1},
  [8] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [10] =
    {field_name, 1},
    {field_type, 3},
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
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(14);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(37);
      if (lookahead == 'V') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(63);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'B') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead == 'F') ADVANCE(162);
      if (lookahead == 'G') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(169);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(167);
      if (lookahead == 'S') ADVANCE(164);
      if (lookahead == 'U') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(173);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '{') ADVANCE(183);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '2') ADVANCE(134);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '4') ADVANCE(136);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'X') ADVANCE(119);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(142);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(144);
      END_STATE();
    case 24:
      if (lookahead == 'F') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'Y') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'K') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'K') ADVANCE(137);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(141);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 34:
      if (lookahead == 'Q') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(147);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == 'X') ADVANCE(118);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == '|') ADVANCE(89);
      END_STATE();
    case 53:
      if (lookahead == '|') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(93);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == '}') ADVANCE(85);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(191);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(191);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(117);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == 'A') ADVANCE(159);
      if (lookahead == 'B') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead == 'F') ADVANCE(162);
      if (lookahead == 'G') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(169);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(167);
      if (lookahead == 'S') ADVANCE(164);
      if (lookahead == 'U') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(173);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(144);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(126);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'Y') ADVANCE(33);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(141);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(145);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(147);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '|') ADVANCE(52);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '|') ADVANCE(52);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '{') ADVANCE(183);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '|') ADVANCE(186);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(8);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(8);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(8);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(206);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 66},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 66},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 66},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 66},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 66},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 66},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 66},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 66},
  [34] = {.lex_state = 66},
  [35] = {.lex_state = 66},
  [36] = {.lex_state = 66},
  [37] = {.lex_state = 65},
  [38] = {.lex_state = 66},
  [39] = {.lex_state = 66},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 65},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 66},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 65},
  [49] = {.lex_state = 65},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
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
  },
  [1] = {
    [sym_module] = STATE(68),
    [sym_declaration] = STATE(9),
    [sym_module_declaration] = STATE(50),
    [sym_import_declaration] = STATE(50),
    [sym_type_signature] = STATE(50),
    [sym_function_definition] = STATE(50),
    [aux_sym_module_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 38,
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
  [46] = 14,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym__integerDecimal,
    ACTIONS(29), 1,
      sym_double,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_application,
    STATE(63), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(27), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(30), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [100] = 14,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym__integerDecimal,
    ACTIONS(29), 1,
      sym_double,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_application,
    STATE(51), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(27), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(30), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [154] = 12,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(21), 1,
      anon_sym_QMARK,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym__integerDecimal,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_double,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(27), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(39), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [202] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym__,
    ACTIONS(45), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(60), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(20), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [238] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym__,
    ACTIONS(45), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(20), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [274] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym__,
    ACTIONS(45), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(52), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(20), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [307] = 8,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_module,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(11), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(50), 4,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [337] = 8,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym__,
    ACTIONS(45), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(26), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [367] = 8,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_module,
    ACTIONS(58), 1,
      anon_sym_import,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(11), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(50), 4,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [397] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(66), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [422] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(72), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [447] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(79), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [472] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(72), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [492] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(83), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [516] = 5,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [538] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(92), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [562] = 5,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [584] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      anon_sym_DASH_GT,
    STATE(18), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(102), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [608] = 5,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [630] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(109), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [649] = 5,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      aux_sym_application_token1,
    STATE(27), 1,
      aux_sym_application_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [670] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(119), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [689] = 3,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 5,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_RPAREN,
      sym_identifier,
  [706] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(83), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [725] = 5,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym_application_token1,
    STATE(27), 1,
      aux_sym_application_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [746] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(130), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [765] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(134), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [784] = 5,
    ACTIONS(115), 1,
      aux_sym_application_token1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_application_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [805] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(142), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [824] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(146), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [843] = 3,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [859] = 3,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [875] = 3,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(134), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [891] = 3,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [907] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(158), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [929] = 3,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [945] = 3,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [961] = 5,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [981] = 5,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1001] = 3,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1017] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(188), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1039] = 5,
    ACTIONS(170), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1059] = 3,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1075] = 3,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 4,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1091] = 2,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1104] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(138), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1121] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(206), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1137] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(210), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1153] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(214), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1169] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(218), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1185] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(222), 3,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1201] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(49), 1,
      sym_module_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1215] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1229] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(53), 1,
      sym_module_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1243] = 3,
    ACTIONS(230), 1,
      anon_sym_BSLASH,
    ACTIONS(232), 1,
      aux_sym_char_token5,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [1255] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1266] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1277] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1288] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1299] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1310] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1321] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1332] = 2,
    ACTIONS(248), 1,
      aux_sym_string_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [1341] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1352] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1363] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1374] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1385] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1396] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1407] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1418] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 337,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 397,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 447,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 516,
  [SMALL_STATE(18)] = 538,
  [SMALL_STATE(19)] = 562,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 608,
  [SMALL_STATE(22)] = 630,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 670,
  [SMALL_STATE(25)] = 689,
  [SMALL_STATE(26)] = 706,
  [SMALL_STATE(27)] = 725,
  [SMALL_STATE(28)] = 746,
  [SMALL_STATE(29)] = 765,
  [SMALL_STATE(30)] = 784,
  [SMALL_STATE(31)] = 805,
  [SMALL_STATE(32)] = 824,
  [SMALL_STATE(33)] = 843,
  [SMALL_STATE(34)] = 859,
  [SMALL_STATE(35)] = 875,
  [SMALL_STATE(36)] = 891,
  [SMALL_STATE(37)] = 907,
  [SMALL_STATE(38)] = 929,
  [SMALL_STATE(39)] = 945,
  [SMALL_STATE(40)] = 961,
  [SMALL_STATE(41)] = 981,
  [SMALL_STATE(42)] = 1001,
  [SMALL_STATE(43)] = 1017,
  [SMALL_STATE(44)] = 1039,
  [SMALL_STATE(45)] = 1059,
  [SMALL_STATE(46)] = 1075,
  [SMALL_STATE(47)] = 1091,
  [SMALL_STATE(48)] = 1104,
  [SMALL_STATE(49)] = 1121,
  [SMALL_STATE(50)] = 1137,
  [SMALL_STATE(51)] = 1153,
  [SMALL_STATE(52)] = 1169,
  [SMALL_STATE(53)] = 1185,
  [SMALL_STATE(54)] = 1201,
  [SMALL_STATE(55)] = 1215,
  [SMALL_STATE(56)] = 1229,
  [SMALL_STATE(57)] = 1243,
  [SMALL_STATE(58)] = 1255,
  [SMALL_STATE(59)] = 1266,
  [SMALL_STATE(60)] = 1277,
  [SMALL_STATE(61)] = 1288,
  [SMALL_STATE(62)] = 1299,
  [SMALL_STATE(63)] = 1310,
  [SMALL_STATE(64)] = 1321,
  [SMALL_STATE(65)] = 1332,
  [SMALL_STATE(66)] = 1341,
  [SMALL_STATE(67)] = 1352,
  [SMALL_STATE(68)] = 1363,
  [SMALL_STATE(69)] = 1374,
  [SMALL_STATE(70)] = 1385,
  [SMALL_STATE(71)] = 1396,
  [SMALL_STATE(72)] = 1407,
  [SMALL_STATE(73)] = 1418,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(56),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(54),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(55),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_atom, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(59),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_atom, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_atom, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(72),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 6),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 6), SHIFT_REPEAT(5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 2, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 2, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 7),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(65),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
