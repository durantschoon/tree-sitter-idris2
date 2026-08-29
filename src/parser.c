#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 18

enum {
  sym_identifier = 1,
  anon_sym_data = 2,
  anon_sym_COLON = 3,
  anon_sym_where = 4,
  anon_sym_PIPE = 5,
  anon_sym_module = 6,
  anon_sym_import = 7,
  anon_sym_EQ = 8,
  anon_sym_DOT = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  aux_sym_application_token1 = 16,
  anon_sym__ = 17,
  anon_sym_QMARK = 18,
  sym_doc_comment = 19,
  sym_line_comment = 20,
  sym_block_comment = 21,
  sym__integerDecimal = 22,
  sym__integerHexadecimal = 23,
  sym__integerOctal = 24,
  sym__integerBinary = 25,
  sym_double = 26,
  anon_sym_SQUOTE = 27,
  anon_sym_BSLASH = 28,
  anon_sym_NUL = 29,
  anon_sym_SOH = 30,
  anon_sym_STX = 31,
  anon_sym_ETX = 32,
  anon_sym_EOT = 33,
  anon_sym_ENQ = 34,
  anon_sym_ACK = 35,
  anon_sym_BEL = 36,
  anon_sym_BS = 37,
  anon_sym_HT = 38,
  anon_sym_LF = 39,
  anon_sym_VT = 40,
  anon_sym_FF = 41,
  anon_sym_CR = 42,
  anon_sym_SO = 43,
  anon_sym_SI = 44,
  anon_sym_DLE = 45,
  anon_sym_DC1 = 46,
  anon_sym_DC2 = 47,
  anon_sym_DC3 = 48,
  anon_sym_DC4 = 49,
  anon_sym_NAK = 50,
  anon_sym_SYN = 51,
  anon_sym_ETB = 52,
  anon_sym_CAN = 53,
  anon_sym_EM = 54,
  anon_sym_SUB = 55,
  anon_sym_ESC = 56,
  anon_sym_FS = 57,
  anon_sym_GS = 58,
  anon_sym_RS = 59,
  anon_sym_US = 60,
  anon_sym_SP = 61,
  anon_sym_DEL = 62,
  aux_sym_char_token1 = 63,
  aux_sym_char_token2 = 64,
  aux_sym_char_token3 = 65,
  aux_sym_char_token4 = 66,
  aux_sym_char_token5 = 67,
  anon_sym_DQUOTE = 68,
  anon_sym_BSLASH_LBRACE = 69,
  aux_sym_string_token1 = 70,
  anon_sym_BSLASH_BSLASH = 71,
  aux_sym_string_token2 = 72,
  aux_sym_string_token3 = 73,
  sym_module = 74,
  sym_declaration = 75,
  sym_data_declaration = 76,
  sym_constructor_declaration = 77,
  sym_module_declaration = 78,
  sym_import_declaration = 79,
  sym_type_signature = 80,
  sym_function_definition = 81,
  sym_module_name = 82,
  sym_type = 83,
  sym__type_atom = 84,
  sym_explicit_binder = 85,
  sym_implicit_binder = 86,
  sym_expression = 87,
  sym_application = 88,
  sym__expression_atom = 89,
  sym_parenthesized_expression = 90,
  sym_qualified_name = 91,
  sym_constructor_name = 92,
  sym_hole = 93,
  sym_integer = 94,
  sym__number = 95,
  sym_char = 96,
  sym_string = 97,
  sym__text = 98,
  aux_sym_module_repeat1 = 99,
  aux_sym_data_declaration_repeat1 = 100,
  aux_sym_data_declaration_repeat2 = 101,
  aux_sym_module_name_repeat1 = 102,
  aux_sym_type_repeat1 = 103,
  aux_sym_explicit_binder_repeat1 = 104,
  aux_sym_application_repeat1 = 105,
  aux_sym_string_repeat1 = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_data] = "data",
  [anon_sym_COLON] = ":",
  [anon_sym_where] = "where",
  [anon_sym_PIPE] = "|",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_application_token1] = "application_token1",
  [anon_sym__] = "_",
  [anon_sym_QMARK] = "\?",
  [sym_doc_comment] = "doc_comment",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
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
  [sym_data_declaration] = "data_declaration",
  [sym_constructor_declaration] = "constructor_declaration",
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
  [sym_constructor_name] = "constructor_name",
  [sym_hole] = "hole",
  [sym_integer] = "integer",
  [sym__number] = "_number",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__text] = "_text",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_data_declaration_repeat1] = "data_declaration_repeat1",
  [aux_sym_data_declaration_repeat2] = "data_declaration_repeat2",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_explicit_binder_repeat1] = "explicit_binder_repeat1",
  [aux_sym_application_repeat1] = "application_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_application_token1] = aux_sym_application_token1,
  [anon_sym__] = anon_sym__,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_doc_comment] = sym_doc_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
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
  [sym_data_declaration] = sym_data_declaration,
  [sym_constructor_declaration] = sym_constructor_declaration,
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
  [sym_constructor_name] = sym_constructor_name,
  [sym_hole] = sym_hole,
  [sym_integer] = sym_integer,
  [sym__number] = sym__number,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__text] = sym__text,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_data_declaration_repeat1] = aux_sym_data_declaration_repeat1,
  [aux_sym_data_declaration_repeat2] = aux_sym_data_declaration_repeat2,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_explicit_binder_repeat1] = aux_sym_explicit_binder_repeat1,
  [aux_sym_application_repeat1] = aux_sym_application_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_COMMA] = {
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
  [sym_data_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_declaration] = {
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
  [sym_constructor_name] = {
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
  [aux_sym_data_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_declaration_repeat2] = {
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
  [aux_sym_explicit_binder_repeat1] = {
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
  field_constructor = 3,
  field_function = 4,
  field_name = 5,
  field_parameters = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_constructor] = "constructor",
  [field_function] = "function",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 4},
  [14] = {.index = 28, .length = 1},
  [15] = {.index = 29, .length = 2},
  [16] = {.index = 31, .length = 3},
  [17] = {.index = 34, .length = 5},
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
    {field_constructor, 5},
    {field_name, 1},
    {field_type, 3},
  [13] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [15] =
    {field_constructor, 5},
    {field_constructor, 6, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [19] =
    {field_name, 0},
  [20] =
    {field_name, 1},
    {field_type, 3},
  [22] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [24] =
    {field_constructor, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
  [28] =
    {field_constructor, 1},
  [29] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [31] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [34] =
    {field_constructor, 6},
    {field_constructor, 7, .inherited = true},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
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
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'B') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(85);
      if (lookahead == 'H') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == 'A') ADVANCE(182);
      if (lookahead == 'B') ADVANCE(184);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'D') ADVANCE(183);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(185);
      if (lookahead == 'G') ADVANCE(189);
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == 'S') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(191);
      if (lookahead == 'V') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(197);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '|') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == '2') ADVANCE(141);
      if (lookahead == '3') ADVANCE(143);
      if (lookahead == '4') ADVANCE(145);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'X') ADVANCE(111);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(157);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 16:
      if (lookahead == 'K') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == 'K') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 23:
      if (lookahead == 'Q') ADVANCE(115);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 25:
      if (lookahead == 'X') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '|') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(61);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(53);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(214);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(214);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(140);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == '3') ADVANCE(144);
      if (lookahead == '4') ADVANCE(146);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(132);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'X') ADVANCE(112);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(158);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(122);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(162);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == 'Y') ADVANCE(83);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(118);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(148);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(106);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(156);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(116);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(164);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(166);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(128);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(110);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (lookahead == '\'' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead == '\'' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(108);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(107);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == 'A') ADVANCE(182);
      if (lookahead == 'B') ADVANCE(184);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead == 'D') ADVANCE(183);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(185);
      if (lookahead == 'G') ADVANCE(189);
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == 'S') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(191);
      if (lookahead == 'V') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'S') ADVANCE(121);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(161);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(125);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == 'P') ADVANCE(169);
      if (lookahead == 'T') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'Y') ADVANCE(22);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(155);
      if (lookahead == 'N') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(163);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(165);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(167);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '|') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '|') ADVANCE(209);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '|') ADVANCE(223);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == 'w') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 38},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_module] = STATE(98),
    [sym_declaration] = STATE(20),
    [sym_data_declaration] = STATE(69),
    [sym_module_declaration] = STATE(69),
    [sym_import_declaration] = STATE(69),
    [sym_type_signature] = STATE(69),
    [sym_function_definition] = STATE(69),
    [aux_sym_module_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
    [anon_sym_import] = ACTIONS(15),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 38,
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
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_QMARK,
    ACTIONS(27), 1,
      sym__integerDecimal,
    ACTIONS(31), 1,
      sym_double,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_application,
    STATE(105), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(29), 3,
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
  [100] = 14,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_QMARK,
    ACTIONS(27), 1,
      sym__integerDecimal,
    ACTIONS(31), 1,
      sym_double,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_application,
    STATE(68), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(29), 3,
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
  [154] = 12,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_QMARK,
    ACTIONS(27), 1,
      sym__integerDecimal,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_double,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(29), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(42), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [202] = 11,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    STATE(64), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(43), 4,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [244] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(55), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [269] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(59), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [294] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(63), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [319] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(67), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [344] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(71), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [369] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(75), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [394] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(79), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [419] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(83), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [444] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(90), 1,
      anon_sym_data,
    ACTIONS(93), 1,
      anon_sym_module,
    ACTIONS(96), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(69), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [478] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(101), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [506] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(107), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [534] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(111), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [562] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [598] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_data,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(69), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [632] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [668] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [704] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [740] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    STATE(29), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(128), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [767] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    STATE(71), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [800] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(111), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [823] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      anon_sym_DASH_GT,
    STATE(27), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(134), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [850] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    STATE(92), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [883] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(130), 1,
      anon_sym_DASH_GT,
    STATE(27), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(141), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [910] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    STATE(101), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(24), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [943] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(145), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [965] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(134), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [987] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(149), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1009] = 8,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(32), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1039] = 5,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1062] = 5,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1085] = 5,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1108] = 5,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      aux_sym_application_token1,
    STATE(40), 1,
      aux_sym_application_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1130] = 5,
    ACTIONS(164), 1,
      aux_sym_application_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_application_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1152] = 5,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_application_token1,
    STATE(40), 1,
      aux_sym_application_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1174] = 3,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_RPAREN,
      sym_identifier,
  [1192] = 3,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1209] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(183), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1232] = 3,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1249] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1272] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(197), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1295] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(201), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1318] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(205), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1341] = 3,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1358] = 3,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1375] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(213), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1398] = 3,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1415] = 3,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1432] = 3,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1449] = 3,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1466] = 3,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_application_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_RPAREN,
      sym_identifier,
  [1483] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(236), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1506] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(60), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [1528] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(59), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [1550] = 6,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(59), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [1572] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(168), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1590] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(252), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1608] = 5,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1628] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(262), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1646] = 5,
    ACTIONS(256), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1666] = 5,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1686] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(278), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1703] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1720] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(286), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1737] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(290), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1754] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(294), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1771] = 2,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1784] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(57), 1,
      sym_constructor_declaration,
    STATE(95), 1,
      sym_constructor_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1801] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1818] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_COLON,
    STATE(79), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1835] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1852] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1869] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(46), 1,
      sym_constructor_declaration,
    STATE(95), 1,
      sym_constructor_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1886] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1903] = 5,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(62), 1,
      sym_constructor_declaration,
    STATE(95), 1,
      sym_constructor_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1920] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(70), 1,
      sym_module_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1934] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(317), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1946] = 3,
    ACTIONS(319), 1,
      anon_sym_BSLASH,
    ACTIONS(321), 1,
      aux_sym_char_token5,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [1958] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1972] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(67), 1,
      sym_module_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1986] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [1997] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2008] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2019] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2030] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2041] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2052] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(339), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2063] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2074] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2085] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2096] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2107] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2118] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2129] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2140] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2151] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(357), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2162] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2173] = 2,
    ACTIONS(361), 1,
      aux_sym_string_token1,
    ACTIONS(5), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [2182] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2193] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2204] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_line_comment,
  [2215] = 3,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(369), 1,
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
  [SMALL_STATE(7)] = 244,
  [SMALL_STATE(8)] = 269,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 319,
  [SMALL_STATE(11)] = 344,
  [SMALL_STATE(12)] = 369,
  [SMALL_STATE(13)] = 394,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 444,
  [SMALL_STATE(16)] = 478,
  [SMALL_STATE(17)] = 506,
  [SMALL_STATE(18)] = 534,
  [SMALL_STATE(19)] = 562,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 632,
  [SMALL_STATE(22)] = 668,
  [SMALL_STATE(23)] = 704,
  [SMALL_STATE(24)] = 740,
  [SMALL_STATE(25)] = 767,
  [SMALL_STATE(26)] = 800,
  [SMALL_STATE(27)] = 823,
  [SMALL_STATE(28)] = 850,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 910,
  [SMALL_STATE(31)] = 943,
  [SMALL_STATE(32)] = 965,
  [SMALL_STATE(33)] = 987,
  [SMALL_STATE(34)] = 1009,
  [SMALL_STATE(35)] = 1039,
  [SMALL_STATE(36)] = 1062,
  [SMALL_STATE(37)] = 1085,
  [SMALL_STATE(38)] = 1108,
  [SMALL_STATE(39)] = 1130,
  [SMALL_STATE(40)] = 1152,
  [SMALL_STATE(41)] = 1174,
  [SMALL_STATE(42)] = 1192,
  [SMALL_STATE(43)] = 1209,
  [SMALL_STATE(44)] = 1232,
  [SMALL_STATE(45)] = 1249,
  [SMALL_STATE(46)] = 1272,
  [SMALL_STATE(47)] = 1295,
  [SMALL_STATE(48)] = 1318,
  [SMALL_STATE(49)] = 1341,
  [SMALL_STATE(50)] = 1358,
  [SMALL_STATE(51)] = 1375,
  [SMALL_STATE(52)] = 1398,
  [SMALL_STATE(53)] = 1415,
  [SMALL_STATE(54)] = 1432,
  [SMALL_STATE(55)] = 1449,
  [SMALL_STATE(56)] = 1466,
  [SMALL_STATE(57)] = 1483,
  [SMALL_STATE(58)] = 1506,
  [SMALL_STATE(59)] = 1528,
  [SMALL_STATE(60)] = 1550,
  [SMALL_STATE(61)] = 1572,
  [SMALL_STATE(62)] = 1590,
  [SMALL_STATE(63)] = 1608,
  [SMALL_STATE(64)] = 1628,
  [SMALL_STATE(65)] = 1646,
  [SMALL_STATE(66)] = 1666,
  [SMALL_STATE(67)] = 1686,
  [SMALL_STATE(68)] = 1703,
  [SMALL_STATE(69)] = 1720,
  [SMALL_STATE(70)] = 1737,
  [SMALL_STATE(71)] = 1754,
  [SMALL_STATE(72)] = 1771,
  [SMALL_STATE(73)] = 1784,
  [SMALL_STATE(74)] = 1801,
  [SMALL_STATE(75)] = 1818,
  [SMALL_STATE(76)] = 1835,
  [SMALL_STATE(77)] = 1852,
  [SMALL_STATE(78)] = 1869,
  [SMALL_STATE(79)] = 1886,
  [SMALL_STATE(80)] = 1903,
  [SMALL_STATE(81)] = 1920,
  [SMALL_STATE(82)] = 1934,
  [SMALL_STATE(83)] = 1946,
  [SMALL_STATE(84)] = 1958,
  [SMALL_STATE(85)] = 1972,
  [SMALL_STATE(86)] = 1986,
  [SMALL_STATE(87)] = 1997,
  [SMALL_STATE(88)] = 2008,
  [SMALL_STATE(89)] = 2019,
  [SMALL_STATE(90)] = 2030,
  [SMALL_STATE(91)] = 2041,
  [SMALL_STATE(92)] = 2052,
  [SMALL_STATE(93)] = 2063,
  [SMALL_STATE(94)] = 2074,
  [SMALL_STATE(95)] = 2085,
  [SMALL_STATE(96)] = 2096,
  [SMALL_STATE(97)] = 2107,
  [SMALL_STATE(98)] = 2118,
  [SMALL_STATE(99)] = 2129,
  [SMALL_STATE(100)] = 2140,
  [SMALL_STATE(101)] = 2151,
  [SMALL_STATE(102)] = 2162,
  [SMALL_STATE(103)] = 2173,
  [SMALL_STATE(104)] = 2182,
  [SMALL_STATE(105)] = 2193,
  [SMALL_STATE(106)] = 2204,
  [SMALL_STATE(107)] = 2215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2, .production_id = 10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 2, .production_id = 10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 12),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 12),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 11),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 6, .production_id = 16),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 6, .production_id = 16),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 6, .production_id = 16),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 6, .production_id = 16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(84),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(86),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(85),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(81),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_atom, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(94),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(34),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 2, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 2, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_atom, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_atom, 1),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(106),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 6),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 6),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 6), SHIFT_REPEAT(5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 8, .production_id = 17),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 8, .production_id = 17),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 13),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 9),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 15),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 15),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 15), SHIFT_REPEAT(80),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 6, .production_id = 7),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 6, .production_id = 7),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(89),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(87),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 14),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 14),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 3, .production_id = 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 3, .production_id = 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(103),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(66),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 8),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 8), SHIFT_REPEAT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_name, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [351] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
