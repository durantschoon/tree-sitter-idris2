#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 28

enum {
  sym_identifier = 1,
  anon_sym_data = 2,
  anon_sym_COLON = 3,
  anon_sym_where = 4,
  anon_sym_PIPE = 5,
  anon_sym_module = 6,
  anon_sym_import = 7,
  sym__equals = 8,
  anon_sym_DOT = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_BSLASH = 16,
  anon_sym_EQ_GT = 17,
  aux_sym_application_token1 = 18,
  aux_sym__pattern_constructor_token1 = 19,
  sym_operator = 20,
  aux_sym__infix_operator_token1 = 21,
  anon_sym__ = 22,
  anon_sym_QMARK = 23,
  sym_doc_comment = 24,
  sym_line_comment = 25,
  sym_block_comment = 26,
  sym__integerDecimal = 27,
  sym__integerHexadecimal = 28,
  sym__integerOctal = 29,
  sym__integerBinary = 30,
  sym_double = 31,
  anon_sym_SQUOTE = 32,
  anon_sym_NUL = 33,
  anon_sym_SOH = 34,
  anon_sym_STX = 35,
  anon_sym_ETX = 36,
  anon_sym_EOT = 37,
  anon_sym_ENQ = 38,
  anon_sym_ACK = 39,
  anon_sym_BEL = 40,
  anon_sym_BS = 41,
  anon_sym_HT = 42,
  anon_sym_LF = 43,
  anon_sym_VT = 44,
  anon_sym_FF = 45,
  anon_sym_CR = 46,
  anon_sym_SO = 47,
  anon_sym_SI = 48,
  anon_sym_DLE = 49,
  anon_sym_DC1 = 50,
  anon_sym_DC2 = 51,
  anon_sym_DC3 = 52,
  anon_sym_DC4 = 53,
  anon_sym_NAK = 54,
  anon_sym_SYN = 55,
  anon_sym_ETB = 56,
  anon_sym_CAN = 57,
  anon_sym_EM = 58,
  anon_sym_SUB = 59,
  anon_sym_ESC = 60,
  anon_sym_FS = 61,
  anon_sym_GS = 62,
  anon_sym_RS = 63,
  anon_sym_US = 64,
  anon_sym_SP = 65,
  anon_sym_DEL = 66,
  aux_sym_char_token1 = 67,
  aux_sym_char_token2 = 68,
  aux_sym_char_token3 = 69,
  aux_sym_char_token4 = 70,
  aux_sym_char_token5 = 71,
  anon_sym_DQUOTE = 72,
  anon_sym_BSLASH_LBRACE = 73,
  aux_sym_string_token1 = 74,
  anon_sym_BSLASH_BSLASH = 75,
  aux_sym_string_token2 = 76,
  aux_sym_string_token3 = 77,
  sym_module = 78,
  sym_declaration = 79,
  sym_data_declaration = 80,
  sym_constructor_declaration = 81,
  sym_module_declaration = 82,
  sym_import_declaration = 83,
  sym_type_signature = 84,
  sym_function_definition = 85,
  sym_module_name = 86,
  sym_type = 87,
  sym__type_atom = 88,
  sym_explicit_binder = 89,
  sym_implicit_binder = 90,
  sym_expression = 91,
  sym_lambda_expression = 92,
  sym_application = 93,
  sym_infix_expression = 94,
  sym__expression_term = 95,
  sym__expression_atom = 96,
  sym_parenthesized_expression = 97,
  sym_pattern = 98,
  sym_parenthesized_pattern = 99,
  sym_constructor_application_pattern = 100,
  sym__pattern_constructor = 101,
  sym_qualified_name = 102,
  sym_constructor_name = 103,
  sym_operator_name = 104,
  sym__infix_operator = 105,
  sym_hole = 106,
  sym_integer = 107,
  sym__number = 108,
  sym_char = 109,
  sym_string = 110,
  sym__text = 111,
  aux_sym_module_repeat1 = 112,
  aux_sym_data_declaration_repeat1 = 113,
  aux_sym_data_declaration_repeat2 = 114,
  aux_sym_function_definition_repeat1 = 115,
  aux_sym_module_name_repeat1 = 116,
  aux_sym_type_repeat1 = 117,
  aux_sym_explicit_binder_repeat1 = 118,
  aux_sym_lambda_expression_repeat1 = 119,
  aux_sym_application_repeat1 = 120,
  aux_sym_constructor_application_pattern_repeat1 = 121,
  aux_sym_string_repeat1 = 122,
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
  [sym__equals] = "_equals",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_EQ_GT] = "=>",
  [aux_sym_application_token1] = "application_token1",
  [aux_sym__pattern_constructor_token1] = "identifier",
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
  [sym_lambda_expression] = "lambda_expression",
  [sym_application] = "application",
  [sym_infix_expression] = "infix_expression",
  [sym__expression_term] = "_expression_term",
  [sym__expression_atom] = "_expression_atom",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_pattern] = "pattern",
  [sym_parenthesized_pattern] = "parenthesized_pattern",
  [sym_constructor_application_pattern] = "constructor_application_pattern",
  [sym__pattern_constructor] = "_pattern_constructor",
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
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_explicit_binder_repeat1] = "explicit_binder_repeat1",
  [aux_sym_lambda_expression_repeat1] = "lambda_expression_repeat1",
  [aux_sym_application_repeat1] = "application_repeat1",
  [aux_sym_constructor_application_pattern_repeat1] = "constructor_application_pattern_repeat1",
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
  [sym__equals] = sym__equals,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [aux_sym_application_token1] = aux_sym_application_token1,
  [aux_sym__pattern_constructor_token1] = sym_identifier,
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
  [sym_lambda_expression] = sym_lambda_expression,
  [sym_application] = sym_application,
  [sym_infix_expression] = sym_infix_expression,
  [sym__expression_term] = sym__expression_term,
  [sym__expression_atom] = sym__expression_atom,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_pattern] = sym_pattern,
  [sym_parenthesized_pattern] = sym_parenthesized_pattern,
  [sym_constructor_application_pattern] = sym_constructor_application_pattern,
  [sym__pattern_constructor] = sym__pattern_constructor,
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
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_explicit_binder_repeat1] = aux_sym_explicit_binder_repeat1,
  [aux_sym_lambda_expression_repeat1] = aux_sym_lambda_expression_repeat1,
  [aux_sym_application_repeat1] = aux_sym_application_repeat1,
  [aux_sym_constructor_application_pattern_repeat1] = aux_sym_constructor_application_pattern_repeat1,
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
  [sym__equals] = {
    .visible = false,
    .named = true,
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_application_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pattern_constructor_token1] = {
    .visible = true,
    .named = true,
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
  [sym_lambda_expression] = {
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
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_application_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern_constructor] = {
    .visible = false,
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
  [aux_sym_function_definition_repeat1] = {
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
  [aux_sym_lambda_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_application_pattern_repeat1] = {
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
  field_parameter = 8,
  field_parameters = 9,
  field_pattern = 10,
  field_right = 11,
  field_type = 12,
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
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 4},
  [19] = {.index = 35, .length = 1},
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 2},
  [22] = {.index = 40, .length = 4},
  [23] = {.index = 44, .length = 3},
  [24] = {.index = 47, .length = 1},
  [25] = {.index = 48, .length = 2},
  [26] = {.index = 50, .length = 3},
  [27] = {.index = 53, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_parameter, 0},
  [2] =
    {field_operator, 1},
  [3] =
    {field_name, 0},
    {field_type, 2},
  [5] =
    {field_body, 2},
    {field_name, 0},
  [7] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [9] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [11] =
    {field_pattern, 1},
  [12] =
    {field_argument, 1, .inherited = true},
    {field_constructor, 0},
  [14] =
    {field_body, 3},
    {field_name, 0},
    {field_parameter, 1, .inherited = true},
  [17] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [20] =
    {field_argument, 1},
  [21] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [23] =
    {field_constructor, 5},
    {field_name, 1},
    {field_type, 3},
  [26] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [28] =
    {field_parameter, 1},
  [29] =
    {field_body, 3},
    {field_parameter, 1},
  [31] =
    {field_constructor, 5},
    {field_constructor, 6, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [35] =
    {field_name, 0},
  [36] =
    {field_name, 1},
    {field_type, 3},
  [38] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [40] =
    {field_constructor, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
  [44] =
    {field_body, 4},
    {field_parameter, 1},
    {field_parameter, 2, .inherited = true},
  [47] =
    {field_constructor, 1},
  [48] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [50] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [53] =
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
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'H') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(122);
      if (lookahead == 'V') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(79);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'B') ADVANCE(218);
      if (lookahead == 'C') ADVANCE(214);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(219);
      if (lookahead == 'G') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(226);
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(224);
      if (lookahead == 'S') ADVANCE(221);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'V') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(230);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'H') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(122);
      if (lookahead == 'V') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(79);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'H') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(122);
      if (lookahead == 'V') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(84);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '|') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(231);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(173);
      if (lookahead == '2') ADVANCE(175);
      if (lookahead == '3') ADVANCE(177);
      if (lookahead == '4') ADVANCE(179);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(185);
      if (lookahead == 'X') ADVANCE(145);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(191);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(193);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 27:
      if (lookahead == 'K') ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'K') ADVANCE(181);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(153);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(205);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(187);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 34:
      if (lookahead == 'Q') ADVANCE(149);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == 'X') ADVANCE(143);
      END_STATE();
    case 37:
      if (lookahead == '|') ADVANCE(91);
      END_STATE();
    case 38:
      if (lookahead == '|') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(96);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 48:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'H') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(122);
      if (lookahead == 'V') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(79);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 49:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 50:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 51:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 52:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 53:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(37);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__equals);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__pattern_constructor_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '>') ADVANCE(63);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(94);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(70);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '>') ADVANCE(84);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '-') ADVANCE(84);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(82);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(248);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_doc_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(248);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == '2') ADVANCE(176);
      if (lookahead == '3') ADVANCE(178);
      if (lookahead == '4') ADVANCE(180);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(186);
      if (lookahead == 'X') ADVANCE(146);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(156);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(196);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(160);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(170);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(204);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'Y') ADVANCE(118);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(152);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(182);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(154);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(140);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(190);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(188);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(150);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(198);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(200);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(148);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(144);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      if (lookahead == '\'' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead == '\'' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(142);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(141);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'B') ADVANCE(218);
      if (lookahead == 'C') ADVANCE(214);
      if (lookahead == 'D') ADVANCE(217);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(219);
      if (lookahead == 'G') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(226);
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'R') ADVANCE(224);
      if (lookahead == 'S') ADVANCE(221);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'V') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(230);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(165);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(195);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(159);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'P') ADVANCE(203);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'Y') ADVANCE(33);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(197);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(199);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(157);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '|') ADVANCE(37);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(207);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '|') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '|') ADVANCE(37);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '|') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(20);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(20);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(263);
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
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 53},
  [58] = {.lex_state = 53},
  [59] = {.lex_state = 53},
  [60] = {.lex_state = 53},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 50},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 55},
  [66] = {.lex_state = 50},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 50},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 50},
  [78] = {.lex_state = 50},
  [79] = {.lex_state = 49},
  [80] = {.lex_state = 50},
  [81] = {.lex_state = 50},
  [82] = {.lex_state = 49},
  [83] = {.lex_state = 50},
  [84] = {.lex_state = 50},
  [85] = {.lex_state = 55},
  [86] = {.lex_state = 49},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 50},
  [89] = {.lex_state = 50},
  [90] = {.lex_state = 49},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 49},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 49},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 49},
  [104] = {.lex_state = 49},
  [105] = {.lex_state = 49},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 49},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 50},
  [110] = {.lex_state = 49},
  [111] = {.lex_state = 50},
  [112] = {.lex_state = 49},
  [113] = {.lex_state = 49},
  [114] = {.lex_state = 50},
  [115] = {.lex_state = 49},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 18},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 49},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 49},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 49},
  [146] = {.lex_state = 49},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 49},
  [150] = {.lex_state = 49},
  [151] = {.lex_state = 49},
  [152] = {.lex_state = 49},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 49},
  [156] = {.lex_state = 49},
  [157] = {.lex_state = 49},
  [158] = {.lex_state = 49},
  [159] = {.lex_state = 49},
  [160] = {.lex_state = 49},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 49},
  [164] = {.lex_state = 49},
  [165] = {.lex_state = 49},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 49},
  [168] = {.lex_state = 49},
  [169] = {.lex_state = 49},
  [170] = {.lex_state = 49},
  [171] = {.lex_state = 49},
  [172] = {.lex_state = 49},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 49},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 49},
  [177] = {.lex_state = 49},
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
    [sym__equals] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
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
    [sym_module] = STATE(161),
    [sym_declaration] = STATE(30),
    [sym_data_declaration] = STATE(98),
    [sym_module_declaration] = STATE(98),
    [sym_import_declaration] = STATE(98),
    [sym_type_signature] = STATE(98),
    [sym_function_definition] = STATE(98),
    [sym_operator_name] = STATE(13),
    [aux_sym_module_repeat1] = STATE(30),
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
  [46] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(21), 38,
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
  [92] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 38,
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
  [138] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      sym_operator,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(41), 1,
      sym_double,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_lambda_expression,
    STATE(132), 1,
      sym_operator_name,
    STATE(148), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(65), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(56), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [206] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(41), 1,
      sym_double,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_lambda_expression,
    STATE(105), 1,
      sym_expression,
    STATE(132), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(65), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(56), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [271] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(41), 1,
      sym_double,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_expression,
    STATE(90), 1,
      sym_lambda_expression,
    STATE(132), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(65), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(56), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [336] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(41), 1,
      sym_double,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_lambda_expression,
    STATE(132), 1,
      sym_operator_name,
    STATE(148), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(65), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(56), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [401] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(41), 1,
      sym_double,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_lambda_expression,
    STATE(92), 1,
      sym_expression,
    STATE(132), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(65), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(56), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [466] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(41), 1,
      sym_double,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_expression,
    STATE(90), 1,
      sym_lambda_expression,
    STATE(132), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(65), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(56), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [531] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(41), 1,
      sym_double,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(85), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(56), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [586] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      sym__integerDecimal,
    ACTIONS(61), 1,
      sym_double,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(163), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(59), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(42), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [642] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      sym__integerDecimal,
    ACTIONS(61), 1,
      sym_double,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      sym__equals,
    STATE(16), 1,
      aux_sym_function_definition_repeat1,
    STATE(46), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(59), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(42), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [700] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      sym__integerDecimal,
    ACTIONS(61), 1,
      sym_double,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(137), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(170), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(59), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(42), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [756] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym__equals,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(82), 1,
      anon_sym_QMARK,
    ACTIONS(85), 1,
      sym__integerDecimal,
    ACTIONS(91), 1,
      sym_double,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_function_definition_repeat1,
    STATE(46), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(88), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(42), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [811] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      sym__integerDecimal,
    ACTIONS(61), 1,
      sym_double,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      sym__equals,
    STATE(15), 1,
      aux_sym_function_definition_repeat1,
    STATE(46), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(59), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(42), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [866] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      anon_sym_QMARK,
    ACTIONS(37), 1,
      sym__integerDecimal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(39), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(67), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [914] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym__,
    ACTIONS(112), 1,
      anon_sym_QMARK,
    ACTIONS(114), 1,
      sym__integerDecimal,
    ACTIONS(118), 1,
      sym_double,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(116), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(135), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [960] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(124), 4,
      anon_sym_where,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(126), 12,
      sym__equals,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [988] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(128), 4,
      anon_sym_where,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(130), 12,
      sym__equals,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1016] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym__,
    ACTIONS(144), 1,
      anon_sym_QMARK,
    STATE(89), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(136), 4,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
    STATE(66), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1058] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(148), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1085] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(152), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1112] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(156), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1139] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(160), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1166] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(164), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1193] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(168), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1220] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(172), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1247] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(176), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [1274] = 11,
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
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(31), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(98), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [1314] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_data,
    ACTIONS(188), 1,
      anon_sym_module,
    ACTIONS(191), 1,
      anon_sym_import,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(31), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(98), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [1354] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(197), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(199), 10,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1379] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(201), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(203), 10,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1404] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(205), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(207), 10,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1429] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(209), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(211), 10,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1454] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(213), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(215), 10,
      anon_sym_COLON,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1479] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(219), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1508] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(223), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(225), 10,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1533] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(229), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1562] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(235), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(233), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1591] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(238), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(240), 10,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1616] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(242), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(244), 10,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1641] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(109), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1677] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(231), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(233), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1701] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(109), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1737] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(250), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(252), 9,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1761] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(109), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1797] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(109), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1833] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(260), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [1856] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1881] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym__,
    ACTIONS(144), 1,
      anon_sym_QMARK,
    STATE(104), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(66), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1914] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(109), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [1947] = 5,
    ACTIONS(268), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1972] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [1997] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(109), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [2030] = 5,
    ACTIONS(275), 1,
      aux_sym_application_token1,
    STATE(58), 1,
      aux_sym_application_repeat1,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [2054] = 5,
    ACTIONS(275), 1,
      aux_sym_application_token1,
    STATE(60), 1,
      aux_sym_application_repeat1,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(279), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [2078] = 5,
    ACTIONS(275), 1,
      aux_sym_application_token1,
    STATE(60), 1,
      aux_sym_application_repeat1,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(279), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [2102] = 3,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2122] = 5,
    ACTIONS(285), 1,
      aux_sym_application_token1,
    STATE(60), 1,
      aux_sym_application_repeat1,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(283), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [2146] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym__,
    ACTIONS(144), 1,
      anon_sym_QMARK,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(49), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [2176] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(49), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [2206] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_DASH_GT,
    STATE(63), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(260), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2231] = 3,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2250] = 5,
    ACTIONS(295), 1,
      aux_sym__infix_operator_token1,
    STATE(11), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(293), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2273] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(301), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(299), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2298] = 3,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2317] = 3,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2336] = 3,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2355] = 3,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2374] = 3,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2393] = 3,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2412] = 3,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2431] = 3,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [2450] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(301), 1,
      anon_sym_DASH_GT,
    STATE(63), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(313), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2475] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(319), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(317), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2499] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    STATE(81), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(324), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2523] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(330), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2547] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(334), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2571] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(338), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2595] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(342), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2619] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(346), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2643] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(128), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(124), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2683] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
    ACTIONS(350), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2701] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(354), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(356), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(358), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2739] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(362), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2758] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(366), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2777] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(293), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2796] = 5,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(99), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(372), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2816] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(376), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2834] = 5,
    ACTIONS(370), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(380), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2854] = 5,
    ACTIONS(370), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(384), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2874] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(106), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [2896] = 5,
    ACTIONS(370), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2916] = 5,
    ACTIONS(370), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2936] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(396), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [2954] = 5,
    ACTIONS(370), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2974] = 5,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(100), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2994] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(410), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [3012] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(95), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [3034] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(416), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [3052] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(420), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [3070] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(424), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [3088] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      anon_sym_COLON,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(106), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [3110] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(80), 1,
      sym_constructor_declaration,
    STATE(144), 1,
      sym_constructor_name,
    STATE(154), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3133] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(436), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [3146] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(438), 1,
      anon_sym_DASH_GT,
    STATE(114), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(297), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3165] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(127), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [3186] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(442), 1,
      anon_sym_DASH_GT,
    STATE(111), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3205] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(77), 1,
      sym_constructor_declaration,
    STATE(144), 1,
      sym_constructor_name,
    STATE(154), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3228] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(88), 1,
      sym_constructor_declaration,
    STATE(144), 1,
      sym_constructor_name,
    STATE(154), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3251] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(438), 1,
      anon_sym_DASH_GT,
    STATE(111), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(311), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3270] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(119), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [3291] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_EQ_GT,
    STATE(125), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3308] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(451), 1,
      anon_sym_COLON,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3325] = 4,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      aux_sym_application_token1,
    STATE(124), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3340] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_EQ_GT,
    STATE(116), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3357] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      anon_sym_COLON,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3374] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_COLON,
    STATE(117), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3391] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_COLON,
    STATE(117), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3408] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_COLON,
    STATE(121), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3425] = 4,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(474), 1,
      aux_sym_application_token1,
    STATE(124), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3440] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_EQ_GT,
    STATE(125), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3457] = 3,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3469] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [3481] = 3,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3493] = 3,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3505] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(488), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3517] = 3,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(240), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3529] = 3,
    ACTIONS(490), 1,
      aux_sym_application_token1,
    STATE(57), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3541] = 3,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3553] = 3,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3565] = 3,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3577] = 3,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3589] = 3,
    ACTIONS(458), 1,
      aux_sym_application_token1,
    STATE(118), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3601] = 3,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3613] = 3,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3625] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(103), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3639] = 3,
    ACTIONS(498), 1,
      anon_sym_BSLASH,
    ACTIONS(500), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3651] = 3,
    ACTIONS(502), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3663] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(101), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3677] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3688] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3710] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(512), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3721] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3732] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3754] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3765] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3776] = 2,
    ACTIONS(215), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3796] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3807] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3818] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3829] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3840] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3851] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3873] = 2,
    ACTIONS(540), 1,
      aux_sym_string_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [3882] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3904] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3915] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3937] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3948] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3959] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3970] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3981] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(562), 1,
      sym_operator,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [4003] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [4014] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [4036] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 271,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 401,
  [SMALL_STATE(10)] = 466,
  [SMALL_STATE(11)] = 531,
  [SMALL_STATE(12)] = 586,
  [SMALL_STATE(13)] = 642,
  [SMALL_STATE(14)] = 700,
  [SMALL_STATE(15)] = 756,
  [SMALL_STATE(16)] = 811,
  [SMALL_STATE(17)] = 866,
  [SMALL_STATE(18)] = 914,
  [SMALL_STATE(19)] = 960,
  [SMALL_STATE(20)] = 988,
  [SMALL_STATE(21)] = 1016,
  [SMALL_STATE(22)] = 1058,
  [SMALL_STATE(23)] = 1085,
  [SMALL_STATE(24)] = 1112,
  [SMALL_STATE(25)] = 1139,
  [SMALL_STATE(26)] = 1166,
  [SMALL_STATE(27)] = 1193,
  [SMALL_STATE(28)] = 1220,
  [SMALL_STATE(29)] = 1247,
  [SMALL_STATE(30)] = 1274,
  [SMALL_STATE(31)] = 1314,
  [SMALL_STATE(32)] = 1354,
  [SMALL_STATE(33)] = 1379,
  [SMALL_STATE(34)] = 1404,
  [SMALL_STATE(35)] = 1429,
  [SMALL_STATE(36)] = 1454,
  [SMALL_STATE(37)] = 1479,
  [SMALL_STATE(38)] = 1508,
  [SMALL_STATE(39)] = 1533,
  [SMALL_STATE(40)] = 1562,
  [SMALL_STATE(41)] = 1591,
  [SMALL_STATE(42)] = 1616,
  [SMALL_STATE(43)] = 1641,
  [SMALL_STATE(44)] = 1677,
  [SMALL_STATE(45)] = 1701,
  [SMALL_STATE(46)] = 1737,
  [SMALL_STATE(47)] = 1761,
  [SMALL_STATE(48)] = 1797,
  [SMALL_STATE(49)] = 1833,
  [SMALL_STATE(50)] = 1856,
  [SMALL_STATE(51)] = 1881,
  [SMALL_STATE(52)] = 1914,
  [SMALL_STATE(53)] = 1947,
  [SMALL_STATE(54)] = 1972,
  [SMALL_STATE(55)] = 1997,
  [SMALL_STATE(56)] = 2030,
  [SMALL_STATE(57)] = 2054,
  [SMALL_STATE(58)] = 2078,
  [SMALL_STATE(59)] = 2102,
  [SMALL_STATE(60)] = 2122,
  [SMALL_STATE(61)] = 2146,
  [SMALL_STATE(62)] = 2176,
  [SMALL_STATE(63)] = 2206,
  [SMALL_STATE(64)] = 2231,
  [SMALL_STATE(65)] = 2250,
  [SMALL_STATE(66)] = 2273,
  [SMALL_STATE(67)] = 2298,
  [SMALL_STATE(68)] = 2317,
  [SMALL_STATE(69)] = 2336,
  [SMALL_STATE(70)] = 2355,
  [SMALL_STATE(71)] = 2374,
  [SMALL_STATE(72)] = 2393,
  [SMALL_STATE(73)] = 2412,
  [SMALL_STATE(74)] = 2431,
  [SMALL_STATE(75)] = 2450,
  [SMALL_STATE(76)] = 2475,
  [SMALL_STATE(77)] = 2499,
  [SMALL_STATE(78)] = 2523,
  [SMALL_STATE(79)] = 2547,
  [SMALL_STATE(80)] = 2571,
  [SMALL_STATE(81)] = 2595,
  [SMALL_STATE(82)] = 2619,
  [SMALL_STATE(83)] = 2643,
  [SMALL_STATE(84)] = 2663,
  [SMALL_STATE(85)] = 2683,
  [SMALL_STATE(86)] = 2701,
  [SMALL_STATE(87)] = 2720,
  [SMALL_STATE(88)] = 2739,
  [SMALL_STATE(89)] = 2758,
  [SMALL_STATE(90)] = 2777,
  [SMALL_STATE(91)] = 2796,
  [SMALL_STATE(92)] = 2816,
  [SMALL_STATE(93)] = 2834,
  [SMALL_STATE(94)] = 2854,
  [SMALL_STATE(95)] = 2874,
  [SMALL_STATE(96)] = 2896,
  [SMALL_STATE(97)] = 2916,
  [SMALL_STATE(98)] = 2936,
  [SMALL_STATE(99)] = 2954,
  [SMALL_STATE(100)] = 2974,
  [SMALL_STATE(101)] = 2994,
  [SMALL_STATE(102)] = 3012,
  [SMALL_STATE(103)] = 3034,
  [SMALL_STATE(104)] = 3052,
  [SMALL_STATE(105)] = 3070,
  [SMALL_STATE(106)] = 3088,
  [SMALL_STATE(107)] = 3110,
  [SMALL_STATE(108)] = 3133,
  [SMALL_STATE(109)] = 3146,
  [SMALL_STATE(110)] = 3165,
  [SMALL_STATE(111)] = 3186,
  [SMALL_STATE(112)] = 3205,
  [SMALL_STATE(113)] = 3228,
  [SMALL_STATE(114)] = 3251,
  [SMALL_STATE(115)] = 3270,
  [SMALL_STATE(116)] = 3291,
  [SMALL_STATE(117)] = 3308,
  [SMALL_STATE(118)] = 3325,
  [SMALL_STATE(119)] = 3340,
  [SMALL_STATE(120)] = 3357,
  [SMALL_STATE(121)] = 3374,
  [SMALL_STATE(122)] = 3391,
  [SMALL_STATE(123)] = 3408,
  [SMALL_STATE(124)] = 3425,
  [SMALL_STATE(125)] = 3440,
  [SMALL_STATE(126)] = 3457,
  [SMALL_STATE(127)] = 3469,
  [SMALL_STATE(128)] = 3481,
  [SMALL_STATE(129)] = 3493,
  [SMALL_STATE(130)] = 3505,
  [SMALL_STATE(131)] = 3517,
  [SMALL_STATE(132)] = 3529,
  [SMALL_STATE(133)] = 3541,
  [SMALL_STATE(134)] = 3553,
  [SMALL_STATE(135)] = 3565,
  [SMALL_STATE(136)] = 3577,
  [SMALL_STATE(137)] = 3589,
  [SMALL_STATE(138)] = 3601,
  [SMALL_STATE(139)] = 3613,
  [SMALL_STATE(140)] = 3625,
  [SMALL_STATE(141)] = 3639,
  [SMALL_STATE(142)] = 3651,
  [SMALL_STATE(143)] = 3663,
  [SMALL_STATE(144)] = 3677,
  [SMALL_STATE(145)] = 3688,
  [SMALL_STATE(146)] = 3699,
  [SMALL_STATE(147)] = 3710,
  [SMALL_STATE(148)] = 3721,
  [SMALL_STATE(149)] = 3732,
  [SMALL_STATE(150)] = 3743,
  [SMALL_STATE(151)] = 3754,
  [SMALL_STATE(152)] = 3765,
  [SMALL_STATE(153)] = 3776,
  [SMALL_STATE(154)] = 3785,
  [SMALL_STATE(155)] = 3796,
  [SMALL_STATE(156)] = 3807,
  [SMALL_STATE(157)] = 3818,
  [SMALL_STATE(158)] = 3829,
  [SMALL_STATE(159)] = 3840,
  [SMALL_STATE(160)] = 3851,
  [SMALL_STATE(161)] = 3862,
  [SMALL_STATE(162)] = 3873,
  [SMALL_STATE(163)] = 3882,
  [SMALL_STATE(164)] = 3893,
  [SMALL_STATE(165)] = 3904,
  [SMALL_STATE(166)] = 3915,
  [SMALL_STATE(167)] = 3926,
  [SMALL_STATE(168)] = 3937,
  [SMALL_STATE(169)] = 3948,
  [SMALL_STATE(170)] = 3959,
  [SMALL_STATE(171)] = 3970,
  [SMALL_STATE(172)] = 3981,
  [SMALL_STATE(173)] = 3992,
  [SMALL_STATE(174)] = 4003,
  [SMALL_STATE(175)] = 4014,
  [SMALL_STATE(176)] = 4025,
  [SMALL_STATE(177)] = 4036,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(42),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(20),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(175),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(32),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(42),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(141),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 6), SHIFT_REPEAT(94),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2, .production_id = 19),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 2, .production_id = 19),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 20),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 20),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 6, .production_id = 26),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 6, .production_id = 26),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 20),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 20),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 21),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 21),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 21),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 21),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 6, .production_id = 26),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 6, .production_id = 26),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(13),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(152),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(143),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(140),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(173),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_atom, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(156),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_atom, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_atom, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(145),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_term, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_term, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13), SHIFT_REPEAT(17),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(61),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 12),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 12),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 25),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 25),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 25), SHIFT_REPEAT(113),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 22),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 22),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 18),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 18),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 6, .production_id = 14),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 6, .production_id = 14),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 8, .production_id = 27),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 8, .production_id = 27),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 11),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 11),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 4, .production_id = 17),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 4, .production_id = 17),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 23),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 23),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 24),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 24),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(162),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(100),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 10),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(149),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(177),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(62),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 15),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 15), SHIFT_REPEAT(150),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_application_pattern, 2, .production_id = 9),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13), SHIFT_REPEAT(18),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 6), SHIFT_REPEAT(110),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 6),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 16),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 12),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 12),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_name, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [538] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
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
