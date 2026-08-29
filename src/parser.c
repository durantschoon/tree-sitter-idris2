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
#define STATE_COUNT 450
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
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
  sym_parenthesized_pattern = 111,
  sym_constructor_application_pattern = 112,
  sym__pattern_constructor = 113,
  sym_qualified_name = 114,
  sym_constructor_name = 115,
  sym_operator_name = 116,
  sym__infix_operator = 117,
  sym_hole = 118,
  sym_integer = 119,
  sym__number = 120,
  sym_char = 121,
  sym_string = 122,
  sym__text = 123,
  aux_sym_module_repeat1 = 124,
  aux_sym_data_declaration_repeat1 = 125,
  aux_sym_data_declaration_repeat2 = 126,
  aux_sym_function_definition_repeat1 = 127,
  aux_sym_module_name_repeat1 = 128,
  aux_sym_type_repeat1 = 129,
  aux_sym_explicit_binder_repeat1 = 130,
  aux_sym_lambda_expression_repeat1 = 131,
  aux_sym_application_repeat1 = 132,
  aux_sym_case_expression_repeat1 = 133,
  aux_sym_constructor_application_pattern_repeat1 = 134,
  aux_sym_string_repeat1 = 135,
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
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
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
          lookahead == ' ') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
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
          lookahead == ' ') ADVANCE(16);
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
          lookahead == ' ') ADVANCE(17);
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
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 12},
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
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 74},
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
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 73},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 73},
  [71] = {.lex_state = 73},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 76},
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
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 73},
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
  [109] = {.lex_state = 80},
  [110] = {.lex_state = 76},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 73},
  [113] = {.lex_state = 80},
  [114] = {.lex_state = 79},
  [115] = {.lex_state = 79},
  [116] = {.lex_state = 73},
  [117] = {.lex_state = 79},
  [118] = {.lex_state = 73},
  [119] = {.lex_state = 76},
  [120] = {.lex_state = 79},
  [121] = {.lex_state = 79},
  [122] = {.lex_state = 80},
  [123] = {.lex_state = 79},
  [124] = {.lex_state = 81},
  [125] = {.lex_state = 79},
  [126] = {.lex_state = 80},
  [127] = {.lex_state = 81},
  [128] = {.lex_state = 81},
  [129] = {.lex_state = 73},
  [130] = {.lex_state = 80},
  [131] = {.lex_state = 80},
  [132] = {.lex_state = 80},
  [133] = {.lex_state = 76},
  [134] = {.lex_state = 79},
  [135] = {.lex_state = 73},
  [136] = {.lex_state = 79},
  [137] = {.lex_state = 73},
  [138] = {.lex_state = 80},
  [139] = {.lex_state = 79},
  [140] = {.lex_state = 80},
  [141] = {.lex_state = 80},
  [142] = {.lex_state = 79},
  [143] = {.lex_state = 81},
  [144] = {.lex_state = 79},
  [145] = {.lex_state = 80},
  [146] = {.lex_state = 80},
  [147] = {.lex_state = 79},
  [148] = {.lex_state = 80},
  [149] = {.lex_state = 83},
  [150] = {.lex_state = 81},
  [151] = {.lex_state = 80},
  [152] = {.lex_state = 83},
  [153] = {.lex_state = 79},
  [154] = {.lex_state = 84},
  [155] = {.lex_state = 73},
  [156] = {.lex_state = 79},
  [157] = {.lex_state = 79},
  [158] = {.lex_state = 80},
  [159] = {.lex_state = 81},
  [160] = {.lex_state = 80},
  [161] = {.lex_state = 79},
  [162] = {.lex_state = 79},
  [163] = {.lex_state = 73},
  [164] = {.lex_state = 81},
  [165] = {.lex_state = 81},
  [166] = {.lex_state = 83},
  [167] = {.lex_state = 85},
  [168] = {.lex_state = 76},
  [169] = {.lex_state = 83},
  [170] = {.lex_state = 76},
  [171] = {.lex_state = 81},
  [172] = {.lex_state = 81},
  [173] = {.lex_state = 81},
  [174] = {.lex_state = 81},
  [175] = {.lex_state = 76},
  [176] = {.lex_state = 84},
  [177] = {.lex_state = 81},
  [178] = {.lex_state = 81},
  [179] = {.lex_state = 81},
  [180] = {.lex_state = 81},
  [181] = {.lex_state = 81},
  [182] = {.lex_state = 85},
  [183] = {.lex_state = 74},
  [184] = {.lex_state = 74},
  [185] = {.lex_state = 74},
  [186] = {.lex_state = 74},
  [187] = {.lex_state = 74},
  [188] = {.lex_state = 74},
  [189] = {.lex_state = 76},
  [190] = {.lex_state = 74},
  [191] = {.lex_state = 76},
  [192] = {.lex_state = 74},
  [193] = {.lex_state = 76},
  [194] = {.lex_state = 76},
  [195] = {.lex_state = 73},
  [196] = {.lex_state = 74},
  [197] = {.lex_state = 74},
  [198] = {.lex_state = 76},
  [199] = {.lex_state = 74},
  [200] = {.lex_state = 74},
  [201] = {.lex_state = 74},
  [202] = {.lex_state = 73},
  [203] = {.lex_state = 76},
  [204] = {.lex_state = 74},
  [205] = {.lex_state = 76},
  [206] = {.lex_state = 76},
  [207] = {.lex_state = 76},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 73},
  [214] = {.lex_state = 28},
  [215] = {.lex_state = 73},
  [216] = {.lex_state = 14},
  [217] = {.lex_state = 73},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 27},
  [221] = {.lex_state = 14},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 14},
  [224] = {.lex_state = 14},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 14},
  [231] = {.lex_state = 73},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 28},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 28},
  [236] = {.lex_state = 73},
  [237] = {.lex_state = 14},
  [238] = {.lex_state = 27},
  [239] = {.lex_state = 14},
  [240] = {.lex_state = 73},
  [241] = {.lex_state = 29},
  [242] = {.lex_state = 27},
  [243] = {.lex_state = 28},
  [244] = {.lex_state = 73},
  [245] = {.lex_state = 28},
  [246] = {.lex_state = 73},
  [247] = {.lex_state = 27},
  [248] = {.lex_state = 27},
  [249] = {.lex_state = 28},
  [250] = {.lex_state = 73},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 76},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 28},
  [255] = {.lex_state = 28},
  [256] = {.lex_state = 29},
  [257] = {.lex_state = 73},
  [258] = {.lex_state = 76},
  [259] = {.lex_state = 73},
  [260] = {.lex_state = 73},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 73},
  [264] = {.lex_state = 73},
  [265] = {.lex_state = 73},
  [266] = {.lex_state = 76},
  [267] = {.lex_state = 29},
  [268] = {.lex_state = 73},
  [269] = {.lex_state = 27},
  [270] = {.lex_state = 28},
  [271] = {.lex_state = 27},
  [272] = {.lex_state = 33},
  [273] = {.lex_state = 29},
  [274] = {.lex_state = 33},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 29},
  [277] = {.lex_state = 29},
  [278] = {.lex_state = 27},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 19},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 27},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 28},
  [285] = {.lex_state = 28},
  [286] = {.lex_state = 27},
  [287] = {.lex_state = 28},
  [288] = {.lex_state = 28},
  [289] = {.lex_state = 28},
  [290] = {.lex_state = 27},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 28},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 34},
  [295] = {.lex_state = 28},
  [296] = {.lex_state = 28},
  [297] = {.lex_state = 74},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 29},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 29},
  [302] = {.lex_state = 29},
  [303] = {.lex_state = 29},
  [304] = {.lex_state = 19},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 19},
  [307] = {.lex_state = 74},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 10},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 19},
  [315] = {.lex_state = 74},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 19},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 19},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 35},
  [324] = {.lex_state = 10},
  [325] = {.lex_state = 29},
  [326] = {.lex_state = 74},
  [327] = {.lex_state = 34},
  [328] = {.lex_state = 33},
  [329] = {.lex_state = 33},
  [330] = {.lex_state = 19},
  [331] = {.lex_state = 74},
  [332] = {.lex_state = 12},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 10},
  [335] = {.lex_state = 19},
  [336] = {.lex_state = 29},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 12},
  [339] = {.lex_state = 10},
  [340] = {.lex_state = 12},
  [341] = {.lex_state = 19},
  [342] = {.lex_state = 12},
  [343] = {.lex_state = 10},
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 10},
  [346] = {.lex_state = 10},
  [347] = {.lex_state = 19},
  [348] = {.lex_state = 19},
  [349] = {.lex_state = 12},
  [350] = {.lex_state = 73},
  [351] = {.lex_state = 10},
  [352] = {.lex_state = 73},
  [353] = {.lex_state = 10},
  [354] = {.lex_state = 19},
  [355] = {.lex_state = 40},
  [356] = {.lex_state = 12},
  [357] = {.lex_state = 40},
  [358] = {.lex_state = 40},
  [359] = {.lex_state = 40},
  [360] = {.lex_state = 40},
  [361] = {.lex_state = 12},
  [362] = {.lex_state = 40},
  [363] = {.lex_state = 19},
  [364] = {.lex_state = 12},
  [365] = {.lex_state = 12},
  [366] = {.lex_state = 40},
  [367] = {.lex_state = 12},
  [368] = {.lex_state = 19},
  [369] = {.lex_state = 40},
  [370] = {.lex_state = 12},
  [371] = {.lex_state = 19},
  [372] = {.lex_state = 19},
  [373] = {.lex_state = 35},
  [374] = {.lex_state = 12},
  [375] = {.lex_state = 12},
  [376] = {.lex_state = 32},
  [377] = {.lex_state = 73},
  [378] = {.lex_state = 73},
  [379] = {.lex_state = 73},
  [380] = {.lex_state = 73},
  [381] = {.lex_state = 73},
  [382] = {.lex_state = 73},
  [383] = {.lex_state = 73},
  [384] = {.lex_state = 73},
  [385] = {.lex_state = 73},
  [386] = {.lex_state = 73},
  [387] = {.lex_state = 73},
  [388] = {.lex_state = 73},
  [389] = {.lex_state = 73},
  [390] = {.lex_state = 73},
  [391] = {.lex_state = 73},
  [392] = {.lex_state = 73},
  [393] = {.lex_state = 73},
  [394] = {.lex_state = 73},
  [395] = {.lex_state = 73},
  [396] = {.lex_state = 32},
  [397] = {.lex_state = 73},
  [398] = {.lex_state = 73},
  [399] = {.lex_state = 32},
  [400] = {.lex_state = 73},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 73},
  [403] = {.lex_state = 32},
  [404] = {.lex_state = 73},
  [405] = {.lex_state = 73},
  [406] = {.lex_state = 32},
  [407] = {.lex_state = 73},
  [408] = {.lex_state = 19},
  [409] = {.lex_state = 73},
  [410] = {.lex_state = 32},
  [411] = {.lex_state = 73},
  [412] = {.lex_state = 73},
  [413] = {.lex_state = 73},
  [414] = {.lex_state = 32},
  [415] = {.lex_state = 73},
  [416] = {.lex_state = 73},
  [417] = {.lex_state = 73},
  [418] = {.lex_state = 73},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 10},
  [421] = {.lex_state = 32},
  [422] = {.lex_state = 73},
  [423] = {.lex_state = 73},
  [424] = {.lex_state = 32},
  [425] = {.lex_state = 32},
  [426] = {.lex_state = 32},
  [427] = {.lex_state = 73},
  [428] = {.lex_state = 73},
  [429] = {.lex_state = 73},
  [430] = {.lex_state = 73},
  [431] = {.lex_state = 73},
  [432] = {.lex_state = 73},
  [433] = {.lex_state = 73},
  [434] = {.lex_state = 73},
  [435] = {.lex_state = 73},
  [436] = {.lex_state = 73},
  [437] = {.lex_state = 73},
  [438] = {.lex_state = 32},
  [439] = {.lex_state = 73},
  [440] = {.lex_state = 32},
  [441] = {.lex_state = 26},
  [442] = {.lex_state = 73},
  [443] = {.lex_state = 73},
  [444] = {.lex_state = 73},
  [445] = {.lex_state = 32},
  [446] = {.lex_state = 73},
  [447] = {.lex_state = 73},
  [448] = {.lex_state = 73},
  [449] = {.lex_state = 32},
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
    [sym_module] = STATE(439),
    [sym_declaration] = STATE(95),
    [sym_data_declaration] = STATE(217),
    [sym_module_declaration] = STATE(217),
    [sym_import_declaration] = STATE(217),
    [sym_type_signature] = STATE(217),
    [sym_function_definition] = STATE(217),
    [sym_operator_name] = STATE(73),
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
    STATE(149), 1,
      sym_application,
    STATE(152), 1,
      sym__case_infix_expression,
    STATE(199), 1,
      sym__case_body_expression,
    STATE(371), 1,
      sym_operator_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    STATE(197), 2,
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
    STATE(108), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(430), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(386), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(404), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(422), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(413), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(382), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(367), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
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
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__case,
    ACTIONS(115), 1,
      anon_sym__,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      sym__integerDecimal,
    ACTIONS(123), 1,
      sym_double,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(370), 1,
      sym_expression,
    STATE(372), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(121), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(294), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(243), 9,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(403), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
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
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym__case,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(215), 1,
      sym_expression,
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(414), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1329] = 19,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(430), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1401] = 20,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym__case,
    ACTIONS(139), 1,
      anon_sym__,
    ACTIONS(141), 1,
      anon_sym_QMARK,
    ACTIONS(143), 1,
      sym__integerDecimal,
    ACTIONS(147), 1,
      sym_double,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      sym_application,
    STATE(274), 1,
      sym__case_infix_expression,
    STATE(354), 1,
      sym_operator_name,
    STATE(375), 1,
      sym__case_body_expression,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      sym__case_of,
      sym__case_bar,
    STATE(349), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(145), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(211), 9,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
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
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__case,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      sym__integerDecimal,
    ACTIONS(167), 1,
      sym_double,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(200), 1,
      sym_expression,
    STATE(363), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(165), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(154), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
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
  [1619] = 19,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(404), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__case,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      sym__integerDecimal,
    ACTIONS(167), 1,
      sym_double,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(204), 1,
      sym_expression,
    STATE(363), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(165), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(154), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(445), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(204), 1,
      sym_expression,
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(200), 1,
      sym_expression,
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__case,
    ACTIONS(115), 1,
      anon_sym__,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      sym__integerDecimal,
    ACTIONS(123), 1,
      sym_double,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(367), 1,
      sym_expression,
    STATE(372), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(361), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(121), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(294), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(243), 9,
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
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym__case,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(236), 1,
      sym_expression,
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym__case,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(204), 1,
      sym_expression,
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(424), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2267] = 19,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2339] = 19,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(421), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2411] = 19,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(386), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2483] = 19,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(410), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2555] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      sym__integerDecimal,
    ACTIONS(167), 1,
      sym_double,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      sym__case,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(204), 1,
      sym_expression,
    STATE(363), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(165), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(154), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
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
  [2627] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      sym__integerDecimal,
    ACTIONS(167), 1,
      sym_double,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      sym__case,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(200), 1,
      sym_expression,
    STATE(363), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(165), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(154), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
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
  [2699] = 20,
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
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      sym__case,
    STATE(149), 1,
      sym_application,
    STATE(152), 1,
      sym__case_infix_expression,
    STATE(199), 1,
      sym__case_body_expression,
    STATE(371), 1,
      sym_operator_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_RPAREN,
      sym__case_bar,
    STATE(197), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(108), 9,
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
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym__case,
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(200), 1,
      sym_expression,
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(422), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(347), 1,
      sym_operator_name,
    STATE(364), 1,
      sym__incomplete_case_expression,
    STATE(370), 1,
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
    STATE(323), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(279), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(382), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    STATE(188), 1,
      sym__incomplete_case_expression,
    STATE(348), 1,
      sym_operator_name,
    STATE(413), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(164), 9,
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
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      sym__case,
    STATE(149), 1,
      sym_application,
    STATE(152), 1,
      sym__case_infix_expression,
    STATE(187), 1,
      sym__case_body_expression,
    STATE(371), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(197), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(108), 9,
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
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym__case,
    ACTIONS(139), 1,
      anon_sym__,
    ACTIONS(141), 1,
      anon_sym_QMARK,
    ACTIONS(143), 1,
      sym__integerDecimal,
    ACTIONS(147), 1,
      sym_double,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      sym_application,
    STATE(274), 1,
      sym__case_infix_expression,
    STATE(354), 1,
      sym_operator_name,
    STATE(365), 1,
      sym__case_body_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(349), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(145), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(211), 9,
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
    STATE(149), 1,
      sym_application,
    STATE(152), 1,
      sym__case_infix_expression,
    STATE(187), 1,
      sym__case_body_expression,
    STATE(371), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(197), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(108), 9,
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
    STATE(192), 1,
      sym__incomplete_case_alternative,
    STATE(331), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(406), 2,
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
  [3405] = 17,
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
    STATE(192), 1,
      sym__incomplete_case_alternative,
    STATE(201), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(438), 2,
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
  [3467] = 17,
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
    STATE(332), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    STATE(374), 1,
      sym__incomplete_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(449), 2,
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
  [3529] = 17,
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
    STATE(192), 1,
      sym__incomplete_case_alternative,
    STATE(326), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(406), 2,
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
  [3591] = 17,
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
    STATE(186), 1,
      sym_case_alternative,
    STATE(192), 1,
      sym__incomplete_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(438), 2,
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
  [3653] = 17,
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
    STATE(340), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    STATE(374), 1,
      sym__incomplete_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(449), 2,
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
  [3715] = 16,
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
    STATE(326), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(440), 2,
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
  [3774] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      sym__integerDecimal,
    ACTIONS(167), 1,
      sym_double,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(176), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(165), 3,
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
  [3829] = 16,
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
    STATE(183), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(426), 2,
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
  [3888] = 14,
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
    STATE(348), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(182), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(164), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3943] = 16,
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
    STATE(183), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(440), 2,
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
  [4002] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym__,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      sym__integerDecimal,
    ACTIONS(123), 1,
      sym_double,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(327), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(121), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(243), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4057] = 16,
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
    STATE(332), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(376), 2,
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
  [4116] = 14,
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
    STATE(347), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(373), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(279), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4171] = 16,
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
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(426), 2,
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
  [4230] = 16,
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
    STATE(356), 1,
      sym_case_alternative,
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(376), 2,
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
  [4289] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym__,
    ACTIONS(141), 1,
      anon_sym_QMARK,
    ACTIONS(143), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym_double,
    STATE(328), 1,
      sym_application,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(145), 3,
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
  [4343] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym__,
    ACTIONS(141), 1,
      anon_sym_QMARK,
    ACTIONS(143), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_double,
    STATE(329), 1,
      sym_application,
    STATE(354), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(145), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(253), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4397] = 15,
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
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(384), 2,
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
  [4453] = 14,
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
    STATE(166), 1,
      sym_application,
    STATE(371), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(53), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(125), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4507] = 14,
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
    ACTIONS(205), 1,
      sym_double,
    STATE(169), 1,
      sym_application,
    STATE(371), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(53), 3,
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
  [4561] = 15,
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
    STATE(368), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(432), 2,
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
  [4617] = 16,
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
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      sym__equals,
    STATE(74), 1,
      aux_sym_function_definition_repeat1,
    STATE(110), 1,
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
  [4675] = 15,
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
    ACTIONS(211), 1,
      sym__equals,
    STATE(75), 1,
      aux_sym_function_definition_repeat1,
    STATE(110), 1,
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
  [4730] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(216), 1,
      sym__equals,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym__,
    ACTIONS(224), 1,
      anon_sym_QMARK,
    ACTIONS(227), 1,
      sym__integerDecimal,
    ACTIONS(233), 1,
      sym_double,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_function_definition_repeat1,
    STATE(110), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(230), 3,
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
  [4785] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym__,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      sym__integerDecimal,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(121), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(288), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4833] = 12,
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
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(77), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(180), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4881] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      sym__integerDecimal,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(165), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(160), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4929] = 12,
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
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(99), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(337), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4977] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym__,
    ACTIONS(141), 1,
      anon_sym_QMARK,
    ACTIONS(143), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(145), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(282), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5025] = 12,
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
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
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
  [5073] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym__,
    ACTIONS(272), 1,
      anon_sym_QMARK,
    ACTIONS(274), 1,
      sym__integerDecimal,
    ACTIONS(278), 1,
      sym_double,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(276), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(321), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5119] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(284), 5,
      anon_sym_where,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(286), 12,
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
  [5148] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(288), 5,
      anon_sym_where,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(290), 12,
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
  [5177] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym__,
    ACTIONS(304), 1,
      anon_sym_QMARK,
    STATE(206), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(296), 4,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
    STATE(168), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [5219] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(308), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5246] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(312), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5273] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(316), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5300] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(320), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5327] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(324), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5354] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(328), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5381] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(332), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5408] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(336), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5435] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(338), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(340), 10,
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
  [5461] = 11,
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
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(98), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(217), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [5501] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(344), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(346), 10,
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
  [5527] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(348), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(350), 10,
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
  [5553] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_data,
    ACTIONS(360), 1,
      anon_sym_module,
    ACTIONS(363), 1,
      anon_sym_import,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(98), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(217), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [5593] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(369), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(371), 10,
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
  [5619] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(373), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(375), 10,
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
  [5645] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(377), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(379), 10,
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
  [5671] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(381), 4,
      sym__equals,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(383), 10,
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
  [5697] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(104), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(385), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(387), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [5726] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(391), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(393), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [5755] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(395), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(397), 10,
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
  [5780] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(399), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(401), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [5809] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(258), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [5845] = 7,
    ACTIONS(412), 1,
      aux_sym_application_token1,
    ACTIONS(414), 1,
      aux_sym__case_infix_operator_token1,
    STATE(70), 1,
      sym__case_infix_operator,
    STATE(134), 1,
      aux_sym_application_repeat1,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [5875] = 5,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(113), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(418), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [5901] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(422), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(424), 9,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [5925] = 5,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [5951] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(258), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [5987] = 5,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6013] = 5,
    ACTIONS(431), 1,
      anon_sym_DOT,
    STATE(114), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(401), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6039] = 5,
    ACTIONS(434), 1,
      anon_sym_DOT,
    STATE(114), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(393), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6065] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(434), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(258), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6101] = 5,
    ACTIONS(434), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(418), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6127] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(433), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(258), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6163] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(399), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(401), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6187] = 5,
    ACTIONS(412), 1,
      aux_sym_application_token1,
    STATE(121), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(442), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6212] = 5,
    ACTIONS(448), 1,
      aux_sym_application_token1,
    STATE(121), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(446), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6237] = 3,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 9,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6258] = 5,
    ACTIONS(412), 1,
      aux_sym_application_token1,
    STATE(134), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(453), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6283] = 5,
    ACTIONS(455), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6308] = 5,
    ACTIONS(412), 1,
      aux_sym_application_token1,
    STATE(134), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(459), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6333] = 5,
    ACTIONS(461), 1,
      aux_sym_application_token1,
    STATE(126), 1,
      aux_sym_application_repeat1,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6358] = 5,
    ACTIONS(455), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(418), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6383] = 5,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6408] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(447), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(258), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6441] = 5,
    ACTIONS(471), 1,
      aux_sym_application_token1,
    STATE(132), 1,
      aux_sym_application_repeat1,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(469), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6466] = 5,
    ACTIONS(471), 1,
      aux_sym_application_token1,
    STATE(126), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6491] = 5,
    ACTIONS(471), 1,
      aux_sym_application_token1,
    STATE(126), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6516] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(473), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(475), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6539] = 5,
    ACTIONS(412), 1,
      aux_sym_application_token1,
    STATE(121), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(442), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6564] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(400), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(258), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6597] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(401), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6618] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym__,
    ACTIONS(304), 1,
      anon_sym_QMARK,
    STATE(213), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(168), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6651] = 3,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6671] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(377), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6691] = 3,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6711] = 3,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6731] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(479), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6751] = 3,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6771] = 3,
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
  [6791] = 3,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6811] = 3,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(284), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6831] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(288), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6851] = 3,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6871] = 5,
    ACTIONS(414), 1,
      aux_sym__case_infix_operator_token1,
    STATE(70), 1,
      sym__case_infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(408), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(410), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6895] = 5,
    ACTIONS(485), 1,
      aux_sym_application_token1,
    STATE(165), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6919] = 3,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6939] = 5,
    ACTIONS(491), 1,
      aux_sym__case_infix_operator_token1,
    STATE(71), 1,
      sym__case_infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(489), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6963] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(344), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6983] = 5,
    ACTIONS(497), 1,
      aux_sym__infix_operator_token1,
    STATE(58), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(493), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(495), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7007] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym__,
    ACTIONS(304), 1,
      anon_sym_QMARK,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(133), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [7037] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(369), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7057] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(348), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7077] = 3,
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
  [7097] = 5,
    ACTIONS(485), 1,
      aux_sym_application_token1,
    STATE(165), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7121] = 3,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(479), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7141] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(338), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7161] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(284), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7181] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_QMARK,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(133), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [7211] = 5,
    ACTIONS(485), 1,
      aux_sym_application_token1,
    STATE(150), 1,
      aux_sym_application_repeat1,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(469), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7235] = 5,
    ACTIONS(499), 1,
      aux_sym_application_token1,
    STATE(165), 1,
      aux_sym_application_repeat1,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7259] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(459), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(457), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
  [7278] = 5,
    ACTIONS(502), 1,
      aux_sym__infix_operator_token1,
    STATE(60), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(493), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(495), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7301] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    STATE(170), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(506), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7326] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(451), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
  [7345] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    STATE(175), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(512), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7370] = 3,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7389] = 3,
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
  [7408] = 3,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7427] = 3,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(284), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7446] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
    STATE(175), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(475), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7471] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(517), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(519), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7490] = 3,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7509] = 3,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7528] = 3,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7547] = 3,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(479), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7566] = 3,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7585] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(517), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
    ACTIONS(519), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7603] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(523), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7623] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(493), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(495), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7643] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      sym__case_bar,
    STATE(196), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(527), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7667] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      sym__case_bar,
    STATE(185), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(533), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7691] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(535), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(537), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7711] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(539), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(541), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7731] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(547), 1,
      anon_sym_PIPE,
    STATE(189), 1,
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
  [7755] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(196), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__case_bar,
    ACTIONS(527), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7777] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(284), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7797] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(550), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(552), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7817] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    STATE(189), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(556), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7841] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(288), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7861] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(562), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7885] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      sym__case_bar,
    STATE(196), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(566), 4,
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
    ACTIONS(408), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(410), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7929] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    STATE(205), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(573), 4,
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
    ACTIONS(535), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(537), 4,
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
    ACTIONS(575), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(577), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7993] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      sym__case_bar,
    STATE(190), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(533), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8017] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(106), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(581), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8041] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    STATE(193), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(583), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(585), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8065] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(587), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(589), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8085] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    STATE(189), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(593), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8109] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(597), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8128] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(601), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8147] = 5,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(216), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(607), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8167] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8187] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8207] = 6,
    ACTIONS(617), 1,
      aux_sym_application_token1,
    ACTIONS(619), 1,
      aux_sym__case_infix_operator_token1,
    STATE(68), 1,
      sym__case_infix_operator,
    STATE(247), 1,
      aux_sym_application_repeat1,
    ACTIONS(408), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8229] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(621), 1,
      anon_sym_COLON,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(212), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [8251] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(629), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(631), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8269] = 5,
    ACTIONS(633), 1,
      anon_sym_DOT,
    STATE(233), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(416), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(418), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8289] = 4,
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
  [8307] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8327] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(643), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8345] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(645), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(222), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [8367] = 5,
    ACTIONS(393), 1,
      aux_sym_application_token1,
    ACTIONS(647), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(391), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8387] = 5,
    ACTIONS(401), 1,
      aux_sym_application_token1,
    ACTIONS(649), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8407] = 5,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    ACTIONS(654), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(657), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8427] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(212), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [8449] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(662), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8469] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(664), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(666), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8489] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8509] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
    STATE(228), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(672), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8529] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8549] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(678), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8569] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(682), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8589] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8609] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(688), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8627] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    STATE(234), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(692), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8647] = 5,
    ACTIONS(633), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(391), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(393), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8667] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8687] = 5,
    ACTIONS(696), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(399), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(401), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8707] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(699), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(701), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8725] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(705), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8745] = 5,
    ACTIONS(418), 1,
      aux_sym_application_token1,
    ACTIONS(647), 1,
      anon_sym_DOT,
    STATE(219), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8765] = 5,
    ACTIONS(605), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8785] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(711), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8803] = 5,
    ACTIONS(393), 1,
      aux_sym_application_token1,
    ACTIONS(713), 1,
      anon_sym_DOT,
    STATE(256), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(391), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8822] = 4,
    ACTIONS(715), 1,
      aux_sym_application_token1,
    STATE(242), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8839] = 5,
    ACTIONS(469), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(718), 1,
      aux_sym_application_token1,
    STATE(249), 1,
      aux_sym_application_repeat1,
    ACTIONS(467), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8858] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      sym_identifier,
    STATE(198), 1,
      sym_constructor_declaration,
    STATE(419), 1,
      sym_operator_name,
    STATE(420), 1,
      sym_constructor_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [8881] = 3,
    ACTIONS(399), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 3,
      anon_sym_DOT,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
  [8896] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(346), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [8917] = 4,
    ACTIONS(617), 1,
      aux_sym_application_token1,
    STATE(242), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(440), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8934] = 4,
    ACTIONS(617), 1,
      aux_sym_application_token1,
    STATE(242), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(440), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [8951] = 5,
    ACTIONS(442), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(718), 1,
      aux_sym_application_token1,
    STATE(254), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [8970] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(724), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(320), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [8991] = 3,
    ACTIONS(401), 2,
      anon_sym_DOT,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9006] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(726), 1,
      anon_sym_DASH_GT,
    STATE(252), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(473), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9025] = 4,
    ACTIONS(617), 1,
      aux_sym_application_token1,
    STATE(247), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9042] = 5,
    ACTIONS(446), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(729), 1,
      aux_sym_application_token1,
    STATE(254), 1,
      aux_sym_application_repeat1,
    ACTIONS(444), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9061] = 5,
    ACTIONS(442), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(718), 1,
      aux_sym_application_token1,
    STATE(254), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9080] = 5,
    ACTIONS(401), 1,
      aux_sym_application_token1,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(256), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(399), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9099] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(343), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9120] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(737), 1,
      anon_sym_DASH_GT,
    STATE(266), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(504), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9139] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      sym_identifier,
    STATE(203), 1,
      sym_constructor_declaration,
    STATE(419), 1,
      sym_operator_name,
    STATE(420), 1,
      sym_constructor_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9162] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(351), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9183] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9196] = 4,
    ACTIONS(617), 1,
      aux_sym_application_token1,
    STATE(247), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9213] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      sym_identifier,
    STATE(207), 1,
      sym_constructor_declaration,
    STATE(419), 1,
      sym_operator_name,
    STATE(420), 1,
      sym_constructor_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9236] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(311), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9257] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(745), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(324), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9278] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(737), 1,
      anon_sym_DASH_GT,
    STATE(252), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(510), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9297] = 5,
    ACTIONS(418), 1,
      aux_sym_application_token1,
    ACTIONS(713), 1,
      anon_sym_DOT,
    STATE(241), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(416), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9316] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(316), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9337] = 3,
    ACTIONS(369), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9351] = 3,
    ACTIONS(284), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(286), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9365] = 3,
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
  [9379] = 4,
    ACTIONS(619), 1,
      aux_sym__case_infix_operator_token1,
    STATE(68), 1,
      sym__case_infix_operator,
    ACTIONS(408), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9395] = 4,
    ACTIONS(749), 1,
      aux_sym_application_token1,
    STATE(273), 1,
      aux_sym_application_repeat1,
    ACTIONS(444), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9411] = 4,
    ACTIONS(752), 1,
      aux_sym__case_infix_operator_token1,
    STATE(67), 1,
      sym__case_infix_operator,
    ACTIONS(487), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9427] = 3,
    ACTIONS(377), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9441] = 4,
    ACTIONS(754), 1,
      aux_sym_application_token1,
    STATE(273), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9457] = 4,
    ACTIONS(754), 1,
      aux_sym_application_token1,
    STATE(273), 1,
      aux_sym_application_repeat1,
    ACTIONS(440), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9473] = 3,
    ACTIONS(344), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9487] = 4,
    ACTIONS(754), 1,
      aux_sym_application_token1,
    STATE(277), 1,
      aux_sym_application_repeat1,
    ACTIONS(467), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9503] = 5,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(758), 1,
      aux_sym_application_token1,
    ACTIONS(760), 1,
      sym__case_arrow,
    STATE(281), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9521] = 5,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      aux_sym_application_token1,
    ACTIONS(767), 1,
      sym__case_arrow,
    STATE(281), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9539] = 3,
    ACTIONS(479), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9553] = 3,
    ACTIONS(399), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(401), 2,
      anon_sym_DOT,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9567] = 3,
    ACTIONS(288), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(290), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9581] = 3,
    ACTIONS(338), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(340), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9595] = 3,
    ACTIONS(348), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9609] = 3,
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
  [9623] = 3,
    ACTIONS(477), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(479), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9637] = 3,
    ACTIONS(348), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(350), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9651] = 3,
    ACTIONS(338), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9665] = 3,
    ACTIONS(284), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9679] = 3,
    ACTIONS(369), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(371), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9693] = 3,
    ACTIONS(288), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9707] = 4,
    ACTIONS(769), 1,
      aux_sym__infix_operator_token1,
    STATE(62), 1,
      sym__infix_operator,
    ACTIONS(493), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9723] = 3,
    ACTIONS(344), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(346), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9737] = 3,
    ACTIONS(377), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(379), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9751] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      sym__case_bar,
    STATE(307), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [9768] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_COLON,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9785] = 3,
    ACTIONS(338), 1,
      aux_sym_application_token1,
    ACTIONS(340), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9798] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_COLON,
    STATE(317), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9815] = 3,
    ACTIONS(348), 1,
      aux_sym_application_token1,
    ACTIONS(350), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9828] = 3,
    ACTIONS(284), 1,
      aux_sym_application_token1,
    ACTIONS(286), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9841] = 3,
    ACTIONS(369), 1,
      aux_sym_application_token1,
    ACTIONS(371), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9854] = 3,
    ACTIONS(379), 1,
      sym__case_arrow,
    ACTIONS(377), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9867] = 3,
    ACTIONS(288), 1,
      aux_sym_application_token1,
    ACTIONS(290), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9880] = 3,
    ACTIONS(346), 1,
      sym__case_arrow,
    ACTIONS(344), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9893] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      sym__case_bar,
    STATE(307), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [9910] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      sym__case_of,
    ACTIONS(782), 1,
      sym__case_bar,
    STATE(308), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [9927] = 3,
    ACTIONS(371), 1,
      sym__case_arrow,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9940] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_EQ_GT,
    STATE(312), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9957] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_EQ_GT,
    STATE(310), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9974] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_EQ_GT,
    STATE(312), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9991] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_EQ_GT,
    STATE(312), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10008] = 3,
    ACTIONS(350), 1,
      sym__case_arrow,
    ACTIONS(348), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10021] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(307), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(525), 2,
      anon_sym_RPAREN,
      sym__case_bar,
  [10036] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_EQ_GT,
    STATE(313), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10053] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(800), 1,
      anon_sym_COLON,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10070] = 3,
    ACTIONS(344), 1,
      aux_sym_application_token1,
    ACTIONS(346), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10083] = 3,
    ACTIONS(290), 1,
      sym__case_arrow,
    ACTIONS(288), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10096] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_EQ_GT,
    STATE(322), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10113] = 3,
    ACTIONS(809), 1,
      sym__case_arrow,
    ACTIONS(807), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10126] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_EQ_GT,
    STATE(312), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10143] = 4,
    ACTIONS(493), 1,
      sym__case_of,
    ACTIONS(813), 1,
      aux_sym__infix_operator_token1,
    STATE(64), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10158] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_EQ_GT,
    STATE(339), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10175] = 3,
    ACTIONS(377), 1,
      aux_sym_application_token1,
    ACTIONS(379), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10188] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      sym__case_bar,
    STATE(315), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10205] = 3,
    ACTIONS(519), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(517), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10218] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10229] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10240] = 3,
    ACTIONS(286), 1,
      sym__case_arrow,
    ACTIONS(284), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10253] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      sym__case_bar,
    STATE(297), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10270] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      sym__case_of,
    ACTIONS(817), 1,
      sym__case_bar,
    STATE(338), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10287] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_COLON,
    STATE(300), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10304] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_COLON,
    STATE(298), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10321] = 3,
    ACTIONS(383), 1,
      sym__case_arrow,
    ACTIONS(381), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10334] = 3,
    ACTIONS(483), 1,
      aux_sym_application_token1,
    ACTIONS(481), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10347] = 3,
    ACTIONS(479), 1,
      aux_sym_application_token1,
    ACTIONS(477), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10360] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(308), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(525), 2,
      sym__case_of,
      sym__case_bar,
  [10375] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_EQ_GT,
    STATE(312), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10392] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      sym__case_of,
    ACTIONS(817), 1,
      sym__case_bar,
    STATE(342), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10409] = 3,
    ACTIONS(340), 1,
      sym__case_arrow,
    ACTIONS(338), 2,
      anon_sym_RPAREN,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10422] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      sym__case_of,
    ACTIONS(817), 1,
      sym__case_bar,
    STATE(308), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10439] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_EQ_GT,
    STATE(345), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10456] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_EQ_GT,
    STATE(312), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10473] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_EQ_GT,
    STATE(312), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10490] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_EQ_GT,
    STATE(344), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10507] = 3,
    ACTIONS(833), 1,
      aux_sym_application_token1,
    STATE(276), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10519] = 3,
    ACTIONS(835), 1,
      aux_sym_application_token1,
    STATE(159), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10531] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(408), 2,
      sym__case_of,
      sym__case_bar,
  [10543] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(837), 1,
      sym_identifier,
    STATE(240), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10557] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(839), 2,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [10569] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(837), 1,
      sym_identifier,
    STATE(231), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10583] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(841), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [10595] = 3,
    ACTIONS(843), 1,
      aux_sym_application_token1,
    STATE(248), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10607] = 3,
    ACTIONS(845), 1,
      anon_sym_BSLASH,
    ACTIONS(847), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10619] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(521), 2,
      sym__case_of,
      sym__case_bar,
  [10631] = 3,
    ACTIONS(849), 1,
      anon_sym_BSLASH,
    ACTIONS(851), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10643] = 3,
    ACTIONS(853), 1,
      anon_sym_BSLASH,
    ACTIONS(855), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10655] = 3,
    ACTIONS(857), 1,
      anon_sym_BSLASH,
    ACTIONS(859), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10667] = 3,
    ACTIONS(861), 1,
      anon_sym_BSLASH,
    ACTIONS(863), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10679] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(493), 2,
      sym__case_of,
      sym__case_bar,
  [10691] = 3,
    ACTIONS(865), 1,
      anon_sym_BSLASH,
    ACTIONS(867), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10703] = 3,
    ACTIONS(869), 1,
      aux_sym_application_token1,
    STATE(131), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10715] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(539), 2,
      sym__case_of,
      sym__case_bar,
  [10727] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(535), 2,
      sym__case_of,
      sym__case_bar,
  [10739] = 3,
    ACTIONS(871), 1,
      anon_sym_BSLASH,
    ACTIONS(873), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10751] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(587), 2,
      sym__case_of,
      sym__case_bar,
  [10763] = 3,
    ACTIONS(875), 1,
      aux_sym_application_token1,
    STATE(280), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10775] = 3,
    ACTIONS(877), 1,
      anon_sym_BSLASH,
    ACTIONS(879), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10787] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(575), 2,
      sym__case_of,
      sym__case_bar,
  [10799] = 3,
    ACTIONS(881), 1,
      aux_sym_application_token1,
    STATE(120), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10811] = 3,
    ACTIONS(883), 1,
      aux_sym_application_token1,
    STATE(255), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10823] = 2,
    ACTIONS(517), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10833] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(550), 2,
      sym__case_of,
      sym__case_bar,
  [10845] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(535), 2,
      sym__case_of,
      sym__case_bar,
  [10857] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(885), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10868] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(887), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10879] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10890] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(891), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10901] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(893), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10912] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(895), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10923] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10934] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(899), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10945] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10956] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10967] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10978] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(907), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10989] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(909), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11000] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(911), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11011] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11022] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(915), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11033] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(917), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11044] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(919), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11055] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(921), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11066] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(923), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11077] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(925), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11088] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(927), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11099] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(929), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11110] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(931), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11121] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(933), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11132] = 2,
    ACTIONS(935), 1,
      aux_sym_string_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11141] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(937), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11152] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(939), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11163] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11174] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11185] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(945), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11196] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(947), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11207] = 2,
    ACTIONS(397), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11216] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11227] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(951), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11238] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(953), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11249] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11260] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11271] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(959), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11282] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(961), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11293] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(963), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11304] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(965), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11315] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(967), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11326] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(969), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11337] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11348] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(973), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11359] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11370] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(977), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11381] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(979), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11392] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(981), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11403] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(983), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11414] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11425] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11436] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(989), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11447] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11458] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(993), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11469] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11480] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11491] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(999), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11502] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1001), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11513] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1003), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11524] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11535] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1007), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11546] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1009), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11557] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1011), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11568] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1013), 1,
      sym_operator,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11579] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1015), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11590] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11601] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11612] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1021), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11623] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1023), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11634] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1025), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11645] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11656] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1029), 1,
      sym__case_arrow,
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
  [SMALL_STATE(24)] = 1401,
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
  [SMALL_STATE(37)] = 2339,
  [SMALL_STATE(38)] = 2411,
  [SMALL_STATE(39)] = 2483,
  [SMALL_STATE(40)] = 2555,
  [SMALL_STATE(41)] = 2627,
  [SMALL_STATE(42)] = 2699,
  [SMALL_STATE(43)] = 2773,
  [SMALL_STATE(44)] = 2845,
  [SMALL_STATE(45)] = 2917,
  [SMALL_STATE(46)] = 2989,
  [SMALL_STATE(47)] = 3061,
  [SMALL_STATE(48)] = 3133,
  [SMALL_STATE(49)] = 3203,
  [SMALL_STATE(50)] = 3273,
  [SMALL_STATE(51)] = 3343,
  [SMALL_STATE(52)] = 3405,
  [SMALL_STATE(53)] = 3467,
  [SMALL_STATE(54)] = 3529,
  [SMALL_STATE(55)] = 3591,
  [SMALL_STATE(56)] = 3653,
  [SMALL_STATE(57)] = 3715,
  [SMALL_STATE(58)] = 3774,
  [SMALL_STATE(59)] = 3829,
  [SMALL_STATE(60)] = 3888,
  [SMALL_STATE(61)] = 3943,
  [SMALL_STATE(62)] = 4002,
  [SMALL_STATE(63)] = 4057,
  [SMALL_STATE(64)] = 4116,
  [SMALL_STATE(65)] = 4171,
  [SMALL_STATE(66)] = 4230,
  [SMALL_STATE(67)] = 4289,
  [SMALL_STATE(68)] = 4343,
  [SMALL_STATE(69)] = 4397,
  [SMALL_STATE(70)] = 4453,
  [SMALL_STATE(71)] = 4507,
  [SMALL_STATE(72)] = 4561,
  [SMALL_STATE(73)] = 4617,
  [SMALL_STATE(74)] = 4675,
  [SMALL_STATE(75)] = 4730,
  [SMALL_STATE(76)] = 4785,
  [SMALL_STATE(77)] = 4833,
  [SMALL_STATE(78)] = 4881,
  [SMALL_STATE(79)] = 4929,
  [SMALL_STATE(80)] = 4977,
  [SMALL_STATE(81)] = 5025,
  [SMALL_STATE(82)] = 5073,
  [SMALL_STATE(83)] = 5119,
  [SMALL_STATE(84)] = 5148,
  [SMALL_STATE(85)] = 5177,
  [SMALL_STATE(86)] = 5219,
  [SMALL_STATE(87)] = 5246,
  [SMALL_STATE(88)] = 5273,
  [SMALL_STATE(89)] = 5300,
  [SMALL_STATE(90)] = 5327,
  [SMALL_STATE(91)] = 5354,
  [SMALL_STATE(92)] = 5381,
  [SMALL_STATE(93)] = 5408,
  [SMALL_STATE(94)] = 5435,
  [SMALL_STATE(95)] = 5461,
  [SMALL_STATE(96)] = 5501,
  [SMALL_STATE(97)] = 5527,
  [SMALL_STATE(98)] = 5553,
  [SMALL_STATE(99)] = 5593,
  [SMALL_STATE(100)] = 5619,
  [SMALL_STATE(101)] = 5645,
  [SMALL_STATE(102)] = 5671,
  [SMALL_STATE(103)] = 5697,
  [SMALL_STATE(104)] = 5726,
  [SMALL_STATE(105)] = 5755,
  [SMALL_STATE(106)] = 5780,
  [SMALL_STATE(107)] = 5809,
  [SMALL_STATE(108)] = 5845,
  [SMALL_STATE(109)] = 5875,
  [SMALL_STATE(110)] = 5901,
  [SMALL_STATE(111)] = 5925,
  [SMALL_STATE(112)] = 5951,
  [SMALL_STATE(113)] = 5987,
  [SMALL_STATE(114)] = 6013,
  [SMALL_STATE(115)] = 6039,
  [SMALL_STATE(116)] = 6065,
  [SMALL_STATE(117)] = 6101,
  [SMALL_STATE(118)] = 6127,
  [SMALL_STATE(119)] = 6163,
  [SMALL_STATE(120)] = 6187,
  [SMALL_STATE(121)] = 6212,
  [SMALL_STATE(122)] = 6237,
  [SMALL_STATE(123)] = 6258,
  [SMALL_STATE(124)] = 6283,
  [SMALL_STATE(125)] = 6308,
  [SMALL_STATE(126)] = 6333,
  [SMALL_STATE(127)] = 6358,
  [SMALL_STATE(128)] = 6383,
  [SMALL_STATE(129)] = 6408,
  [SMALL_STATE(130)] = 6441,
  [SMALL_STATE(131)] = 6466,
  [SMALL_STATE(132)] = 6491,
  [SMALL_STATE(133)] = 6516,
  [SMALL_STATE(134)] = 6539,
  [SMALL_STATE(135)] = 6564,
  [SMALL_STATE(136)] = 6597,
  [SMALL_STATE(137)] = 6618,
  [SMALL_STATE(138)] = 6651,
  [SMALL_STATE(139)] = 6671,
  [SMALL_STATE(140)] = 6691,
  [SMALL_STATE(141)] = 6711,
  [SMALL_STATE(142)] = 6731,
  [SMALL_STATE(143)] = 6751,
  [SMALL_STATE(144)] = 6771,
  [SMALL_STATE(145)] = 6791,
  [SMALL_STATE(146)] = 6811,
  [SMALL_STATE(147)] = 6831,
  [SMALL_STATE(148)] = 6851,
  [SMALL_STATE(149)] = 6871,
  [SMALL_STATE(150)] = 6895,
  [SMALL_STATE(151)] = 6919,
  [SMALL_STATE(152)] = 6939,
  [SMALL_STATE(153)] = 6963,
  [SMALL_STATE(154)] = 6983,
  [SMALL_STATE(155)] = 7007,
  [SMALL_STATE(156)] = 7037,
  [SMALL_STATE(157)] = 7057,
  [SMALL_STATE(158)] = 7077,
  [SMALL_STATE(159)] = 7097,
  [SMALL_STATE(160)] = 7121,
  [SMALL_STATE(161)] = 7141,
  [SMALL_STATE(162)] = 7161,
  [SMALL_STATE(163)] = 7181,
  [SMALL_STATE(164)] = 7211,
  [SMALL_STATE(165)] = 7235,
  [SMALL_STATE(166)] = 7259,
  [SMALL_STATE(167)] = 7278,
  [SMALL_STATE(168)] = 7301,
  [SMALL_STATE(169)] = 7326,
  [SMALL_STATE(170)] = 7345,
  [SMALL_STATE(171)] = 7370,
  [SMALL_STATE(172)] = 7389,
  [SMALL_STATE(173)] = 7408,
  [SMALL_STATE(174)] = 7427,
  [SMALL_STATE(175)] = 7446,
  [SMALL_STATE(176)] = 7471,
  [SMALL_STATE(177)] = 7490,
  [SMALL_STATE(178)] = 7509,
  [SMALL_STATE(179)] = 7528,
  [SMALL_STATE(180)] = 7547,
  [SMALL_STATE(181)] = 7566,
  [SMALL_STATE(182)] = 7585,
  [SMALL_STATE(183)] = 7603,
  [SMALL_STATE(184)] = 7623,
  [SMALL_STATE(185)] = 7643,
  [SMALL_STATE(186)] = 7667,
  [SMALL_STATE(187)] = 7691,
  [SMALL_STATE(188)] = 7711,
  [SMALL_STATE(189)] = 7731,
  [SMALL_STATE(190)] = 7755,
  [SMALL_STATE(191)] = 7777,
  [SMALL_STATE(192)] = 7797,
  [SMALL_STATE(193)] = 7817,
  [SMALL_STATE(194)] = 7841,
  [SMALL_STATE(195)] = 7861,
  [SMALL_STATE(196)] = 7885,
  [SMALL_STATE(197)] = 7909,
  [SMALL_STATE(198)] = 7929,
  [SMALL_STATE(199)] = 7953,
  [SMALL_STATE(200)] = 7973,
  [SMALL_STATE(201)] = 7993,
  [SMALL_STATE(202)] = 8017,
  [SMALL_STATE(203)] = 8041,
  [SMALL_STATE(204)] = 8065,
  [SMALL_STATE(205)] = 8085,
  [SMALL_STATE(206)] = 8109,
  [SMALL_STATE(207)] = 8128,
  [SMALL_STATE(208)] = 8147,
  [SMALL_STATE(209)] = 8167,
  [SMALL_STATE(210)] = 8187,
  [SMALL_STATE(211)] = 8207,
  [SMALL_STATE(212)] = 8229,
  [SMALL_STATE(213)] = 8251,
  [SMALL_STATE(214)] = 8269,
  [SMALL_STATE(215)] = 8289,
  [SMALL_STATE(216)] = 8307,
  [SMALL_STATE(217)] = 8327,
  [SMALL_STATE(218)] = 8345,
  [SMALL_STATE(219)] = 8367,
  [SMALL_STATE(220)] = 8387,
  [SMALL_STATE(221)] = 8407,
  [SMALL_STATE(222)] = 8427,
  [SMALL_STATE(223)] = 8449,
  [SMALL_STATE(224)] = 8469,
  [SMALL_STATE(225)] = 8489,
  [SMALL_STATE(226)] = 8509,
  [SMALL_STATE(227)] = 8529,
  [SMALL_STATE(228)] = 8549,
  [SMALL_STATE(229)] = 8569,
  [SMALL_STATE(230)] = 8589,
  [SMALL_STATE(231)] = 8609,
  [SMALL_STATE(232)] = 8627,
  [SMALL_STATE(233)] = 8647,
  [SMALL_STATE(234)] = 8667,
  [SMALL_STATE(235)] = 8687,
  [SMALL_STATE(236)] = 8707,
  [SMALL_STATE(237)] = 8725,
  [SMALL_STATE(238)] = 8745,
  [SMALL_STATE(239)] = 8765,
  [SMALL_STATE(240)] = 8785,
  [SMALL_STATE(241)] = 8803,
  [SMALL_STATE(242)] = 8822,
  [SMALL_STATE(243)] = 8839,
  [SMALL_STATE(244)] = 8858,
  [SMALL_STATE(245)] = 8881,
  [SMALL_STATE(246)] = 8896,
  [SMALL_STATE(247)] = 8917,
  [SMALL_STATE(248)] = 8934,
  [SMALL_STATE(249)] = 8951,
  [SMALL_STATE(250)] = 8970,
  [SMALL_STATE(251)] = 8991,
  [SMALL_STATE(252)] = 9006,
  [SMALL_STATE(253)] = 9025,
  [SMALL_STATE(254)] = 9042,
  [SMALL_STATE(255)] = 9061,
  [SMALL_STATE(256)] = 9080,
  [SMALL_STATE(257)] = 9099,
  [SMALL_STATE(258)] = 9120,
  [SMALL_STATE(259)] = 9139,
  [SMALL_STATE(260)] = 9162,
  [SMALL_STATE(261)] = 9183,
  [SMALL_STATE(262)] = 9196,
  [SMALL_STATE(263)] = 9213,
  [SMALL_STATE(264)] = 9236,
  [SMALL_STATE(265)] = 9257,
  [SMALL_STATE(266)] = 9278,
  [SMALL_STATE(267)] = 9297,
  [SMALL_STATE(268)] = 9316,
  [SMALL_STATE(269)] = 9337,
  [SMALL_STATE(270)] = 9351,
  [SMALL_STATE(271)] = 9365,
  [SMALL_STATE(272)] = 9379,
  [SMALL_STATE(273)] = 9395,
  [SMALL_STATE(274)] = 9411,
  [SMALL_STATE(275)] = 9427,
  [SMALL_STATE(276)] = 9441,
  [SMALL_STATE(277)] = 9457,
  [SMALL_STATE(278)] = 9473,
  [SMALL_STATE(279)] = 9487,
  [SMALL_STATE(280)] = 9503,
  [SMALL_STATE(281)] = 9521,
  [SMALL_STATE(282)] = 9539,
  [SMALL_STATE(283)] = 9553,
  [SMALL_STATE(284)] = 9567,
  [SMALL_STATE(285)] = 9581,
  [SMALL_STATE(286)] = 9595,
  [SMALL_STATE(287)] = 9609,
  [SMALL_STATE(288)] = 9623,
  [SMALL_STATE(289)] = 9637,
  [SMALL_STATE(290)] = 9651,
  [SMALL_STATE(291)] = 9665,
  [SMALL_STATE(292)] = 9679,
  [SMALL_STATE(293)] = 9693,
  [SMALL_STATE(294)] = 9707,
  [SMALL_STATE(295)] = 9723,
  [SMALL_STATE(296)] = 9737,
  [SMALL_STATE(297)] = 9751,
  [SMALL_STATE(298)] = 9768,
  [SMALL_STATE(299)] = 9785,
  [SMALL_STATE(300)] = 9798,
  [SMALL_STATE(301)] = 9815,
  [SMALL_STATE(302)] = 9828,
  [SMALL_STATE(303)] = 9841,
  [SMALL_STATE(304)] = 9854,
  [SMALL_STATE(305)] = 9867,
  [SMALL_STATE(306)] = 9880,
  [SMALL_STATE(307)] = 9893,
  [SMALL_STATE(308)] = 9910,
  [SMALL_STATE(309)] = 9927,
  [SMALL_STATE(310)] = 9940,
  [SMALL_STATE(311)] = 9957,
  [SMALL_STATE(312)] = 9974,
  [SMALL_STATE(313)] = 9991,
  [SMALL_STATE(314)] = 10008,
  [SMALL_STATE(315)] = 10021,
  [SMALL_STATE(316)] = 10036,
  [SMALL_STATE(317)] = 10053,
  [SMALL_STATE(318)] = 10070,
  [SMALL_STATE(319)] = 10083,
  [SMALL_STATE(320)] = 10096,
  [SMALL_STATE(321)] = 10113,
  [SMALL_STATE(322)] = 10126,
  [SMALL_STATE(323)] = 10143,
  [SMALL_STATE(324)] = 10158,
  [SMALL_STATE(325)] = 10175,
  [SMALL_STATE(326)] = 10188,
  [SMALL_STATE(327)] = 10205,
  [SMALL_STATE(328)] = 10218,
  [SMALL_STATE(329)] = 10229,
  [SMALL_STATE(330)] = 10240,
  [SMALL_STATE(331)] = 10253,
  [SMALL_STATE(332)] = 10270,
  [SMALL_STATE(333)] = 10287,
  [SMALL_STATE(334)] = 10304,
  [SMALL_STATE(335)] = 10321,
  [SMALL_STATE(336)] = 10334,
  [SMALL_STATE(337)] = 10347,
  [SMALL_STATE(338)] = 10360,
  [SMALL_STATE(339)] = 10375,
  [SMALL_STATE(340)] = 10392,
  [SMALL_STATE(341)] = 10409,
  [SMALL_STATE(342)] = 10422,
  [SMALL_STATE(343)] = 10439,
  [SMALL_STATE(344)] = 10456,
  [SMALL_STATE(345)] = 10473,
  [SMALL_STATE(346)] = 10490,
  [SMALL_STATE(347)] = 10507,
  [SMALL_STATE(348)] = 10519,
  [SMALL_STATE(349)] = 10531,
  [SMALL_STATE(350)] = 10543,
  [SMALL_STATE(351)] = 10557,
  [SMALL_STATE(352)] = 10569,
  [SMALL_STATE(353)] = 10583,
  [SMALL_STATE(354)] = 10595,
  [SMALL_STATE(355)] = 10607,
  [SMALL_STATE(356)] = 10619,
  [SMALL_STATE(357)] = 10631,
  [SMALL_STATE(358)] = 10643,
  [SMALL_STATE(359)] = 10655,
  [SMALL_STATE(360)] = 10667,
  [SMALL_STATE(361)] = 10679,
  [SMALL_STATE(362)] = 10691,
  [SMALL_STATE(363)] = 10703,
  [SMALL_STATE(364)] = 10715,
  [SMALL_STATE(365)] = 10727,
  [SMALL_STATE(366)] = 10739,
  [SMALL_STATE(367)] = 10751,
  [SMALL_STATE(368)] = 10763,
  [SMALL_STATE(369)] = 10775,
  [SMALL_STATE(370)] = 10787,
  [SMALL_STATE(371)] = 10799,
  [SMALL_STATE(372)] = 10811,
  [SMALL_STATE(373)] = 10823,
  [SMALL_STATE(374)] = 10833,
  [SMALL_STATE(375)] = 10845,
  [SMALL_STATE(376)] = 10857,
  [SMALL_STATE(377)] = 10868,
  [SMALL_STATE(378)] = 10879,
  [SMALL_STATE(379)] = 10890,
  [SMALL_STATE(380)] = 10901,
  [SMALL_STATE(381)] = 10912,
  [SMALL_STATE(382)] = 10923,
  [SMALL_STATE(383)] = 10934,
  [SMALL_STATE(384)] = 10945,
  [SMALL_STATE(385)] = 10956,
  [SMALL_STATE(386)] = 10967,
  [SMALL_STATE(387)] = 10978,
  [SMALL_STATE(388)] = 10989,
  [SMALL_STATE(389)] = 11000,
  [SMALL_STATE(390)] = 11011,
  [SMALL_STATE(391)] = 11022,
  [SMALL_STATE(392)] = 11033,
  [SMALL_STATE(393)] = 11044,
  [SMALL_STATE(394)] = 11055,
  [SMALL_STATE(395)] = 11066,
  [SMALL_STATE(396)] = 11077,
  [SMALL_STATE(397)] = 11088,
  [SMALL_STATE(398)] = 11099,
  [SMALL_STATE(399)] = 11110,
  [SMALL_STATE(400)] = 11121,
  [SMALL_STATE(401)] = 11132,
  [SMALL_STATE(402)] = 11141,
  [SMALL_STATE(403)] = 11152,
  [SMALL_STATE(404)] = 11163,
  [SMALL_STATE(405)] = 11174,
  [SMALL_STATE(406)] = 11185,
  [SMALL_STATE(407)] = 11196,
  [SMALL_STATE(408)] = 11207,
  [SMALL_STATE(409)] = 11216,
  [SMALL_STATE(410)] = 11227,
  [SMALL_STATE(411)] = 11238,
  [SMALL_STATE(412)] = 11249,
  [SMALL_STATE(413)] = 11260,
  [SMALL_STATE(414)] = 11271,
  [SMALL_STATE(415)] = 11282,
  [SMALL_STATE(416)] = 11293,
  [SMALL_STATE(417)] = 11304,
  [SMALL_STATE(418)] = 11315,
  [SMALL_STATE(419)] = 11326,
  [SMALL_STATE(420)] = 11337,
  [SMALL_STATE(421)] = 11348,
  [SMALL_STATE(422)] = 11359,
  [SMALL_STATE(423)] = 11370,
  [SMALL_STATE(424)] = 11381,
  [SMALL_STATE(425)] = 11392,
  [SMALL_STATE(426)] = 11403,
  [SMALL_STATE(427)] = 11414,
  [SMALL_STATE(428)] = 11425,
  [SMALL_STATE(429)] = 11436,
  [SMALL_STATE(430)] = 11447,
  [SMALL_STATE(431)] = 11458,
  [SMALL_STATE(432)] = 11469,
  [SMALL_STATE(433)] = 11480,
  [SMALL_STATE(434)] = 11491,
  [SMALL_STATE(435)] = 11502,
  [SMALL_STATE(436)] = 11513,
  [SMALL_STATE(437)] = 11524,
  [SMALL_STATE(438)] = 11535,
  [SMALL_STATE(439)] = 11546,
  [SMALL_STATE(440)] = 11557,
  [SMALL_STATE(441)] = 11568,
  [SMALL_STATE(442)] = 11579,
  [SMALL_STATE(443)] = 11590,
  [SMALL_STATE(444)] = 11601,
  [SMALL_STATE(445)] = 11612,
  [SMALL_STATE(446)] = 11623,
  [SMALL_STATE(447)] = 11634,
  [SMALL_STATE(448)] = 11645,
  [SMALL_STATE(449)] = 11656,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_alternative, 2, .production_id = 28),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_alternative, 2, .production_id = 28),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(100),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(69),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(83),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(423),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(101),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(101),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(100),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(355),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(227),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 2, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 2, .production_id = 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2, .production_id = 22),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 2, .production_id = 22),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 24),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 24),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 23),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 23),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 23),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 23),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 24),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 24),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 6, .production_id = 31),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 6, .production_id = 31),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 6, .production_id = 31),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 6, .production_id = 31),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(73),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(409),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(350),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(352),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(441),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 9),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_atom, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(412),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_body_expression, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_body_expression, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_atom, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_atom, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(380),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(442),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 8),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 8),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(81),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_infix_expression, 3, .production_id = 37),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_infix_expression, 3, .production_id = 37),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_infix_expression, 3, .production_id = 12),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_infix_expression, 3, .production_id = 12),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(78),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(435),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_term, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_term, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_body_expression, 1, .production_id = 36),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_body_expression, 1, .production_id = 36),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(77),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(155),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 12),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 12),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 33),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 33),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 5, .production_id = 27),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 5, .production_id = 27),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 19),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 19),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_alternative, 3, .production_id = 35),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_alternative, 3, .production_id = 35),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 6),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, .production_id = 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30), SHIFT_REPEAT(263),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 20),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 20),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 8, .production_id = 32),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 8, .production_id = 32),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34), SHIFT_REPEAT(59),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 6, .production_id = 15),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 6, .production_id = 15),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 26),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 26),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 25),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 25),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 4, .production_id = 18),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 4, .production_id = 18),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 21),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 21),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 29),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 29),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(417),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(415),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(407),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(401),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(221),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(387),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(80),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(163),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(76),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(395),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(79),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_application_pattern, 2, .production_id = 10),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_application_pattern, 2, .production_id = 10),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14),
  [764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14), SHIFT_REPEAT(82),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34), SHIFT_REPEAT(61),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34), SHIFT_REPEAT(66),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(260),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 7),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 16),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 16), SHIFT_REPEAT(444),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 17),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_name, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1009] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
