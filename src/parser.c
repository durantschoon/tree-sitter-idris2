#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 451
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 38

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
  aux_sym__case_infix_operator_token1 = 19,
  sym__case = 20,
  sym__case_of = 21,
  sym__case_arrow = 22,
  sym__case_bar = 23,
  aux_sym__pattern_constructor_token1 = 24,
  sym_operator = 25,
  aux_sym__infix_operator_token1 = 26,
  anon_sym__ = 27,
  anon_sym_QMARK = 28,
  sym_doc_comment = 29,
  sym_line_comment = 30,
  sym_block_comment = 31,
  sym__integerDecimal = 32,
  sym__integerHexadecimal = 33,
  sym__integerOctal = 34,
  sym__integerBinary = 35,
  sym_double = 36,
  anon_sym_SQUOTE = 37,
  anon_sym_NUL = 38,
  anon_sym_SOH = 39,
  anon_sym_STX = 40,
  anon_sym_ETX = 41,
  anon_sym_EOT = 42,
  anon_sym_ENQ = 43,
  anon_sym_ACK = 44,
  anon_sym_BEL = 45,
  anon_sym_BS = 46,
  anon_sym_HT = 47,
  anon_sym_LF = 48,
  anon_sym_VT = 49,
  anon_sym_FF = 50,
  anon_sym_CR = 51,
  anon_sym_SO = 52,
  anon_sym_SI = 53,
  anon_sym_DLE = 54,
  anon_sym_DC1 = 55,
  anon_sym_DC2 = 56,
  anon_sym_DC3 = 57,
  anon_sym_DC4 = 58,
  anon_sym_NAK = 59,
  anon_sym_SYN = 60,
  anon_sym_ETB = 61,
  anon_sym_CAN = 62,
  anon_sym_EM = 63,
  anon_sym_SUB = 64,
  anon_sym_ESC = 65,
  anon_sym_FS = 66,
  anon_sym_GS = 67,
  anon_sym_RS = 68,
  anon_sym_US = 69,
  anon_sym_SP = 70,
  anon_sym_DEL = 71,
  aux_sym_char_token1 = 72,
  aux_sym_char_token2 = 73,
  aux_sym_char_token3 = 74,
  aux_sym_char_token4 = 75,
  aux_sym_char_token5 = 76,
  anon_sym_DQUOTE = 77,
  anon_sym_BSLASH_LBRACE = 78,
  aux_sym_string_token1 = 79,
  anon_sym_BSLASH_BSLASH = 80,
  aux_sym_string_token2 = 81,
  aux_sym_string_token3 = 82,
  sym_module = 83,
  sym_declaration = 84,
  sym_data_declaration = 85,
  sym_constructor_declaration = 86,
  sym_module_declaration = 87,
  sym_import_declaration = 88,
  sym_type_signature = 89,
  sym_function_definition = 90,
  sym_module_name = 91,
  sym_type = 92,
  sym__type_atom = 93,
  sym_explicit_binder = 94,
  sym_implicit_binder = 95,
  sym_expression = 96,
  sym_lambda_expression = 97,
  sym_application = 98,
  sym_infix_expression = 99,
  sym__expression_term = 100,
  sym__expression_atom = 101,
  sym_parenthesized_expression = 102,
  sym_case_expression = 103,
  sym_case_alternative = 104,
  sym__incomplete_case_expression = 105,
  sym__incomplete_case_alternative = 106,
  sym__case_body_expression = 107,
  sym__case_infix_expression = 108,
  sym__case_infix_operator = 109,
  sym_pattern = 110,
  sym_constructor_pattern = 111,
  sym_parenthesized_pattern = 112,
  sym_constructor_application_pattern = 113,
  sym__pattern_constructor = 114,
  sym_qualified_name = 115,
  sym_constructor_name = 116,
  sym_operator_name = 117,
  sym__infix_operator = 118,
  sym_hole = 119,
  sym_integer = 120,
  sym__number = 121,
  sym_char = 122,
  sym_string = 123,
  sym__text = 124,
  aux_sym_module_repeat1 = 125,
  aux_sym_data_declaration_repeat1 = 126,
  aux_sym_data_declaration_repeat2 = 127,
  aux_sym_function_definition_repeat1 = 128,
  aux_sym_module_name_repeat1 = 129,
  aux_sym_type_repeat1 = 130,
  aux_sym_explicit_binder_repeat1 = 131,
  aux_sym_lambda_expression_repeat1 = 132,
  aux_sym_application_repeat1 = 133,
  aux_sym_case_expression_repeat1 = 134,
  aux_sym_constructor_application_pattern_repeat1 = 135,
  aux_sym_string_repeat1 = 136,
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
  [aux_sym__case_infix_operator_token1] = "operator",
  [sym__case] = "_case",
  [sym__case_of] = "_case_of",
  [sym__case_arrow] = "_case_arrow",
  [sym__case_bar] = "_case_bar",
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
  [sym_case_expression] = "case_expression",
  [sym_case_alternative] = "case_alternative",
  [sym__incomplete_case_expression] = "_incomplete_case_expression",
  [sym__incomplete_case_alternative] = "_incomplete_case_alternative",
  [sym__case_body_expression] = "expression",
  [sym__case_infix_expression] = "_case_infix_expression",
  [sym__case_infix_operator] = "_case_infix_operator",
  [sym_pattern] = "pattern",
  [sym_constructor_pattern] = "constructor_pattern",
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
  [aux_sym_case_expression_repeat1] = "case_expression_repeat1",
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
  [aux_sym__case_infix_operator_token1] = sym_operator,
  [sym__case] = sym__case,
  [sym__case_of] = sym__case_of,
  [sym__case_arrow] = sym__case_arrow,
  [sym__case_bar] = sym__case_bar,
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
  [sym_case_expression] = sym_case_expression,
  [sym_case_alternative] = sym_case_alternative,
  [sym__incomplete_case_expression] = sym__incomplete_case_expression,
  [sym__incomplete_case_alternative] = sym__incomplete_case_alternative,
  [sym__case_body_expression] = sym_expression,
  [sym__case_infix_expression] = sym__case_infix_expression,
  [sym__case_infix_operator] = sym__case_infix_operator,
  [sym_pattern] = sym_pattern,
  [sym_constructor_pattern] = sym_constructor_pattern,
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
  [aux_sym_case_expression_repeat1] = aux_sym_case_expression_repeat1,
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
  [aux_sym__case_infix_operator_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__case] = {
    .visible = false,
    .named = true,
  },
  [sym__case_of] = {
    .visible = false,
    .named = true,
  },
  [sym__case_arrow] = {
    .visible = false,
    .named = true,
  },
  [sym__case_bar] = {
    .visible = false,
    .named = true,
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
  [sym_case_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_case_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym__incomplete_case_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__incomplete_case_alternative] = {
    .visible = false,
    .named = true,
  },
  [sym__case_body_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__case_infix_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__case_infix_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_pattern] = {
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
  [aux_sym_case_expression_repeat1] = {
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
  field_alternative = 1,
  field_argument = 2,
  field_body = 3,
  field_constructor = 4,
  field_function = 5,
  field_left = 6,
  field_name = 7,
  field_operator = 8,
  field_parameter = 9,
  field_parameters = 10,
  field_pattern = 11,
  field_right = 12,
  field_scrutinee = 13,
  field_type = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
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
  [field_scrutinee] = "scrutinee",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 4},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 1},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 4},
  [21] = {.index = 41, .length = 4},
  [22] = {.index = 45, .length = 1},
  [23] = {.index = 46, .length = 2},
  [24] = {.index = 48, .length = 2},
  [25] = {.index = 50, .length = 4},
  [26] = {.index = 54, .length = 3},
  [27] = {.index = 57, .length = 3},
  [28] = {.index = 60, .length = 1},
  [29] = {.index = 61, .length = 1},
  [30] = {.index = 62, .length = 2},
  [31] = {.index = 64, .length = 3},
  [32] = {.index = 67, .length = 5},
  [33] = {.index = 72, .length = 1},
  [34] = {.index = 73, .length = 2},
  [35] = {.index = 75, .length = 5},
  [36] = {.index = 80, .length = 3},
  [37] = {.index = 83, .length = 6},
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
    {field_alternative, 0, .inherited = true},
    {field_body, 0, .inherited = true},
    {field_pattern, 0, .inherited = true},
    {field_scrutinee, 0, .inherited = true},
  [11] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [13] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [15] =
    {field_pattern, 1},
  [16] =
    {field_argument, 1, .inherited = true},
    {field_constructor, 0},
  [18] =
    {field_body, 3},
    {field_name, 0},
    {field_parameter, 1, .inherited = true},
  [21] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [24] =
    {field_argument, 1},
  [25] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [27] =
    {field_constructor, 5},
    {field_name, 1},
    {field_type, 3},
  [30] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [32] =
    {field_parameter, 1},
  [33] =
    {field_body, 3},
    {field_parameter, 1},
  [35] =
    {field_alternative, 3},
    {field_scrutinee, 1},
  [37] =
    {field_alternative, 3},
    {field_body, 3, .inherited = true},
    {field_pattern, 3, .inherited = true},
    {field_scrutinee, 1},
  [41] =
    {field_constructor, 5},
    {field_constructor, 6, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [45] =
    {field_name, 0},
  [46] =
    {field_name, 1},
    {field_type, 3},
  [48] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [50] =
    {field_constructor, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
  [54] =
    {field_body, 4},
    {field_parameter, 1},
    {field_parameter, 2, .inherited = true},
  [57] =
    {field_alternative, 3},
    {field_alternative, 4, .inherited = true},
    {field_scrutinee, 1},
  [60] =
    {field_pattern, 0},
  [61] =
    {field_constructor, 1},
  [62] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [64] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [67] =
    {field_constructor, 6},
    {field_constructor, 7, .inherited = true},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
  [72] =
    {field_alternative, 1},
  [73] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [75] =
    {field_body, 2},
    {field_left, 2, .inherited = true},
    {field_operator, 2, .inherited = true},
    {field_pattern, 0},
    {field_right, 2, .inherited = true},
  [80] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [83] =
    {field_left, 0},
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_operator, 1},
    {field_right, 0, .inherited = true},
    {field_right, 2},
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
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(161);
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(163);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(72)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(121);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(257);
      if (lookahead == 'D') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'F') ADVANCE(262);
      if (lookahead == 'G') ADVANCE(266);
      if (lookahead == 'H') ADVANCE(269);
      if (lookahead == 'L') ADVANCE(263);
      if (lookahead == 'N') ADVANCE(258);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == 'U') ADVANCE(268);
      if (lookahead == 'V') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(161);
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(163);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(121);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(161);
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(163);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == '{') ADVANCE(297);
      if (lookahead == '|') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(274);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(282);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '|') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '2') ADVANCE(218);
      if (lookahead == '3') ADVANCE(220);
      if (lookahead == '4') ADVANCE(222);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(228);
      if (lookahead == 'X') ADVANCE(188);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(234);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(236);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 50:
      if (lookahead == 'K') ADVANCE(194);
      END_STATE();
    case 51:
      if (lookahead == 'K') ADVANCE(224);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(248);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(230);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(226);
      END_STATE();
    case 57:
      if (lookahead == 'Q') ADVANCE(192);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(190);
      END_STATE();
    case 59:
      if (lookahead == 'X') ADVANCE(186);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == '|') ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '}') ADVANCE(137);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == '}') ADVANCE(127);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 66:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 72:
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(161);
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(163);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(121);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 73:
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 74:
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(75)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 75:
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 76:
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(77)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 77:
      if (eof) ADVANCE(87);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '?') ADVANCE(126);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 78:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 79:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(82)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 80:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(82)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 81:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(82)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 82:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 83:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 84:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__equals);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__equals);
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__case_infix_operator_token1);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__case_infix_operator_token1);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__case_infix_operator_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__case_of);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__case_arrow);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__case_bar);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__pattern_constructor_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '>') ADVANCE(94);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(135);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(101);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(120);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '-') ADVANCE(125);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_doc_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(217);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '4') ADVANCE(223);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(229);
      if (lookahead == 'X') ADVANCE(189);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(235);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(152);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'E') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(199);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(215);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(207);
      if (lookahead == 'S') ADVANCE(239);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(203);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'O') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(247);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'Y') ADVANCE(159);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(195);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(225);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(249);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(183);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(233);
      if (lookahead == 'N') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(227);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(193);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(241);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(243);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(201);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(191);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(187);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (lookahead == '\'' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(185);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(184);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(257);
      if (lookahead == 'D') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'F') ADVANCE(262);
      if (lookahead == 'G') ADVANCE(266);
      if (lookahead == 'H') ADVANCE(269);
      if (lookahead == 'L') ADVANCE(263);
      if (lookahead == 'N') ADVANCE(258);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == 'U') ADVANCE(268);
      if (lookahead == 'V') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 'x') ADVANCE(273);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(54);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(198);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(238);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(202);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'O') ADVANCE(211);
      if (lookahead == 'P') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == 'U') ADVANCE(47);
      if (lookahead == 'Y') ADVANCE(56);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(232);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(240);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(242);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(244);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(136);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(282);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '|') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '|') ADVANCE(286);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(290);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(137);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == '{') ADVANCE(297);
      if (lookahead == '|') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(42);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(292);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(42);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(306);
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
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'w') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__case);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 73},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 73},
  [44] = {.lex_state = 73},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 73},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 73},
  [49] = {.lex_state = 73},
  [50] = {.lex_state = 73},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 73},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 73},
  [69] = {.lex_state = 73},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 73},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 73},
  [77] = {.lex_state = 73},
  [78] = {.lex_state = 73},
  [79] = {.lex_state = 73},
  [80] = {.lex_state = 73},
  [81] = {.lex_state = 73},
  [82] = {.lex_state = 73},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 78},
  [87] = {.lex_state = 78},
  [88] = {.lex_state = 78},
  [89] = {.lex_state = 78},
  [90] = {.lex_state = 78},
  [91] = {.lex_state = 78},
  [92] = {.lex_state = 78},
  [93] = {.lex_state = 78},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 73},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 73},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 76},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 76},
  [106] = {.lex_state = 76},
  [107] = {.lex_state = 73},
  [108] = {.lex_state = 79},
  [109] = {.lex_state = 79},
  [110] = {.lex_state = 79},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 80},
  [113] = {.lex_state = 79},
  [114] = {.lex_state = 76},
  [115] = {.lex_state = 73},
  [116] = {.lex_state = 80},
  [117] = {.lex_state = 76},
  [118] = {.lex_state = 80},
  [119] = {.lex_state = 73},
  [120] = {.lex_state = 73},
  [121] = {.lex_state = 80},
  [122] = {.lex_state = 80},
  [123] = {.lex_state = 80},
  [124] = {.lex_state = 80},
  [125] = {.lex_state = 80},
  [126] = {.lex_state = 79},
  [127] = {.lex_state = 81},
  [128] = {.lex_state = 73},
  [129] = {.lex_state = 79},
  [130] = {.lex_state = 79},
  [131] = {.lex_state = 73},
  [132] = {.lex_state = 81},
  [133] = {.lex_state = 81},
  [134] = {.lex_state = 76},
  [135] = {.lex_state = 79},
  [136] = {.lex_state = 79},
  [137] = {.lex_state = 79},
  [138] = {.lex_state = 79},
  [139] = {.lex_state = 73},
  [140] = {.lex_state = 81},
  [141] = {.lex_state = 79},
  [142] = {.lex_state = 79},
  [143] = {.lex_state = 81},
  [144] = {.lex_state = 79},
  [145] = {.lex_state = 79},
  [146] = {.lex_state = 79},
  [147] = {.lex_state = 79},
  [148] = {.lex_state = 80},
  [149] = {.lex_state = 83},
  [150] = {.lex_state = 80},
  [151] = {.lex_state = 79},
  [152] = {.lex_state = 79},
  [153] = {.lex_state = 81},
  [154] = {.lex_state = 80},
  [155] = {.lex_state = 84},
  [156] = {.lex_state = 80},
  [157] = {.lex_state = 84},
  [158] = {.lex_state = 80},
  [159] = {.lex_state = 80},
  [160] = {.lex_state = 80},
  [161] = {.lex_state = 80},
  [162] = {.lex_state = 81},
  [163] = {.lex_state = 80},
  [164] = {.lex_state = 73},
  [165] = {.lex_state = 81},
  [166] = {.lex_state = 81},
  [167] = {.lex_state = 81},
  [168] = {.lex_state = 83},
  [169] = {.lex_state = 81},
  [170] = {.lex_state = 81},
  [171] = {.lex_state = 81},
  [172] = {.lex_state = 76},
  [173] = {.lex_state = 76},
  [174] = {.lex_state = 76},
  [175] = {.lex_state = 84},
  [176] = {.lex_state = 81},
  [177] = {.lex_state = 81},
  [178] = {.lex_state = 85},
  [179] = {.lex_state = 81},
  [180] = {.lex_state = 84},
  [181] = {.lex_state = 81},
  [182] = {.lex_state = 76},
  [183] = {.lex_state = 74},
  [184] = {.lex_state = 76},
  [185] = {.lex_state = 73},
  [186] = {.lex_state = 85},
  [187] = {.lex_state = 74},
  [188] = {.lex_state = 74},
  [189] = {.lex_state = 76},
  [190] = {.lex_state = 74},
  [191] = {.lex_state = 74},
  [192] = {.lex_state = 74},
  [193] = {.lex_state = 76},
  [194] = {.lex_state = 76},
  [195] = {.lex_state = 74},
  [196] = {.lex_state = 74},
  [197] = {.lex_state = 73},
  [198] = {.lex_state = 74},
  [199] = {.lex_state = 74},
  [200] = {.lex_state = 76},
  [201] = {.lex_state = 74},
  [202] = {.lex_state = 74},
  [203] = {.lex_state = 76},
  [204] = {.lex_state = 74},
  [205] = {.lex_state = 74},
  [206] = {.lex_state = 76},
  [207] = {.lex_state = 76},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 73},
  [215] = {.lex_state = 28},
  [216] = {.lex_state = 73},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 14},
  [220] = {.lex_state = 27},
  [221] = {.lex_state = 27},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 14},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 73},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 28},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 14},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 73},
  [233] = {.lex_state = 73},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 28},
  [238] = {.lex_state = 73},
  [239] = {.lex_state = 14},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 73},
  [242] = {.lex_state = 29},
  [243] = {.lex_state = 73},
  [244] = {.lex_state = 73},
  [245] = {.lex_state = 73},
  [246] = {.lex_state = 73},
  [247] = {.lex_state = 27},
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 28},
  [250] = {.lex_state = 73},
  [251] = {.lex_state = 29},
  [252] = {.lex_state = 73},
  [253] = {.lex_state = 76},
  [254] = {.lex_state = 73},
  [255] = {.lex_state = 28},
  [256] = {.lex_state = 76},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 73},
  [259] = {.lex_state = 73},
  [260] = {.lex_state = 76},
  [261] = {.lex_state = 29},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 28},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 27},
  [266] = {.lex_state = 28},
  [267] = {.lex_state = 27},
  [268] = {.lex_state = 27},
  [269] = {.lex_state = 27},
  [270] = {.lex_state = 27},
  [271] = {.lex_state = 33},
  [272] = {.lex_state = 28},
  [273] = {.lex_state = 29},
  [274] = {.lex_state = 28},
  [275] = {.lex_state = 29},
  [276] = {.lex_state = 29},
  [277] = {.lex_state = 29},
  [278] = {.lex_state = 19},
  [279] = {.lex_state = 27},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 28},
  [282] = {.lex_state = 29},
  [283] = {.lex_state = 28},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 34},
  [286] = {.lex_state = 27},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 28},
  [289] = {.lex_state = 28},
  [290] = {.lex_state = 27},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 28},
  [293] = {.lex_state = 28},
  [294] = {.lex_state = 34},
  [295] = {.lex_state = 28},
  [296] = {.lex_state = 19},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 33},
  [299] = {.lex_state = 34},
  [300] = {.lex_state = 34},
  [301] = {.lex_state = 19},
  [302] = {.lex_state = 29},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 19},
  [307] = {.lex_state = 74},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 12},
  [312] = {.lex_state = 19},
  [313] = {.lex_state = 74},
  [314] = {.lex_state = 74},
  [315] = {.lex_state = 19},
  [316] = {.lex_state = 29},
  [317] = {.lex_state = 19},
  [318] = {.lex_state = 35},
  [319] = {.lex_state = 74},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 19},
  [323] = {.lex_state = 10},
  [324] = {.lex_state = 29},
  [325] = {.lex_state = 29},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 19},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 12},
  [330] = {.lex_state = 19},
  [331] = {.lex_state = 29},
  [332] = {.lex_state = 10},
  [333] = {.lex_state = 12},
  [334] = {.lex_state = 10},
  [335] = {.lex_state = 10},
  [336] = {.lex_state = 74},
  [337] = {.lex_state = 10},
  [338] = {.lex_state = 10},
  [339] = {.lex_state = 29},
  [340] = {.lex_state = 10},
  [341] = {.lex_state = 10},
  [342] = {.lex_state = 10},
  [343] = {.lex_state = 29},
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 29},
  [346] = {.lex_state = 10},
  [347] = {.lex_state = 19},
  [348] = {.lex_state = 19},
  [349] = {.lex_state = 19},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 40},
  [352] = {.lex_state = 40},
  [353] = {.lex_state = 19},
  [354] = {.lex_state = 19},
  [355] = {.lex_state = 12},
  [356] = {.lex_state = 40},
  [357] = {.lex_state = 10},
  [358] = {.lex_state = 35},
  [359] = {.lex_state = 19},
  [360] = {.lex_state = 12},
  [361] = {.lex_state = 12},
  [362] = {.lex_state = 40},
  [363] = {.lex_state = 40},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 73},
  [366] = {.lex_state = 19},
  [367] = {.lex_state = 12},
  [368] = {.lex_state = 40},
  [369] = {.lex_state = 12},
  [370] = {.lex_state = 12},
  [371] = {.lex_state = 12},
  [372] = {.lex_state = 40},
  [373] = {.lex_state = 73},
  [374] = {.lex_state = 12},
  [375] = {.lex_state = 12},
  [376] = {.lex_state = 40},
  [377] = {.lex_state = 73},
  [378] = {.lex_state = 73},
  [379] = {.lex_state = 73},
  [380] = {.lex_state = 19},
  [381] = {.lex_state = 73},
  [382] = {.lex_state = 73},
  [383] = {.lex_state = 73},
  [384] = {.lex_state = 73},
  [385] = {.lex_state = 73},
  [386] = {.lex_state = 73},
  [387] = {.lex_state = 73},
  [388] = {.lex_state = 32},
  [389] = {.lex_state = 73},
  [390] = {.lex_state = 73},
  [391] = {.lex_state = 32},
  [392] = {.lex_state = 73},
  [393] = {.lex_state = 73},
  [394] = {.lex_state = 73},
  [395] = {.lex_state = 73},
  [396] = {.lex_state = 32},
  [397] = {.lex_state = 73},
  [398] = {.lex_state = 32},
  [399] = {.lex_state = 32},
  [400] = {.lex_state = 73},
  [401] = {.lex_state = 73},
  [402] = {.lex_state = 73},
  [403] = {.lex_state = 73},
  [404] = {.lex_state = 32},
  [405] = {.lex_state = 73},
  [406] = {.lex_state = 73},
  [407] = {.lex_state = 73},
  [408] = {.lex_state = 73},
  [409] = {.lex_state = 32},
  [410] = {.lex_state = 73},
  [411] = {.lex_state = 73},
  [412] = {.lex_state = 73},
  [413] = {.lex_state = 73},
  [414] = {.lex_state = 73},
  [415] = {.lex_state = 73},
  [416] = {.lex_state = 73},
  [417] = {.lex_state = 32},
  [418] = {.lex_state = 73},
  [419] = {.lex_state = 41},
  [420] = {.lex_state = 73},
  [421] = {.lex_state = 73},
  [422] = {.lex_state = 32},
  [423] = {.lex_state = 73},
  [424] = {.lex_state = 73},
  [425] = {.lex_state = 32},
  [426] = {.lex_state = 32},
  [427] = {.lex_state = 73},
  [428] = {.lex_state = 73},
  [429] = {.lex_state = 73},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 10},
  [432] = {.lex_state = 73},
  [433] = {.lex_state = 73},
  [434] = {.lex_state = 73},
  [435] = {.lex_state = 32},
  [436] = {.lex_state = 73},
  [437] = {.lex_state = 73},
  [438] = {.lex_state = 73},
  [439] = {.lex_state = 73},
  [440] = {.lex_state = 73},
  [441] = {.lex_state = 32},
  [442] = {.lex_state = 26},
  [443] = {.lex_state = 73},
  [444] = {.lex_state = 73},
  [445] = {.lex_state = 73},
  [446] = {.lex_state = 32},
  [447] = {.lex_state = 73},
  [448] = {.lex_state = 73},
  [449] = {.lex_state = 73},
  [450] = {.lex_state = 32},
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
    [aux_sym__case_infix_operator_token1] = ACTIONS(1),
    [sym__case] = ACTIONS(1),
    [sym__case_of] = ACTIONS(1),
    [sym__case_arrow] = ACTIONS(1),
    [sym__case_bar] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
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
    [sym_module] = STATE(440),
    [sym_declaration] = STATE(95),
    [sym_data_declaration] = STATE(214),
    [sym_module_declaration] = STATE(214),
    [sym_import_declaration] = STATE(214),
    [sym_type_signature] = STATE(214),
    [sym_function_definition] = STATE(214),
    [sym_operator_name] = STATE(70),
    [aux_sym_module_repeat1] = STATE(95),
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
  [138] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 38,
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
  [184] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 38,
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
  [230] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 38,
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
  [276] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 38,
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
  [322] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 38,
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
  [368] = 21,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      sym__case,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      sym__integerDecimal,
    ACTIONS(55), 1,
      sym_double,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_application,
    STATE(157), 1,
      sym__case_infix_expression,
    STATE(202), 1,
      sym__case_body_expression,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    STATE(190), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(39), 3,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(113), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [447] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(69), 1,
      sym_operator,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(438), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [522] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(69), 1,
      sym_operator,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(421), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [597] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(69), 1,
      sym_operator,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(448), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [672] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(69), 1,
      sym_operator,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(410), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [747] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(69), 1,
      sym_operator,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(383), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [822] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(69), 1,
      sym_operator,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(406), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [897] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(399), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [969] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(383), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1041] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(360), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1113] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      sym__case,
    STATE(183), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1185] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(369), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1257] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(448), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1329] = 20,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      sym__integerDecimal,
    ACTIONS(55), 1,
      sym_double,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__case,
    STATE(155), 1,
      sym_application,
    STATE(157), 1,
      sym__case_infix_expression,
    STATE(202), 1,
      sym__case_body_expression,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_RPAREN,
      sym__case_bar,
    STATE(190), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(113), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1403] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1475] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__case,
    ACTIONS(121), 1,
      anon_sym__,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(125), 1,
      sym__integerDecimal,
    ACTIONS(129), 1,
      sym_double,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(349), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(149), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(123), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1547] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      sym__case,
    STATE(198), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1619] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(446), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1691] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(404), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1763] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(422), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1835] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(198), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1907] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym__case,
    ACTIONS(121), 1,
      anon_sym__,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(125), 1,
      sym__integerDecimal,
    ACTIONS(129), 1,
      sym_double,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(349), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(149), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(123), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1979] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2051] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(425), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2123] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(388), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2195] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(426), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2267] = 20,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      sym__case,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(145), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      sym__integerDecimal,
    ACTIONS(151), 1,
      sym_double,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      sym__case_infix_expression,
    STATE(294), 1,
      sym_application,
    STATE(353), 1,
      sym_operator_name,
    STATE(374), 1,
      sym__case_body_expression,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      sym__case_of,
      sym__case_bar,
    STATE(371), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(149), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(215), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2341] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym__,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(125), 1,
      sym__integerDecimal,
    ACTIONS(129), 1,
      sym_double,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym__case,
    STATE(198), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(349), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(149), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(123), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2413] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym__,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(125), 1,
      sym__integerDecimal,
    ACTIONS(129), 1,
      sym_double,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym__case,
    STATE(183), 1,
      sym_expression,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(349), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(149), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(123), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2485] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(450), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(318), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2557] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(438), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2629] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      sym__case,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(233), 1,
      sym_expression,
    STATE(366), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2701] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym__case,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(167), 1,
      anon_sym_QMARK,
    ACTIONS(169), 1,
      sym__integerDecimal,
    ACTIONS(173), 1,
      sym_double,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(360), 1,
      sym_expression,
    STATE(364), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(171), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(271), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(247), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2773] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym__case,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(167), 1,
      anon_sym_QMARK,
    ACTIONS(169), 1,
      sym__integerDecimal,
    ACTIONS(173), 1,
      sym_double,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(355), 1,
      sym__incomplete_case_expression,
    STATE(364), 1,
      sym_operator_name,
    STATE(369), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(171), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(271), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(247), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2845] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(421), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2917] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(406), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2989] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      sym__case,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(225), 1,
      sym_expression,
    STATE(366), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3061] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      sym__case,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym__incomplete_case_expression,
    STATE(366), 1,
      sym_operator_name,
    STATE(410), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(178), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3133] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      sym__integerDecimal,
    ACTIONS(55), 1,
      sym_double,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__case,
    STATE(155), 1,
      sym_application,
    STATE(157), 1,
      sym__case_infix_expression,
    STATE(196), 1,
      sym__case_body_expression,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(190), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(113), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3203] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      sym__case,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      sym__integerDecimal,
    ACTIONS(55), 1,
      sym_double,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_application,
    STATE(157), 1,
      sym__case_infix_expression,
    STATE(196), 1,
      sym__case_body_expression,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(190), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(113), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3273] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(141), 1,
      sym__case,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(145), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      sym__integerDecimal,
    ACTIONS(151), 1,
      sym_double,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      sym__case_infix_expression,
    STATE(294), 1,
      sym_application,
    STATE(353), 1,
      sym_operator_name,
    STATE(375), 1,
      sym__case_body_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(371), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(149), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(215), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3343] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_case_alternative,
    STATE(205), 1,
      sym__incomplete_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(409), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3406] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      sym__pattern_constructor,
    STATE(333), 1,
      sym_case_alternative,
    STATE(367), 1,
      sym__incomplete_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(417), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3469] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_case_alternative,
    STATE(205), 1,
      sym__incomplete_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(409), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3532] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym__incomplete_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    STATE(336), 1,
      sym_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(435), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3595] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym__incomplete_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    STATE(319), 1,
      sym_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(435), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3658] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    STATE(367), 1,
      sym__incomplete_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(417), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3721] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      sym__pattern_constructor,
    STATE(370), 1,
      sym_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(398), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3781] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      sym__pattern_constructor,
    STATE(333), 1,
      sym_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(398), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3841] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(441), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3901] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(391), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3961] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      sym__pattern_constructor,
    STATE(336), 1,
      sym_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(441), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4021] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_case_alternative,
    STATE(312), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(391), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4081] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(167), 1,
      anon_sym_QMARK,
    ACTIONS(169), 1,
      sym__integerDecimal,
    ACTIONS(173), 1,
      sym_double,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(298), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(171), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(247), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4136] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(79), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(366), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(186), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(143), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4191] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym__,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(125), 1,
      sym__integerDecimal,
    ACTIONS(129), 1,
      sym_double,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(349), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(168), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(123), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4246] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(101), 1,
      sym_double,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(358), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(273), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4301] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(145), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      sym__integerDecimal,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym_double,
    STATE(299), 1,
      sym_application,
    STATE(353), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(149), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(266), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4355] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(145), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      sym__integerDecimal,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_double,
    STATE(300), 1,
      sym_application,
    STATE(353), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(149), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(262), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4409] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      sym__integerDecimal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_double,
    STATE(175), 1,
      sym_application,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(135), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4463] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(207), 1,
      sym__equals,
    STATE(74), 1,
      aux_sym_function_definition_repeat1,
    STATE(117), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4521] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      aux_sym__pattern_constructor_token1,
    STATE(359), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(443), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4577] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      sym__integerDecimal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      sym_double,
    STATE(180), 1,
      sym_application,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(130), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4631] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      aux_sym__pattern_constructor_token1,
    STATE(359), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(393), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4687] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      sym__integerDecimal,
    ACTIONS(193), 1,
      sym_double,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym__equals,
    STATE(75), 1,
      aux_sym_function_definition_repeat1,
    STATE(117), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(191), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4742] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(218), 1,
      sym__equals,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym__,
    ACTIONS(226), 1,
      anon_sym_QMARK,
    ACTIONS(229), 1,
      sym__integerDecimal,
    ACTIONS(235), 1,
      sym_double,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_function_definition_repeat1,
    STATE(117), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(232), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(100), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4797] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym__,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(125), 1,
      sym__integerDecimal,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(150), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4845] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      sym__integerDecimal,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(142), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4893] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(145), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      sym__integerDecimal,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(149), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(274), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4941] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_QMARK,
    ACTIONS(75), 1,
      sym__integerDecimal,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4989] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym__integerDecimal,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(325), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5037] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(167), 1,
      anon_sym_QMARK,
    ACTIONS(169), 1,
      sym__integerDecimal,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(171), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(291), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5085] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      anon_sym__,
    ACTIONS(274), 1,
      anon_sym_QMARK,
    ACTIONS(276), 1,
      sym__integerDecimal,
    ACTIONS(280), 1,
      sym_double,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(278), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(315), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5131] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(286), 5,
      anon_sym_where,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(288), 12,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5160] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(290), 5,
      anon_sym_where,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(292), 12,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5189] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym__,
    ACTIONS(306), 1,
      anon_sym_QMARK,
    STATE(206), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
    STATE(173), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [5231] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(310), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(308), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5258] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(314), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5285] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(318), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5312] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(322), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5339] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(326), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5366] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(330), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5393] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(334), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5420] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(338), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5447] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(340), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(342), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5473] = 11,
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
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(97), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(214), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [5513] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(346), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(348), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5539] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(355), 1,
      anon_sym_data,
    ACTIONS(358), 1,
      anon_sym_module,
    ACTIONS(361), 1,
      anon_sym_import,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(97), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(214), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [5579] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(367), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(369), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5605] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(371), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(373), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5631] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(375), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(377), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5657] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(379), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(381), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5683] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(385), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_arrow,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5709] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(387), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(389), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [5738] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      anon_sym_DOT,
    STATE(103), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(393), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(395), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [5767] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(397), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(399), 10,
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
  [5792] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(405), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(401), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(403), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [5821] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(260), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [5857] = 5,
    ACTIONS(414), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(412), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [5883] = 5,
    ACTIONS(414), 1,
      anon_sym_DOT,
    STATE(110), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(389), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [5909] = 5,
    ACTIONS(416), 1,
      anon_sym_DOT,
    STATE(110), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(403), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [5935] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(420), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(260), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [5971] = 5,
    ACTIONS(421), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(412), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [5997] = 7,
    ACTIONS(427), 1,
      aux_sym_application_token1,
    ACTIONS(429), 1,
      aux_sym__case_infix_operator_token1,
    STATE(69), 1,
      sym__case_infix_operator,
    STATE(129), 1,
      aux_sym_application_repeat1,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6027] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(401), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(403), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6051] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(260), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6087] = 5,
    ACTIONS(421), 1,
      anon_sym_DOT,
    STATE(118), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(389), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6113] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(433), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(435), 9,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6137] = 5,
    ACTIONS(437), 1,
      anon_sym_DOT,
    STATE(118), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6163] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(260), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6199] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym__,
    ACTIONS(306), 1,
      anon_sym_QMARK,
    STATE(216), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(173), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6232] = 5,
    ACTIONS(446), 1,
      aux_sym_application_token1,
    STATE(124), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6257] = 5,
    ACTIONS(446), 1,
      aux_sym_application_token1,
    STATE(124), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6282] = 5,
    ACTIONS(446), 1,
      aux_sym_application_token1,
    STATE(121), 1,
      aux_sym_application_repeat1,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(450), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6307] = 5,
    ACTIONS(456), 1,
      aux_sym_application_token1,
    STATE(124), 1,
      aux_sym_application_repeat1,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6332] = 3,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 9,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6353] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(403), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6374] = 5,
    ACTIONS(459), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(412), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6399] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(434), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(260), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6432] = 5,
    ACTIONS(427), 1,
      aux_sym_application_token1,
    STATE(137), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(444), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6457] = 5,
    ACTIONS(427), 1,
      aux_sym_application_token1,
    STATE(129), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(461), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(463), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6482] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(386), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(260), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6515] = 5,
    ACTIONS(459), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(389), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6540] = 5,
    ACTIONS(465), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6565] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(468), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(470), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6588] = 5,
    ACTIONS(427), 1,
      aux_sym_application_token1,
    STATE(129), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(474), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6613] = 5,
    ACTIONS(427), 1,
      aux_sym_application_token1,
    STATE(137), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(444), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6638] = 5,
    ACTIONS(476), 1,
      aux_sym_application_token1,
    STATE(137), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(452), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(454), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6663] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(290), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6683] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(134), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6713] = 5,
    ACTIONS(479), 1,
      aux_sym_application_token1,
    STATE(162), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6737] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(367), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6757] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(481), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(483), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6777] = 5,
    ACTIONS(479), 1,
      aux_sym_application_token1,
    STATE(153), 1,
      aux_sym_application_repeat1,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(450), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6801] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(346), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6821] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(485), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(487), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6841] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(371), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6861] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(385), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(383), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6881] = 3,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6901] = 5,
    ACTIONS(493), 1,
      aux_sym__infix_operator_token1,
    STATE(65), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(489), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(491), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6925] = 3,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(483), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6945] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(381), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(379), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6965] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(286), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6985] = 5,
    ACTIONS(479), 1,
      aux_sym_application_token1,
    STATE(162), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7009] = 3,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(367), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7029] = 5,
    ACTIONS(429), 1,
      aux_sym__case_infix_operator_token1,
    STATE(69), 1,
      sym__case_infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(425), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7053] = 3,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7073] = 5,
    ACTIONS(499), 1,
      aux_sym__case_infix_operator_token1,
    STATE(72), 1,
      sym__case_infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(497), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7097] = 3,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7117] = 3,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7137] = 3,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7157] = 3,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7177] = 5,
    ACTIONS(501), 1,
      aux_sym_application_token1,
    STATE(162), 1,
      aux_sym_application_repeat1,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7201] = 3,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7221] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym__,
    ACTIONS(306), 1,
      anon_sym_QMARK,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(134), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [7251] = 3,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7271] = 3,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(367), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7290] = 3,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(483), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7309] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(504), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(506), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7328] = 3,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7347] = 3,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7366] = 3,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7385] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    STATE(172), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(470), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7410] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      anon_sym_DASH_GT,
    STATE(174), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(513), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7435] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      anon_sym_DASH_GT,
    STATE(172), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(519), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7460] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(472), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
  [7479] = 3,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7498] = 3,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7517] = 5,
    ACTIONS(521), 1,
      aux_sym__infix_operator_token1,
    STATE(64), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(489), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(491), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7540] = 3,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7559] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(461), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
  [7578] = 3,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7597] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      anon_sym_PIPE,
    STATE(193), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(523), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(525), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7621] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(529), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(531), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7641] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(290), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7661] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      anon_sym_DOT,
    STATE(197), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(535), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7685] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(504), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
    ACTIONS(506), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7703] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(195), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(537), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__case_bar,
    ACTIONS(539), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7725] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym__case_bar,
    STATE(195), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(539), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7749] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      anon_sym_PIPE,
    STATE(182), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(543), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(545), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7773] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(425), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7793] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym__case_bar,
    STATE(187), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(549), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7817] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(489), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(491), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7837] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(555), 1,
      anon_sym_PIPE,
    STATE(193), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(553), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7861] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      anon_sym_PIPE,
    STATE(200), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(558), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(560), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7885] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      sym__case_bar,
    STATE(195), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(564), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7909] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(569), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(571), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7929] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(573), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(575), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7953] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(577), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(579), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7973] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(581), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(583), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7993] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      anon_sym_PIPE,
    STATE(193), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(587), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8017] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(589), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(591), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8037] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(569), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(571), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8057] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(286), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8077] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      sym__case_bar,
    STATE(188), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(549), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8101] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(593), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(595), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8121] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(597), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(599), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8140] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(601), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(603), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8159] = 5,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(223), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(609), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8179] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    STATE(235), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(613), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8199] = 5,
    ACTIONS(615), 1,
      anon_sym_DOT,
    STATE(221), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(410), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(412), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8219] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8239] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(623), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8259] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8279] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(629), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8297] = 6,
    ACTIONS(631), 1,
      aux_sym_application_token1,
    ACTIONS(633), 1,
      aux_sym__case_infix_operator_token1,
    STATE(68), 1,
      sym__case_infix_operator,
    STATE(248), 1,
      aux_sym_application_repeat1,
    ACTIONS(423), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8319] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(635), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(637), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8337] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8357] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8377] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(645), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(647), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8397] = 5,
    ACTIONS(649), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(401), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(403), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8417] = 5,
    ACTIONS(615), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(387), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(389), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8437] = 5,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    ACTIONS(654), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(657), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8457] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8477] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(234), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [8499] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(664), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(666), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8517] = 5,
    ACTIONS(389), 1,
      aux_sym_application_token1,
    ACTIONS(668), 1,
      anon_sym_DOT,
    STATE(227), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8537] = 5,
    ACTIONS(403), 1,
      aux_sym_application_token1,
    ACTIONS(670), 1,
      anon_sym_DOT,
    STATE(227), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8557] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(675), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8577] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    STATE(231), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(679), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8597] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8617] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8637] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(687), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8655] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(691), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8673] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(693), 1,
      anon_sym_COLON,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(234), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [8695] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8715] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(705), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8735] = 5,
    ACTIONS(412), 1,
      aux_sym_application_token1,
    ACTIONS(668), 1,
      anon_sym_DOT,
    STATE(226), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8755] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(709), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8773] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8793] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(224), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [8815] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      sym_identifier,
    STATE(189), 1,
      sym_constructor_declaration,
    STATE(430), 1,
      sym_constructor_name,
    STATE(431), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [8838] = 5,
    ACTIONS(389), 1,
      aux_sym_application_token1,
    ACTIONS(717), 1,
      anon_sym_DOT,
    STATE(261), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(387), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8857] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(303), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [8878] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      sym_identifier,
    STATE(207), 1,
      sym_constructor_declaration,
    STATE(430), 1,
      sym_constructor_name,
    STATE(431), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [8901] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(721), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(344), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [8922] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(321), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [8943] = 5,
    ACTIONS(450), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(725), 1,
      aux_sym_application_token1,
    STATE(267), 1,
      aux_sym_application_repeat1,
    ACTIONS(448), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8962] = 4,
    ACTIONS(631), 1,
      aux_sym_application_token1,
    STATE(255), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8979] = 4,
    ACTIONS(631), 1,
      aux_sym_application_token1,
    STATE(255), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8996] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(350), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9017] = 5,
    ACTIONS(412), 1,
      aux_sym_application_token1,
    ACTIONS(717), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(410), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9036] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(338), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9057] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(731), 1,
      anon_sym_DASH_GT,
    STATE(256), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(517), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9076] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      sym_identifier,
    STATE(194), 1,
      sym_constructor_declaration,
    STATE(430), 1,
      sym_constructor_name,
    STATE(431), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9099] = 4,
    ACTIONS(733), 1,
      aux_sym_application_token1,
    STATE(255), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(452), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9116] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(736), 1,
      anon_sym_DASH_GT,
    STATE(256), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(468), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9135] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(739), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9148] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(297), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9169] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(337), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9190] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(731), 1,
      anon_sym_DASH_GT,
    STATE(253), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(511), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9209] = 5,
    ACTIONS(403), 1,
      aux_sym_application_token1,
    ACTIONS(745), 1,
      anon_sym_DOT,
    STATE(261), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(401), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9228] = 4,
    ACTIONS(631), 1,
      aux_sym_application_token1,
    STATE(248), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9245] = 3,
    ACTIONS(403), 2,
      anon_sym_DOT,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9260] = 5,
    ACTIONS(454), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(748), 1,
      aux_sym_application_token1,
    STATE(264), 1,
      aux_sym_application_repeat1,
    ACTIONS(452), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9279] = 3,
    ACTIONS(401), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 3,
      anon_sym_DOT,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
  [9294] = 4,
    ACTIONS(631), 1,
      aux_sym_application_token1,
    STATE(248), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(461), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9311] = 5,
    ACTIONS(444), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(725), 1,
      aux_sym_application_token1,
    STATE(264), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9330] = 5,
    ACTIONS(444), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(725), 1,
      aux_sym_application_token1,
    STATE(264), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9349] = 3,
    ACTIONS(379), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(381), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9363] = 3,
    ACTIONS(346), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(348), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9377] = 4,
    ACTIONS(751), 1,
      aux_sym__infix_operator_token1,
    STATE(63), 1,
      sym__infix_operator,
    ACTIONS(489), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9393] = 3,
    ACTIONS(487), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(485), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9407] = 4,
    ACTIONS(753), 1,
      aux_sym_application_token1,
    STATE(275), 1,
      aux_sym_application_repeat1,
    ACTIONS(448), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9423] = 3,
    ACTIONS(483), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(481), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9437] = 4,
    ACTIONS(753), 1,
      aux_sym_application_token1,
    STATE(282), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9453] = 4,
    ACTIONS(753), 1,
      aux_sym_application_token1,
    STATE(282), 1,
      aux_sym_application_repeat1,
    ACTIONS(442), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9469] = 3,
    ACTIONS(401), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(403), 2,
      anon_sym_DOT,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9483] = 5,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    ACTIONS(757), 1,
      aux_sym_application_token1,
    ACTIONS(760), 1,
      sym__case_arrow,
    STATE(278), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9501] = 3,
    ACTIONS(371), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(373), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9515] = 3,
    ACTIONS(383), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(385), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9529] = 3,
    ACTIONS(367), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9543] = 4,
    ACTIONS(762), 1,
      aux_sym_application_token1,
    STATE(282), 1,
      aux_sym_application_repeat1,
    ACTIONS(452), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9559] = 3,
    ACTIONS(346), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9573] = 3,
    ACTIONS(286), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(288), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9587] = 4,
    ACTIONS(765), 1,
      aux_sym__case_infix_operator_token1,
    STATE(67), 1,
      sym__case_infix_operator,
    ACTIONS(495), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9603] = 3,
    ACTIONS(290), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(292), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9617] = 3,
    ACTIONS(367), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(369), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9631] = 3,
    ACTIONS(371), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9645] = 3,
    ACTIONS(383), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(385), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9659] = 3,
    ACTIONS(485), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(487), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9673] = 3,
    ACTIONS(481), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(483), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9687] = 3,
    ACTIONS(379), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(381), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9701] = 3,
    ACTIONS(286), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9715] = 4,
    ACTIONS(633), 1,
      aux_sym__case_infix_operator_token1,
    STATE(68), 1,
      sym__case_infix_operator,
    ACTIONS(423), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9731] = 3,
    ACTIONS(290), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(292), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9745] = 5,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    ACTIONS(769), 1,
      aux_sym_application_token1,
    ACTIONS(771), 1,
      sym__case_arrow,
    STATE(278), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9763] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_EQ_GT,
    STATE(320), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9780] = 3,
    ACTIONS(506), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(504), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9793] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(461), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9804] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9815] = 3,
    ACTIONS(369), 1,
      sym__case_arrow,
    ACTIONS(367), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9828] = 3,
    ACTIONS(286), 1,
      aux_sym_application_token1,
    ACTIONS(288), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9841] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_EQ_GT,
    STATE(304), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9858] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9875] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      sym__case_of,
    ACTIONS(781), 1,
      sym__case_bar,
    STATE(305), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [9892] = 3,
    ACTIONS(373), 1,
      sym__case_arrow,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9905] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(313), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(537), 2,
      anon_sym_RPAREN,
      sym__case_bar,
  [9920] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      sym__case_of,
    ACTIONS(784), 1,
      sym__case_bar,
    STATE(305), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [9937] = 3,
    ACTIONS(385), 1,
      sym__case_arrow,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9950] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(786), 1,
      anon_sym_COLON,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9967] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      sym__case_of,
    ACTIONS(784), 1,
      sym__case_bar,
    STATE(308), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [9984] = 4,
    ACTIONS(769), 1,
      aux_sym_application_token1,
    ACTIONS(790), 1,
      sym__case_arrow,
    STATE(296), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9999] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      sym__case_bar,
    STATE(313), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10016] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      sym__case_bar,
    STATE(313), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10033] = 3,
    ACTIONS(799), 1,
      sym__case_arrow,
    ACTIONS(797), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10046] = 3,
    ACTIONS(383), 1,
      aux_sym_application_token1,
    ACTIONS(385), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10059] = 3,
    ACTIONS(348), 1,
      sym__case_arrow,
    ACTIONS(346), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10072] = 4,
    ACTIONS(489), 1,
      sym__case_of,
    ACTIONS(801), 1,
      aux_sym__infix_operator_token1,
    STATE(66), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10087] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      sym__case_bar,
    STATE(314), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10104] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10121] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_EQ_GT,
    STATE(323), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10138] = 3,
    ACTIONS(292), 1,
      sym__case_arrow,
    ACTIONS(290), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10151] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10168] = 3,
    ACTIONS(379), 1,
      aux_sym_application_token1,
    ACTIONS(381), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10181] = 3,
    ACTIONS(483), 1,
      aux_sym_application_token1,
    ACTIONS(481), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10194] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10211] = 3,
    ACTIONS(288), 1,
      sym__case_arrow,
    ACTIONS(286), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10224] = 3,
    ACTIONS(487), 1,
      aux_sym_application_token1,
    ACTIONS(485), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10237] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(305), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(537), 2,
      sym__case_of,
      sym__case_bar,
  [10252] = 3,
    ACTIONS(342), 1,
      sym__case_arrow,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10265] = 3,
    ACTIONS(346), 1,
      aux_sym_application_token1,
    ACTIONS(348), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10278] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_COLON,
    STATE(310), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10295] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      sym__case_of,
    ACTIONS(784), 1,
      sym__case_bar,
    STATE(329), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10312] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_COLON,
    STATE(342), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10329] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10346] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      sym__case_bar,
    STATE(307), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10363] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_EQ_GT,
    STATE(335), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10380] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_EQ_GT,
    STATE(326), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10397] = 3,
    ACTIONS(367), 1,
      aux_sym_application_token1,
    ACTIONS(369), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10410] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10427] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(826), 1,
      anon_sym_COLON,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10444] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_COLON,
    STATE(341), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10461] = 3,
    ACTIONS(371), 1,
      aux_sym_application_token1,
    ACTIONS(373), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10474] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_EQ_GT,
    STATE(346), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10491] = 3,
    ACTIONS(290), 1,
      aux_sym_application_token1,
    ACTIONS(292), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10504] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10521] = 3,
    ACTIONS(381), 1,
      sym__case_arrow,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10534] = 3,
    ACTIONS(837), 1,
      aux_sym_application_token1,
    STATE(276), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10546] = 3,
    ACTIONS(839), 1,
      aux_sym_application_token1,
    STATE(122), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10558] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(841), 2,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [10570] = 3,
    ACTIONS(843), 1,
      anon_sym_BSLASH,
    ACTIONS(845), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10582] = 3,
    ACTIONS(847), 1,
      anon_sym_BSLASH,
    ACTIONS(849), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10594] = 3,
    ACTIONS(851), 1,
      aux_sym_application_token1,
    STATE(249), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10606] = 3,
    ACTIONS(853), 1,
      aux_sym_application_token1,
    STATE(136), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10618] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(581), 2,
      sym__case_of,
      sym__case_bar,
  [10630] = 3,
    ACTIONS(855), 1,
      anon_sym_BSLASH,
    ACTIONS(857), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10642] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(859), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [10654] = 2,
    ACTIONS(504), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10664] = 3,
    ACTIONS(861), 1,
      aux_sym_application_token1,
    STATE(296), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10676] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(577), 2,
      sym__case_of,
      sym__case_bar,
  [10688] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(489), 2,
      sym__case_of,
      sym__case_bar,
  [10700] = 3,
    ACTIONS(863), 1,
      anon_sym_BSLASH,
    ACTIONS(865), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10712] = 3,
    ACTIONS(867), 1,
      anon_sym_BSLASH,
    ACTIONS(869), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10724] = 3,
    ACTIONS(871), 1,
      aux_sym_application_token1,
    STATE(268), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10736] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(873), 1,
      sym_identifier,
    STATE(232), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10750] = 3,
    ACTIONS(875), 1,
      aux_sym_application_token1,
    STATE(140), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10762] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(593), 2,
      sym__case_of,
      sym__case_bar,
  [10774] = 3,
    ACTIONS(877), 1,
      anon_sym_BSLASH,
    ACTIONS(879), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10786] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(529), 2,
      sym__case_of,
      sym__case_bar,
  [10798] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(589), 2,
      sym__case_of,
      sym__case_bar,
  [10810] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(423), 2,
      sym__case_of,
      sym__case_bar,
  [10822] = 3,
    ACTIONS(881), 1,
      anon_sym_BSLASH,
    ACTIONS(883), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10834] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(873), 1,
      sym_identifier,
    STATE(238), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10848] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(569), 2,
      sym__case_of,
      sym__case_bar,
  [10860] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(569), 2,
      sym__case_of,
      sym__case_bar,
  [10872] = 3,
    ACTIONS(885), 1,
      anon_sym_BSLASH,
    ACTIONS(887), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10884] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10895] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(891), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10906] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(893), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10917] = 2,
    ACTIONS(399), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10926] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(895), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10937] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(897), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10948] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10959] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(901), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10970] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10981] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(905), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10992] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(907), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11003] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(909), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11014] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(911), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11025] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(913), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11036] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(915), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11047] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(917), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11058] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11069] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(921), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11080] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(923), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11091] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(925), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11102] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11113] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(929), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11124] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(931), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11135] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(933), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11146] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11157] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11168] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(939), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11179] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(941), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11190] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11201] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11212] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(947), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11223] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(949), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11234] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(951), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11245] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11256] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(955), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11267] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11278] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(959), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11289] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(961), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11300] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(963), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11311] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(965), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11322] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(967), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11333] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(969), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11344] = 2,
    ACTIONS(971), 1,
      aux_sym_string_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11353] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11364] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11375] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(977), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11386] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(979), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11397] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(981), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11408] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(983), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11419] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(985), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11430] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(987), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11441] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11452] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11463] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(993), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11474] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(995), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11485] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(997), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11496] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(999), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11507] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1001), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11518] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1003), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11529] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1005), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11540] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1007), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11551] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11562] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1011), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11573] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1013), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11584] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1015), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11595] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1017), 1,
      sym_operator,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11606] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11617] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1021), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11628] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1023), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11639] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1025), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11650] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11661] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11672] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11683] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1033), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 322,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 522,
  [SMALL_STATE(13)] = 597,
  [SMALL_STATE(14)] = 672,
  [SMALL_STATE(15)] = 747,
  [SMALL_STATE(16)] = 822,
  [SMALL_STATE(17)] = 897,
  [SMALL_STATE(18)] = 969,
  [SMALL_STATE(19)] = 1041,
  [SMALL_STATE(20)] = 1113,
  [SMALL_STATE(21)] = 1185,
  [SMALL_STATE(22)] = 1257,
  [SMALL_STATE(23)] = 1329,
  [SMALL_STATE(24)] = 1403,
  [SMALL_STATE(25)] = 1475,
  [SMALL_STATE(26)] = 1547,
  [SMALL_STATE(27)] = 1619,
  [SMALL_STATE(28)] = 1691,
  [SMALL_STATE(29)] = 1763,
  [SMALL_STATE(30)] = 1835,
  [SMALL_STATE(31)] = 1907,
  [SMALL_STATE(32)] = 1979,
  [SMALL_STATE(33)] = 2051,
  [SMALL_STATE(34)] = 2123,
  [SMALL_STATE(35)] = 2195,
  [SMALL_STATE(36)] = 2267,
  [SMALL_STATE(37)] = 2341,
  [SMALL_STATE(38)] = 2413,
  [SMALL_STATE(39)] = 2485,
  [SMALL_STATE(40)] = 2557,
  [SMALL_STATE(41)] = 2629,
  [SMALL_STATE(42)] = 2701,
  [SMALL_STATE(43)] = 2773,
  [SMALL_STATE(44)] = 2845,
  [SMALL_STATE(45)] = 2917,
  [SMALL_STATE(46)] = 2989,
  [SMALL_STATE(47)] = 3061,
  [SMALL_STATE(48)] = 3133,
  [SMALL_STATE(49)] = 3203,
  [SMALL_STATE(50)] = 3273,
  [SMALL_STATE(51)] = 3343,
  [SMALL_STATE(52)] = 3406,
  [SMALL_STATE(53)] = 3469,
  [SMALL_STATE(54)] = 3532,
  [SMALL_STATE(55)] = 3595,
  [SMALL_STATE(56)] = 3658,
  [SMALL_STATE(57)] = 3721,
  [SMALL_STATE(58)] = 3781,
  [SMALL_STATE(59)] = 3841,
  [SMALL_STATE(60)] = 3901,
  [SMALL_STATE(61)] = 3961,
  [SMALL_STATE(62)] = 4021,
  [SMALL_STATE(63)] = 4081,
  [SMALL_STATE(64)] = 4136,
  [SMALL_STATE(65)] = 4191,
  [SMALL_STATE(66)] = 4246,
  [SMALL_STATE(67)] = 4301,
  [SMALL_STATE(68)] = 4355,
  [SMALL_STATE(69)] = 4409,
  [SMALL_STATE(70)] = 4463,
  [SMALL_STATE(71)] = 4521,
  [SMALL_STATE(72)] = 4577,
  [SMALL_STATE(73)] = 4631,
  [SMALL_STATE(74)] = 4687,
  [SMALL_STATE(75)] = 4742,
  [SMALL_STATE(76)] = 4797,
  [SMALL_STATE(77)] = 4845,
  [SMALL_STATE(78)] = 4893,
  [SMALL_STATE(79)] = 4941,
  [SMALL_STATE(80)] = 4989,
  [SMALL_STATE(81)] = 5037,
  [SMALL_STATE(82)] = 5085,
  [SMALL_STATE(83)] = 5131,
  [SMALL_STATE(84)] = 5160,
  [SMALL_STATE(85)] = 5189,
  [SMALL_STATE(86)] = 5231,
  [SMALL_STATE(87)] = 5258,
  [SMALL_STATE(88)] = 5285,
  [SMALL_STATE(89)] = 5312,
  [SMALL_STATE(90)] = 5339,
  [SMALL_STATE(91)] = 5366,
  [SMALL_STATE(92)] = 5393,
  [SMALL_STATE(93)] = 5420,
  [SMALL_STATE(94)] = 5447,
  [SMALL_STATE(95)] = 5473,
  [SMALL_STATE(96)] = 5513,
  [SMALL_STATE(97)] = 5539,
  [SMALL_STATE(98)] = 5579,
  [SMALL_STATE(99)] = 5605,
  [SMALL_STATE(100)] = 5631,
  [SMALL_STATE(101)] = 5657,
  [SMALL_STATE(102)] = 5683,
  [SMALL_STATE(103)] = 5709,
  [SMALL_STATE(104)] = 5738,
  [SMALL_STATE(105)] = 5767,
  [SMALL_STATE(106)] = 5792,
  [SMALL_STATE(107)] = 5821,
  [SMALL_STATE(108)] = 5857,
  [SMALL_STATE(109)] = 5883,
  [SMALL_STATE(110)] = 5909,
  [SMALL_STATE(111)] = 5935,
  [SMALL_STATE(112)] = 5971,
  [SMALL_STATE(113)] = 5997,
  [SMALL_STATE(114)] = 6027,
  [SMALL_STATE(115)] = 6051,
  [SMALL_STATE(116)] = 6087,
  [SMALL_STATE(117)] = 6113,
  [SMALL_STATE(118)] = 6137,
  [SMALL_STATE(119)] = 6163,
  [SMALL_STATE(120)] = 6199,
  [SMALL_STATE(121)] = 6232,
  [SMALL_STATE(122)] = 6257,
  [SMALL_STATE(123)] = 6282,
  [SMALL_STATE(124)] = 6307,
  [SMALL_STATE(125)] = 6332,
  [SMALL_STATE(126)] = 6353,
  [SMALL_STATE(127)] = 6374,
  [SMALL_STATE(128)] = 6399,
  [SMALL_STATE(129)] = 6432,
  [SMALL_STATE(130)] = 6457,
  [SMALL_STATE(131)] = 6482,
  [SMALL_STATE(132)] = 6515,
  [SMALL_STATE(133)] = 6540,
  [SMALL_STATE(134)] = 6565,
  [SMALL_STATE(135)] = 6588,
  [SMALL_STATE(136)] = 6613,
  [SMALL_STATE(137)] = 6638,
  [SMALL_STATE(138)] = 6663,
  [SMALL_STATE(139)] = 6683,
  [SMALL_STATE(140)] = 6713,
  [SMALL_STATE(141)] = 6737,
  [SMALL_STATE(142)] = 6757,
  [SMALL_STATE(143)] = 6777,
  [SMALL_STATE(144)] = 6801,
  [SMALL_STATE(145)] = 6821,
  [SMALL_STATE(146)] = 6841,
  [SMALL_STATE(147)] = 6861,
  [SMALL_STATE(148)] = 6881,
  [SMALL_STATE(149)] = 6901,
  [SMALL_STATE(150)] = 6925,
  [SMALL_STATE(151)] = 6945,
  [SMALL_STATE(152)] = 6965,
  [SMALL_STATE(153)] = 6985,
  [SMALL_STATE(154)] = 7009,
  [SMALL_STATE(155)] = 7029,
  [SMALL_STATE(156)] = 7053,
  [SMALL_STATE(157)] = 7073,
  [SMALL_STATE(158)] = 7097,
  [SMALL_STATE(159)] = 7117,
  [SMALL_STATE(160)] = 7137,
  [SMALL_STATE(161)] = 7157,
  [SMALL_STATE(162)] = 7177,
  [SMALL_STATE(163)] = 7201,
  [SMALL_STATE(164)] = 7221,
  [SMALL_STATE(165)] = 7251,
  [SMALL_STATE(166)] = 7271,
  [SMALL_STATE(167)] = 7290,
  [SMALL_STATE(168)] = 7309,
  [SMALL_STATE(169)] = 7328,
  [SMALL_STATE(170)] = 7347,
  [SMALL_STATE(171)] = 7366,
  [SMALL_STATE(172)] = 7385,
  [SMALL_STATE(173)] = 7410,
  [SMALL_STATE(174)] = 7435,
  [SMALL_STATE(175)] = 7460,
  [SMALL_STATE(176)] = 7479,
  [SMALL_STATE(177)] = 7498,
  [SMALL_STATE(178)] = 7517,
  [SMALL_STATE(179)] = 7540,
  [SMALL_STATE(180)] = 7559,
  [SMALL_STATE(181)] = 7578,
  [SMALL_STATE(182)] = 7597,
  [SMALL_STATE(183)] = 7621,
  [SMALL_STATE(184)] = 7641,
  [SMALL_STATE(185)] = 7661,
  [SMALL_STATE(186)] = 7685,
  [SMALL_STATE(187)] = 7703,
  [SMALL_STATE(188)] = 7725,
  [SMALL_STATE(189)] = 7749,
  [SMALL_STATE(190)] = 7773,
  [SMALL_STATE(191)] = 7793,
  [SMALL_STATE(192)] = 7817,
  [SMALL_STATE(193)] = 7837,
  [SMALL_STATE(194)] = 7861,
  [SMALL_STATE(195)] = 7885,
  [SMALL_STATE(196)] = 7909,
  [SMALL_STATE(197)] = 7929,
  [SMALL_STATE(198)] = 7953,
  [SMALL_STATE(199)] = 7973,
  [SMALL_STATE(200)] = 7993,
  [SMALL_STATE(201)] = 8017,
  [SMALL_STATE(202)] = 8037,
  [SMALL_STATE(203)] = 8057,
  [SMALL_STATE(204)] = 8077,
  [SMALL_STATE(205)] = 8101,
  [SMALL_STATE(206)] = 8121,
  [SMALL_STATE(207)] = 8140,
  [SMALL_STATE(208)] = 8159,
  [SMALL_STATE(209)] = 8179,
  [SMALL_STATE(210)] = 8199,
  [SMALL_STATE(211)] = 8219,
  [SMALL_STATE(212)] = 8239,
  [SMALL_STATE(213)] = 8259,
  [SMALL_STATE(214)] = 8279,
  [SMALL_STATE(215)] = 8297,
  [SMALL_STATE(216)] = 8319,
  [SMALL_STATE(217)] = 8337,
  [SMALL_STATE(218)] = 8357,
  [SMALL_STATE(219)] = 8377,
  [SMALL_STATE(220)] = 8397,
  [SMALL_STATE(221)] = 8417,
  [SMALL_STATE(222)] = 8437,
  [SMALL_STATE(223)] = 8457,
  [SMALL_STATE(224)] = 8477,
  [SMALL_STATE(225)] = 8499,
  [SMALL_STATE(226)] = 8517,
  [SMALL_STATE(227)] = 8537,
  [SMALL_STATE(228)] = 8557,
  [SMALL_STATE(229)] = 8577,
  [SMALL_STATE(230)] = 8597,
  [SMALL_STATE(231)] = 8617,
  [SMALL_STATE(232)] = 8637,
  [SMALL_STATE(233)] = 8655,
  [SMALL_STATE(234)] = 8673,
  [SMALL_STATE(235)] = 8695,
  [SMALL_STATE(236)] = 8715,
  [SMALL_STATE(237)] = 8735,
  [SMALL_STATE(238)] = 8755,
  [SMALL_STATE(239)] = 8773,
  [SMALL_STATE(240)] = 8793,
  [SMALL_STATE(241)] = 8815,
  [SMALL_STATE(242)] = 8838,
  [SMALL_STATE(243)] = 8857,
  [SMALL_STATE(244)] = 8878,
  [SMALL_STATE(245)] = 8901,
  [SMALL_STATE(246)] = 8922,
  [SMALL_STATE(247)] = 8943,
  [SMALL_STATE(248)] = 8962,
  [SMALL_STATE(249)] = 8979,
  [SMALL_STATE(250)] = 8996,
  [SMALL_STATE(251)] = 9017,
  [SMALL_STATE(252)] = 9036,
  [SMALL_STATE(253)] = 9057,
  [SMALL_STATE(254)] = 9076,
  [SMALL_STATE(255)] = 9099,
  [SMALL_STATE(256)] = 9116,
  [SMALL_STATE(257)] = 9135,
  [SMALL_STATE(258)] = 9148,
  [SMALL_STATE(259)] = 9169,
  [SMALL_STATE(260)] = 9190,
  [SMALL_STATE(261)] = 9209,
  [SMALL_STATE(262)] = 9228,
  [SMALL_STATE(263)] = 9245,
  [SMALL_STATE(264)] = 9260,
  [SMALL_STATE(265)] = 9279,
  [SMALL_STATE(266)] = 9294,
  [SMALL_STATE(267)] = 9311,
  [SMALL_STATE(268)] = 9330,
  [SMALL_STATE(269)] = 9349,
  [SMALL_STATE(270)] = 9363,
  [SMALL_STATE(271)] = 9377,
  [SMALL_STATE(272)] = 9393,
  [SMALL_STATE(273)] = 9407,
  [SMALL_STATE(274)] = 9423,
  [SMALL_STATE(275)] = 9437,
  [SMALL_STATE(276)] = 9453,
  [SMALL_STATE(277)] = 9469,
  [SMALL_STATE(278)] = 9483,
  [SMALL_STATE(279)] = 9501,
  [SMALL_STATE(280)] = 9515,
  [SMALL_STATE(281)] = 9529,
  [SMALL_STATE(282)] = 9543,
  [SMALL_STATE(283)] = 9559,
  [SMALL_STATE(284)] = 9573,
  [SMALL_STATE(285)] = 9587,
  [SMALL_STATE(286)] = 9603,
  [SMALL_STATE(287)] = 9617,
  [SMALL_STATE(288)] = 9631,
  [SMALL_STATE(289)] = 9645,
  [SMALL_STATE(290)] = 9659,
  [SMALL_STATE(291)] = 9673,
  [SMALL_STATE(292)] = 9687,
  [SMALL_STATE(293)] = 9701,
  [SMALL_STATE(294)] = 9715,
  [SMALL_STATE(295)] = 9731,
  [SMALL_STATE(296)] = 9745,
  [SMALL_STATE(297)] = 9763,
  [SMALL_STATE(298)] = 9780,
  [SMALL_STATE(299)] = 9793,
  [SMALL_STATE(300)] = 9804,
  [SMALL_STATE(301)] = 9815,
  [SMALL_STATE(302)] = 9828,
  [SMALL_STATE(303)] = 9841,
  [SMALL_STATE(304)] = 9858,
  [SMALL_STATE(305)] = 9875,
  [SMALL_STATE(306)] = 9892,
  [SMALL_STATE(307)] = 9905,
  [SMALL_STATE(308)] = 9920,
  [SMALL_STATE(309)] = 9937,
  [SMALL_STATE(310)] = 9950,
  [SMALL_STATE(311)] = 9967,
  [SMALL_STATE(312)] = 9984,
  [SMALL_STATE(313)] = 9999,
  [SMALL_STATE(314)] = 10016,
  [SMALL_STATE(315)] = 10033,
  [SMALL_STATE(316)] = 10046,
  [SMALL_STATE(317)] = 10059,
  [SMALL_STATE(318)] = 10072,
  [SMALL_STATE(319)] = 10087,
  [SMALL_STATE(320)] = 10104,
  [SMALL_STATE(321)] = 10121,
  [SMALL_STATE(322)] = 10138,
  [SMALL_STATE(323)] = 10151,
  [SMALL_STATE(324)] = 10168,
  [SMALL_STATE(325)] = 10181,
  [SMALL_STATE(326)] = 10194,
  [SMALL_STATE(327)] = 10211,
  [SMALL_STATE(328)] = 10224,
  [SMALL_STATE(329)] = 10237,
  [SMALL_STATE(330)] = 10252,
  [SMALL_STATE(331)] = 10265,
  [SMALL_STATE(332)] = 10278,
  [SMALL_STATE(333)] = 10295,
  [SMALL_STATE(334)] = 10312,
  [SMALL_STATE(335)] = 10329,
  [SMALL_STATE(336)] = 10346,
  [SMALL_STATE(337)] = 10363,
  [SMALL_STATE(338)] = 10380,
  [SMALL_STATE(339)] = 10397,
  [SMALL_STATE(340)] = 10410,
  [SMALL_STATE(341)] = 10427,
  [SMALL_STATE(342)] = 10444,
  [SMALL_STATE(343)] = 10461,
  [SMALL_STATE(344)] = 10474,
  [SMALL_STATE(345)] = 10491,
  [SMALL_STATE(346)] = 10504,
  [SMALL_STATE(347)] = 10521,
  [SMALL_STATE(348)] = 10534,
  [SMALL_STATE(349)] = 10546,
  [SMALL_STATE(350)] = 10558,
  [SMALL_STATE(351)] = 10570,
  [SMALL_STATE(352)] = 10582,
  [SMALL_STATE(353)] = 10594,
  [SMALL_STATE(354)] = 10606,
  [SMALL_STATE(355)] = 10618,
  [SMALL_STATE(356)] = 10630,
  [SMALL_STATE(357)] = 10642,
  [SMALL_STATE(358)] = 10654,
  [SMALL_STATE(359)] = 10664,
  [SMALL_STATE(360)] = 10676,
  [SMALL_STATE(361)] = 10688,
  [SMALL_STATE(362)] = 10700,
  [SMALL_STATE(363)] = 10712,
  [SMALL_STATE(364)] = 10724,
  [SMALL_STATE(365)] = 10736,
  [SMALL_STATE(366)] = 10750,
  [SMALL_STATE(367)] = 10762,
  [SMALL_STATE(368)] = 10774,
  [SMALL_STATE(369)] = 10786,
  [SMALL_STATE(370)] = 10798,
  [SMALL_STATE(371)] = 10810,
  [SMALL_STATE(372)] = 10822,
  [SMALL_STATE(373)] = 10834,
  [SMALL_STATE(374)] = 10848,
  [SMALL_STATE(375)] = 10860,
  [SMALL_STATE(376)] = 10872,
  [SMALL_STATE(377)] = 10884,
  [SMALL_STATE(378)] = 10895,
  [SMALL_STATE(379)] = 10906,
  [SMALL_STATE(380)] = 10917,
  [SMALL_STATE(381)] = 10926,
  [SMALL_STATE(382)] = 10937,
  [SMALL_STATE(383)] = 10948,
  [SMALL_STATE(384)] = 10959,
  [SMALL_STATE(385)] = 10970,
  [SMALL_STATE(386)] = 10981,
  [SMALL_STATE(387)] = 10992,
  [SMALL_STATE(388)] = 11003,
  [SMALL_STATE(389)] = 11014,
  [SMALL_STATE(390)] = 11025,
  [SMALL_STATE(391)] = 11036,
  [SMALL_STATE(392)] = 11047,
  [SMALL_STATE(393)] = 11058,
  [SMALL_STATE(394)] = 11069,
  [SMALL_STATE(395)] = 11080,
  [SMALL_STATE(396)] = 11091,
  [SMALL_STATE(397)] = 11102,
  [SMALL_STATE(398)] = 11113,
  [SMALL_STATE(399)] = 11124,
  [SMALL_STATE(400)] = 11135,
  [SMALL_STATE(401)] = 11146,
  [SMALL_STATE(402)] = 11157,
  [SMALL_STATE(403)] = 11168,
  [SMALL_STATE(404)] = 11179,
  [SMALL_STATE(405)] = 11190,
  [SMALL_STATE(406)] = 11201,
  [SMALL_STATE(407)] = 11212,
  [SMALL_STATE(408)] = 11223,
  [SMALL_STATE(409)] = 11234,
  [SMALL_STATE(410)] = 11245,
  [SMALL_STATE(411)] = 11256,
  [SMALL_STATE(412)] = 11267,
  [SMALL_STATE(413)] = 11278,
  [SMALL_STATE(414)] = 11289,
  [SMALL_STATE(415)] = 11300,
  [SMALL_STATE(416)] = 11311,
  [SMALL_STATE(417)] = 11322,
  [SMALL_STATE(418)] = 11333,
  [SMALL_STATE(419)] = 11344,
  [SMALL_STATE(420)] = 11353,
  [SMALL_STATE(421)] = 11364,
  [SMALL_STATE(422)] = 11375,
  [SMALL_STATE(423)] = 11386,
  [SMALL_STATE(424)] = 11397,
  [SMALL_STATE(425)] = 11408,
  [SMALL_STATE(426)] = 11419,
  [SMALL_STATE(427)] = 11430,
  [SMALL_STATE(428)] = 11441,
  [SMALL_STATE(429)] = 11452,
  [SMALL_STATE(430)] = 11463,
  [SMALL_STATE(431)] = 11474,
  [SMALL_STATE(432)] = 11485,
  [SMALL_STATE(433)] = 11496,
  [SMALL_STATE(434)] = 11507,
  [SMALL_STATE(435)] = 11518,
  [SMALL_STATE(436)] = 11529,
  [SMALL_STATE(437)] = 11540,
  [SMALL_STATE(438)] = 11551,
  [SMALL_STATE(439)] = 11562,
  [SMALL_STATE(440)] = 11573,
  [SMALL_STATE(441)] = 11584,
  [SMALL_STATE(442)] = 11595,
  [SMALL_STATE(443)] = 11606,
  [SMALL_STATE(444)] = 11617,
  [SMALL_STATE(445)] = 11628,
  [SMALL_STATE(446)] = 11639,
  [SMALL_STATE(447)] = 11650,
  [SMALL_STATE(448)] = 11661,
  [SMALL_STATE(449)] = 11672,
  [SMALL_STATE(450)] = 11683,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_alternative, 2, .production_id = 28),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_alternative, 2, .production_id = 28),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(100),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(73),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(83),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(424),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(98),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(98),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(100),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(356),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(209),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 2, .production_id = 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 2, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2, .production_id = 22),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 2, .production_id = 22),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 23),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 23),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 6, .production_id = 31),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 6, .production_id = 31),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 6, .production_id = 31),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 6, .production_id = 31),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 23),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 23),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 24),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 24),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 24),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 24),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 9),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(70),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(436),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(373),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(365),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(442),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_atom, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(412),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_atom, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_atom, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(413),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_body_expression, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_body_expression, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(400),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 8),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 8),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_term, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_term, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(76),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_infix_expression, 3, .production_id = 37),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_infix_expression, 3, .production_id = 37),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(444),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_infix_expression, 3, .production_id = 12),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_infix_expression, 3, .production_id = 12),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(77),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_body_expression, 1, .production_id = 36),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_body_expression, 1, .production_id = 36),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(79),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 12),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 12),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(164),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 21),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 21),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 26),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 26),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 5, .production_id = 27),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 5, .production_id = 27),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 6, .production_id = 15),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 6, .production_id = 15),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 19),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 19),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30), SHIFT_REPEAT(244),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 25),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 25),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34), SHIFT_REPEAT(60),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_alternative, 3, .production_id = 35),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_alternative, 3, .production_id = 35),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 4, .production_id = 18),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 4, .production_id = 18),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 6),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, .production_id = 6),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 8, .production_id = 32),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 8, .production_id = 32),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 33),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 33),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 20),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 20),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 29),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 29),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(381),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(419),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(222),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(395),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(416),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(415),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(78),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(139),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(427),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(81),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14), SHIFT_REPEAT(82),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(80),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_application_pattern, 2, .production_id = 10),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_application_pattern, 2, .production_id = 10),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34), SHIFT_REPEAT(57),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34), SHIFT_REPEAT(59),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(250),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 7),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 16),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 16), SHIFT_REPEAT(432),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 17),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_name, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1013] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
