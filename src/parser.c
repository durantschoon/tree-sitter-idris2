#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

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
  sym_operator = 17,
  aux_sym__infix_operator_token1 = 18,
  anon_sym__ = 19,
  anon_sym_QMARK = 20,
  sym_doc_comment = 21,
  sym_line_comment = 22,
  sym_block_comment = 23,
  sym__integerDecimal = 24,
  sym__integerHexadecimal = 25,
  sym__integerOctal = 26,
  sym__integerBinary = 27,
  sym_double = 28,
  anon_sym_SQUOTE = 29,
  anon_sym_BSLASH = 30,
  anon_sym_NUL = 31,
  anon_sym_SOH = 32,
  anon_sym_STX = 33,
  anon_sym_ETX = 34,
  anon_sym_EOT = 35,
  anon_sym_ENQ = 36,
  anon_sym_ACK = 37,
  anon_sym_BEL = 38,
  anon_sym_BS = 39,
  anon_sym_HT = 40,
  anon_sym_LF = 41,
  anon_sym_VT = 42,
  anon_sym_FF = 43,
  anon_sym_CR = 44,
  anon_sym_SO = 45,
  anon_sym_SI = 46,
  anon_sym_DLE = 47,
  anon_sym_DC1 = 48,
  anon_sym_DC2 = 49,
  anon_sym_DC3 = 50,
  anon_sym_DC4 = 51,
  anon_sym_NAK = 52,
  anon_sym_SYN = 53,
  anon_sym_ETB = 54,
  anon_sym_CAN = 55,
  anon_sym_EM = 56,
  anon_sym_SUB = 57,
  anon_sym_ESC = 58,
  anon_sym_FS = 59,
  anon_sym_GS = 60,
  anon_sym_RS = 61,
  anon_sym_US = 62,
  anon_sym_SP = 63,
  anon_sym_DEL = 64,
  aux_sym_char_token1 = 65,
  aux_sym_char_token2 = 66,
  aux_sym_char_token3 = 67,
  aux_sym_char_token4 = 68,
  aux_sym_char_token5 = 69,
  anon_sym_DQUOTE = 70,
  anon_sym_BSLASH_LBRACE = 71,
  aux_sym_string_token1 = 72,
  anon_sym_BSLASH_BSLASH = 73,
  aux_sym_string_token2 = 74,
  aux_sym_string_token3 = 75,
  sym_module = 76,
  sym_declaration = 77,
  sym_data_declaration = 78,
  sym_constructor_declaration = 79,
  sym_module_declaration = 80,
  sym_import_declaration = 81,
  sym_type_signature = 82,
  sym_function_definition = 83,
  sym_module_name = 84,
  sym_type = 85,
  sym__type_atom = 86,
  sym_explicit_binder = 87,
  sym_implicit_binder = 88,
  sym_expression = 89,
  sym_application = 90,
  sym_infix_expression = 91,
  sym__expression_term = 92,
  sym__expression_atom = 93,
  sym_parenthesized_expression = 94,
  sym_qualified_name = 95,
  sym_constructor_name = 96,
  sym_operator_name = 97,
  sym__infix_operator = 98,
  sym_hole = 99,
  sym_integer = 100,
  sym__number = 101,
  sym_char = 102,
  sym_string = 103,
  sym__text = 104,
  aux_sym_module_repeat1 = 105,
  aux_sym_data_declaration_repeat1 = 106,
  aux_sym_data_declaration_repeat2 = 107,
  aux_sym_module_name_repeat1 = 108,
  aux_sym_type_repeat1 = 109,
  aux_sym_explicit_binder_repeat1 = 110,
  aux_sym_application_repeat1 = 111,
  aux_sym_string_repeat1 = 112,
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
  [sym_operator] = "operator",
  [aux_sym__infix_operator_token1] = "operator",
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
  [sym_infix_expression] = "infix_expression",
  [sym__expression_term] = "_expression_term",
  [sym__expression_atom] = "_expression_atom",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_qualified_name] = "qualified_name",
  [sym_constructor_name] = "constructor_name",
  [sym_operator_name] = "operator_name",
  [sym__infix_operator] = "_infix_operator",
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
  [sym_operator] = sym_operator,
  [aux_sym__infix_operator_token1] = sym_operator,
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
  [sym_infix_expression] = sym_infix_expression,
  [sym__expression_term] = sym__expression_term,
  [sym__expression_atom] = sym__expression_atom,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_qualified_name] = sym_qualified_name,
  [sym_constructor_name] = sym_constructor_name,
  [sym_operator_name] = sym_operator_name,
  [sym__infix_operator] = sym__infix_operator,
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
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__infix_operator_token1] = {
    .visible = true,
    .named = true,
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
  [sym_infix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_term] = {
    .visible = false,
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
  [sym_operator_name] = {
    .visible = true,
    .named = true,
  },
  [sym__infix_operator] = {
    .visible = false,
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
  field_left = 5,
  field_name = 6,
  field_operator = 7,
  field_parameters = 8,
  field_right = 9,
  field_type = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_constructor] = "constructor",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 4},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 4},
  [16] = {.index = 32, .length = 1},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_operator, 1},
  [2] =
    {field_name, 0},
    {field_type, 2},
  [4] =
    {field_body, 2},
    {field_name, 0},
  [6] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_argument, 1},
  [12] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [14] =
    {field_constructor, 5},
    {field_name, 1},
    {field_type, 3},
  [17] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [19] =
    {field_constructor, 5},
    {field_constructor, 6, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [23] =
    {field_name, 0},
  [24] =
    {field_name, 1},
    {field_type, 3},
  [26] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [28] =
    {field_constructor, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
  [32] =
    {field_constructor, 1},
  [33] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [35] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [38] =
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

static inline bool sym_operator_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= ',' || c == '/'))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_operator_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '-' || c == '/'))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == 'V') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(118);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(69);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == 'B') ADVANCE(209);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'D') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'F') ADVANCE(210);
      if (lookahead == 'G') ADVANCE(214);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(212);
      if (lookahead == 'U') ADVANCE(216);
      if (lookahead == 'V') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == '|') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == 'V') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(118);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(69);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == 'V') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(118);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(74);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '|') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(222);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(164);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == '3') ADVANCE(168);
      if (lookahead == '4') ADVANCE(170);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'X') ADVANCE(136);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(182);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(184);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 23:
      if (lookahead == 'K') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == 'K') ADVANCE(172);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(144);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(178);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 30:
      if (lookahead == 'Q') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 32:
      if (lookahead == 'X') ADVANCE(134);
      END_STATE();
    case 33:
      if (lookahead == '|') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == '|') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(76);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(125);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 44:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == 'V') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(118);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(69);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 45:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 46:
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 47:
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 48:
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(33);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(74);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '>') ADVANCE(57);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(84);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '>') ADVANCE(74);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '-') ADVANCE(74);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(239);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_doc_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(239);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '3') ADVANCE(169);
      if (lookahead == '4') ADVANCE(171);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(157);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(105);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(177);
      if (lookahead == 'X') ADVANCE(137);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(185);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(147);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(187);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead == 'P') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'Y') ADVANCE(108);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(143);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(173);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(181);
      if (lookahead == 'N') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(141);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(189);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(149);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(135);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      if (lookahead == '\'' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '\'' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(133);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(132);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == 'A') ADVANCE(207);
      if (lookahead == 'B') ADVANCE(209);
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'D') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'F') ADVANCE(210);
      if (lookahead == 'G') ADVANCE(214);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(212);
      if (lookahead == 'U') ADVANCE(216);
      if (lookahead == 'V') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == '|') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(150);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(20);
      if (lookahead == 'Y') ADVANCE(29);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(190);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(192);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '|') ADVANCE(33);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(222);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '|') ADVANCE(33);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '|') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '|') ADVANCE(234);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '|') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(17);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(17);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(254);
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
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 46},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 46},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 46},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 46},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 46},
  [81] = {.lex_state = 46},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 15},
  [86] = {.lex_state = 45},
  [87] = {.lex_state = 45},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 45},
  [93] = {.lex_state = 45},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 45},
  [96] = {.lex_state = 45},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 45},
  [99] = {.lex_state = 45},
  [100] = {.lex_state = 45},
  [101] = {.lex_state = 45},
  [102] = {.lex_state = 45},
  [103] = {.lex_state = 46},
  [104] = {.lex_state = 46},
  [105] = {.lex_state = 45},
  [106] = {.lex_state = 45},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 45},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 45},
  [111] = {.lex_state = 45},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 45},
  [114] = {.lex_state = 45},
  [115] = {.lex_state = 45},
  [116] = {.lex_state = 45},
  [117] = {.lex_state = 45},
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
    [sym_operator] = ACTIONS(1),
    [aux_sym__infix_operator_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
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
    [sym_module] = STATE(100),
    [sym_declaration] = STATE(9),
    [sym_data_declaration] = STATE(70),
    [sym_module_declaration] = STATE(70),
    [sym_import_declaration] = STATE(70),
    [sym_type_signature] = STATE(70),
    [sym_function_definition] = STATE(70),
    [sym_operator_name] = STATE(90),
    [aux_sym_module_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_data] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_doc_comment] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(17),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 38,
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
  [46] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_operator,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      sym__integerDecimal,
    ACTIONS(35), 1,
      sym_double,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_operator_name,
    STATE(102), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(33), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(45), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(44), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [108] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      sym__integerDecimal,
    ACTIONS(35), 1,
      sym_double,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_operator_name,
    STATE(102), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(33), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(45), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(44), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [167] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      sym__integerDecimal,
    ACTIONS(35), 1,
      sym_double,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_expression,
    STATE(89), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(33), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(45), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(44), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [226] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      sym__integerDecimal,
    ACTIONS(35), 1,
      sym_double,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(61), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(33), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(44), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [281] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      sym__integerDecimal,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(33), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(54), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [329] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    STATE(63), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(49), 4,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [371] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_data,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(10), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(70), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [411] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_data,
    ACTIONS(69), 1,
      anon_sym_module,
    ACTIONS(72), 1,
      anon_sym_import,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(10), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(70), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [451] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(80), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [480] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(86), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [505] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(90), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [530] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(94), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [559] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(98), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [584] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(102), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [613] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(109), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [638] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(113), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [663] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(117), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [688] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(121), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [713] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(125), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
  [738] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [774] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [810] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [846] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_DASH_GT,
    STATE(25), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(135), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [874] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(144), 1,
      anon_sym_DASH_GT,
    STATE(25), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(142), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [902] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(144), 1,
      anon_sym_DASH_GT,
    STATE(26), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(148), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [930] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(102), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [954] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [990] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(135), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1013] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(154), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1036] = 5,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1061] = 5,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1086] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    STATE(108), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1119] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    STATE(92), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1152] = 5,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1177] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    STATE(71), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(27), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1210] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(167), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1233] = 5,
    ACTIONS(173), 1,
      aux_sym_application_token1,
    STATE(42), 1,
      aux_sym_application_repeat1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [1257] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(30), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1287] = 5,
    ACTIONS(173), 1,
      aux_sym_application_token1,
    STATE(42), 1,
      aux_sym_application_repeat1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [1311] = 5,
    ACTIONS(179), 1,
      aux_sym_application_token1,
    STATE(42), 1,
      aux_sym_application_repeat1,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [1335] = 3,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1355] = 5,
    ACTIONS(173), 1,
      aux_sym_application_token1,
    STATE(39), 1,
      aux_sym_application_repeat1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [1379] = 5,
    ACTIONS(190), 1,
      aux_sym__infix_operator_token1,
    STATE(6), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(188), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1402] = 3,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1421] = 3,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1440] = 3,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1459] = 3,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1478] = 3,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1497] = 3,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1516] = 3,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1535] = 3,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1554] = 3,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(218), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1573] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(222), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1597] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(230), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(228), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1621] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(235), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1645] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(239), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1669] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(243), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1693] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(224), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(247), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1717] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
    ACTIONS(251), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1735] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(255), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1759] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(259), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1778] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(263), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1797] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(74), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [1819] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(269), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1837] = 5,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(75), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1857] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(279), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1875] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(281), 1,
      anon_sym_COLON,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(69), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [1897] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(291), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1915] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(295), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1933] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(299), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1951] = 5,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(73), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1971] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(69), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [1993] = 5,
    ACTIONS(273), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(313), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2013] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(60), 1,
      sym_constructor_declaration,
    STATE(103), 1,
      sym_constructor_name,
    STATE(104), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2036] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(64), 1,
      sym_constructor_declaration,
    STATE(103), 1,
      sym_constructor_name,
    STATE(104), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2059] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(317), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2072] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(57), 1,
      sym_constructor_declaration,
    STATE(103), 1,
      sym_constructor_name,
    STATE(104), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2095] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2112] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_COLON,
    STATE(82), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2129] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2146] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2163] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_COLON,
    STATE(82), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2180] = 3,
    ACTIONS(334), 1,
      anon_sym_BSLASH,
    ACTIONS(336), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [2192] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(72), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2206] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(66), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [2232] = 3,
    ACTIONS(342), 1,
      aux_sym_application_token1,
    STATE(41), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [2244] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      anon_sym_COLON,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(350), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2292] = 2,
    ACTIONS(354), 1,
      aux_sym_string_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [2301] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2312] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2334] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2345] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2356] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2367] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2378] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2389] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2400] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2433] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(380), 1,
      sym_operator,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2455] = 2,
    ACTIONS(348), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [2464] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2475] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2497] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2508] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2530] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [2541] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 226,
  [SMALL_STATE(7)] = 281,
  [SMALL_STATE(8)] = 329,
  [SMALL_STATE(9)] = 371,
  [SMALL_STATE(10)] = 411,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 505,
  [SMALL_STATE(14)] = 530,
  [SMALL_STATE(15)] = 559,
  [SMALL_STATE(16)] = 584,
  [SMALL_STATE(17)] = 613,
  [SMALL_STATE(18)] = 638,
  [SMALL_STATE(19)] = 663,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 713,
  [SMALL_STATE(22)] = 738,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 810,
  [SMALL_STATE(25)] = 846,
  [SMALL_STATE(26)] = 874,
  [SMALL_STATE(27)] = 902,
  [SMALL_STATE(28)] = 930,
  [SMALL_STATE(29)] = 954,
  [SMALL_STATE(30)] = 990,
  [SMALL_STATE(31)] = 1013,
  [SMALL_STATE(32)] = 1036,
  [SMALL_STATE(33)] = 1061,
  [SMALL_STATE(34)] = 1086,
  [SMALL_STATE(35)] = 1119,
  [SMALL_STATE(36)] = 1152,
  [SMALL_STATE(37)] = 1177,
  [SMALL_STATE(38)] = 1210,
  [SMALL_STATE(39)] = 1233,
  [SMALL_STATE(40)] = 1257,
  [SMALL_STATE(41)] = 1287,
  [SMALL_STATE(42)] = 1311,
  [SMALL_STATE(43)] = 1335,
  [SMALL_STATE(44)] = 1355,
  [SMALL_STATE(45)] = 1379,
  [SMALL_STATE(46)] = 1402,
  [SMALL_STATE(47)] = 1421,
  [SMALL_STATE(48)] = 1440,
  [SMALL_STATE(49)] = 1459,
  [SMALL_STATE(50)] = 1478,
  [SMALL_STATE(51)] = 1497,
  [SMALL_STATE(52)] = 1516,
  [SMALL_STATE(53)] = 1535,
  [SMALL_STATE(54)] = 1554,
  [SMALL_STATE(55)] = 1573,
  [SMALL_STATE(56)] = 1597,
  [SMALL_STATE(57)] = 1621,
  [SMALL_STATE(58)] = 1645,
  [SMALL_STATE(59)] = 1669,
  [SMALL_STATE(60)] = 1693,
  [SMALL_STATE(61)] = 1717,
  [SMALL_STATE(62)] = 1735,
  [SMALL_STATE(63)] = 1759,
  [SMALL_STATE(64)] = 1778,
  [SMALL_STATE(65)] = 1797,
  [SMALL_STATE(66)] = 1819,
  [SMALL_STATE(67)] = 1837,
  [SMALL_STATE(68)] = 1857,
  [SMALL_STATE(69)] = 1875,
  [SMALL_STATE(70)] = 1897,
  [SMALL_STATE(71)] = 1915,
  [SMALL_STATE(72)] = 1933,
  [SMALL_STATE(73)] = 1951,
  [SMALL_STATE(74)] = 1971,
  [SMALL_STATE(75)] = 1993,
  [SMALL_STATE(76)] = 2013,
  [SMALL_STATE(77)] = 2036,
  [SMALL_STATE(78)] = 2059,
  [SMALL_STATE(79)] = 2072,
  [SMALL_STATE(80)] = 2095,
  [SMALL_STATE(81)] = 2112,
  [SMALL_STATE(82)] = 2129,
  [SMALL_STATE(83)] = 2146,
  [SMALL_STATE(84)] = 2163,
  [SMALL_STATE(85)] = 2180,
  [SMALL_STATE(86)] = 2192,
  [SMALL_STATE(87)] = 2206,
  [SMALL_STATE(88)] = 2220,
  [SMALL_STATE(89)] = 2232,
  [SMALL_STATE(90)] = 2244,
  [SMALL_STATE(91)] = 2258,
  [SMALL_STATE(92)] = 2270,
  [SMALL_STATE(93)] = 2281,
  [SMALL_STATE(94)] = 2292,
  [SMALL_STATE(95)] = 2301,
  [SMALL_STATE(96)] = 2312,
  [SMALL_STATE(97)] = 2323,
  [SMALL_STATE(98)] = 2334,
  [SMALL_STATE(99)] = 2345,
  [SMALL_STATE(100)] = 2356,
  [SMALL_STATE(101)] = 2367,
  [SMALL_STATE(102)] = 2378,
  [SMALL_STATE(103)] = 2389,
  [SMALL_STATE(104)] = 2400,
  [SMALL_STATE(105)] = 2411,
  [SMALL_STATE(106)] = 2422,
  [SMALL_STATE(107)] = 2433,
  [SMALL_STATE(108)] = 2444,
  [SMALL_STATE(109)] = 2455,
  [SMALL_STATE(110)] = 2464,
  [SMALL_STATE(111)] = 2475,
  [SMALL_STATE(112)] = 2486,
  [SMALL_STATE(113)] = 2497,
  [SMALL_STATE(114)] = 2508,
  [SMALL_STATE(115)] = 2519,
  [SMALL_STATE(116)] = 2530,
  [SMALL_STATE(117)] = 2541,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2, .production_id = 12),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 2, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(90),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(99),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(86),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(87),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(107),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_atom, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 14),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 14),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 13),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 13),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(97),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 6, .production_id = 18),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 6, .production_id = 18),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 6, .production_id = 18),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 6, .production_id = 18),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 14),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 14),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 13),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_atom, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_atom, 1),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(116),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 2, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 2, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 8),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 8),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 8), SHIFT_REPEAT(7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_term, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_term, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 7),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 8, .production_id = 19),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 8, .production_id = 19),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 17),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 17),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 17), SHIFT_REPEAT(77),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 15),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 15),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 11),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 11),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 6, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 6, .production_id = 9),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 6),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 3, .production_id = 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 3, .production_id = 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 16),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 16),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(111),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(114),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(94),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(73),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 10),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 10), SHIFT_REPEAT(113),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_name, 3, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_name, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
