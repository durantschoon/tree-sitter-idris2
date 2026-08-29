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
#define STATE_COUNT 506
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 39

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
  sym__case_impossible = 23,
  sym__case_bar = 24,
  aux_sym__pattern_constructor_token1 = 25,
  sym_operator = 26,
  aux_sym__infix_operator_token1 = 27,
  anon_sym__ = 28,
  anon_sym_QMARK = 29,
  sym_doc_comment = 30,
  sym_line_comment = 31,
  sym_block_comment = 32,
  sym__integerDecimal = 33,
  sym__integerHexadecimal = 34,
  sym__integerOctal = 35,
  sym__integerBinary = 36,
  sym_double = 37,
  anon_sym_SQUOTE = 38,
  anon_sym_NUL = 39,
  anon_sym_SOH = 40,
  anon_sym_STX = 41,
  anon_sym_ETX = 42,
  anon_sym_EOT = 43,
  anon_sym_ENQ = 44,
  anon_sym_ACK = 45,
  anon_sym_BEL = 46,
  anon_sym_BS = 47,
  anon_sym_HT = 48,
  anon_sym_LF = 49,
  anon_sym_VT = 50,
  anon_sym_FF = 51,
  anon_sym_CR = 52,
  anon_sym_SO = 53,
  anon_sym_SI = 54,
  anon_sym_DLE = 55,
  anon_sym_DC1 = 56,
  anon_sym_DC2 = 57,
  anon_sym_DC3 = 58,
  anon_sym_DC4 = 59,
  anon_sym_NAK = 60,
  anon_sym_SYN = 61,
  anon_sym_ETB = 62,
  anon_sym_CAN = 63,
  anon_sym_EM = 64,
  anon_sym_SUB = 65,
  anon_sym_ESC = 66,
  anon_sym_FS = 67,
  anon_sym_GS = 68,
  anon_sym_RS = 69,
  anon_sym_US = 70,
  anon_sym_SP = 71,
  anon_sym_DEL = 72,
  aux_sym_char_token1 = 73,
  aux_sym_char_token2 = 74,
  aux_sym_char_token3 = 75,
  aux_sym_char_token4 = 76,
  aux_sym_char_token5 = 77,
  anon_sym_DQUOTE = 78,
  anon_sym_BSLASH_LBRACE = 79,
  aux_sym_string_token1 = 80,
  anon_sym_BSLASH_BSLASH = 81,
  aux_sym_string_token2 = 82,
  aux_sym_string_token3 = 83,
  sym_module = 84,
  sym_declaration = 85,
  sym_data_declaration = 86,
  sym_constructor_declaration = 87,
  sym_module_declaration = 88,
  sym_import_declaration = 89,
  sym_type_signature = 90,
  sym_function_definition = 91,
  sym_module_name = 92,
  sym_type = 93,
  sym__type_atom = 94,
  sym_explicit_binder = 95,
  sym_implicit_binder = 96,
  sym_expression = 97,
  sym_lambda_expression = 98,
  sym_application = 99,
  sym_infix_expression = 100,
  sym__expression_term = 101,
  sym__expression_atom = 102,
  sym_parenthesized_expression = 103,
  sym_case_expression = 104,
  sym_case_alternative = 105,
  sym__incomplete_case_expression = 106,
  sym__incomplete_case_alternative = 107,
  sym_impossible_case_alternative = 108,
  sym__incomplete_impossible_case_alternative = 109,
  sym__case_body_expression = 110,
  sym__case_infix_expression = 111,
  sym__case_infix_operator = 112,
  sym_pattern = 113,
  sym_constructor_pattern = 114,
  sym_parenthesized_pattern = 115,
  sym_constructor_application_pattern = 116,
  sym__pattern_constructor = 117,
  sym_qualified_name = 118,
  sym_constructor_name = 119,
  sym_operator_name = 120,
  sym__infix_operator = 121,
  sym_hole = 122,
  sym_integer = 123,
  sym__number = 124,
  sym_char = 125,
  sym_string = 126,
  sym__text = 127,
  aux_sym_module_repeat1 = 128,
  aux_sym_data_declaration_repeat1 = 129,
  aux_sym_data_declaration_repeat2 = 130,
  aux_sym_function_definition_repeat1 = 131,
  aux_sym_module_name_repeat1 = 132,
  aux_sym_type_repeat1 = 133,
  aux_sym_explicit_binder_repeat1 = 134,
  aux_sym_lambda_expression_repeat1 = 135,
  aux_sym_application_repeat1 = 136,
  aux_sym_case_expression_repeat1 = 137,
  aux_sym_constructor_application_pattern_repeat1 = 138,
  aux_sym_string_repeat1 = 139,
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
  [sym__case_impossible] = "_case_impossible",
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
  [sym_impossible_case_alternative] = "impossible_case_alternative",
  [sym__incomplete_impossible_case_alternative] = "_incomplete_impossible_case_alternative",
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
  [sym__case_impossible] = sym__case_impossible,
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
  [sym_impossible_case_alternative] = sym_impossible_case_alternative,
  [sym__incomplete_impossible_case_alternative] = sym__incomplete_impossible_case_alternative,
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
  [sym__case_impossible] = {
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
  [sym_impossible_case_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym__incomplete_impossible_case_alternative] = {
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
  [21] = {.index = 41, .length = 3},
  [22] = {.index = 44, .length = 4},
  [23] = {.index = 48, .length = 1},
  [24] = {.index = 49, .length = 2},
  [25] = {.index = 51, .length = 2},
  [26] = {.index = 53, .length = 4},
  [27] = {.index = 57, .length = 3},
  [28] = {.index = 60, .length = 3},
  [29] = {.index = 63, .length = 1},
  [30] = {.index = 64, .length = 1},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 3},
  [33] = {.index = 70, .length = 5},
  [34] = {.index = 75, .length = 1},
  [35] = {.index = 76, .length = 2},
  [36] = {.index = 78, .length = 5},
  [37] = {.index = 83, .length = 3},
  [38] = {.index = 86, .length = 6},
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
    {field_alternative, 3},
    {field_pattern, 3, .inherited = true},
    {field_scrutinee, 1},
  [44] =
    {field_constructor, 5},
    {field_constructor, 6, .inherited = true},
    {field_name, 1},
    {field_type, 3},
  [48] =
    {field_name, 0},
  [49] =
    {field_name, 1},
    {field_type, 3},
  [51] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [53] =
    {field_constructor, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
  [57] =
    {field_body, 4},
    {field_parameter, 1},
    {field_parameter, 2, .inherited = true},
  [60] =
    {field_alternative, 3},
    {field_alternative, 4, .inherited = true},
    {field_scrutinee, 1},
  [63] =
    {field_pattern, 0},
  [64] =
    {field_constructor, 1},
  [65] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [67] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
    {field_type, 4},
  [70] =
    {field_constructor, 6},
    {field_constructor, 7, .inherited = true},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 4},
  [75] =
    {field_alternative, 1},
  [76] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [78] =
    {field_body, 2},
    {field_left, 2, .inherited = true},
    {field_operator, 2, .inherited = true},
    {field_pattern, 0},
    {field_right, 2, .inherited = true},
  [83] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [86] =
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
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'F') ADVANCE(166);
      if (lookahead == 'G') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(179);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(85)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(138);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == 'B') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'F') ADVANCE(288);
      if (lookahead == 'G') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(295);
      if (lookahead == 'L') ADVANCE(289);
      if (lookahead == 'N') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == 'S') ADVANCE(290);
      if (lookahead == 'U') ADVANCE(294);
      if (lookahead == 'V') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'x') ADVANCE(299);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'F') ADVANCE(166);
      if (lookahead == 'G') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(179);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(138);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'F') ADVANCE(166);
      if (lookahead == 'G') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(179);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(327);
      if (lookahead == '{') ADVANCE(323);
      if (lookahead == '|') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(138);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(300);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '|') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(77);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '1') ADVANCE(242);
      if (lookahead == '2') ADVANCE(244);
      if (lookahead == '3') ADVANCE(246);
      if (lookahead == '4') ADVANCE(248);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(254);
      if (lookahead == 'X') ADVANCE(214);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(260);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(262);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 54:
      if (lookahead == 'K') ADVANCE(220);
      END_STATE();
    case 55:
      if (lookahead == 'K') ADVANCE(250);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(274);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(256);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(252);
      END_STATE();
    case 61:
      if (lookahead == 'Q') ADVANCE(218);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 63:
      if (lookahead == 'X') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '|') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == '|') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '}') ADVANCE(154);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == '}') ADVANCE(144);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(204);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(203);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 85:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'F') ADVANCE(166);
      if (lookahead == 'G') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(179);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(138);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 86:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(136);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 87:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 88:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 89:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(90)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 90:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 91:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(92)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 92:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 93:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 94:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 95:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 96:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 97:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 98:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 99:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(137);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(74);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__equals);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__equals);
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_application_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__case_infix_operator_token1);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__case_infix_operator_token1);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ',') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__case_infix_operator_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__case_of);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__case_arrow);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__case_impossible);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__case_bar);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__pattern_constructor_token1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '>') ADVANCE(109);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(152);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(116);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '-') ADVANCE(142);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__infix_operator_token1);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_doc_comment);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '"') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(317);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_doc_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(317);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead == '2') ADVANCE(245);
      if (lookahead == '3') ADVANCE(247);
      if (lookahead == '4') ADVANCE(249);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(235);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(255);
      if (lookahead == 'X') ADVANCE(215);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(261);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(169);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(263);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'S') ADVANCE(225);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == 'S') ADVANCE(265);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(229);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == 'P') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(184);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == 'Y') ADVANCE(176);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(251);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(275);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(259);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(257);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(253);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(219);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(267);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(271);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(227);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(231);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(217);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(213);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(196);
      if (lookahead == '\'' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(196);
      if (lookahead == '\'' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (lookahead == '\'' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__integerDecimal);
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__integerHexadecimal);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__integerOctal);
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__integerBinary);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H') ADVANCE(210);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == 'B') ADVANCE(287);
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'F') ADVANCE(288);
      if (lookahead == 'G') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(295);
      if (lookahead == 'L') ADVANCE(289);
      if (lookahead == 'N') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == 'S') ADVANCE(290);
      if (lookahead == 'U') ADVANCE(294);
      if (lookahead == 'V') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'x') ADVANCE(299);
      if (lookahead == '{') ADVANCE(280);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(234);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(54);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(224);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(232);
      if (lookahead == 'S') ADVANCE(264);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'F') ADVANCE(228);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'I') ADVANCE(238);
      if (lookahead == 'O') ADVANCE(237);
      if (lookahead == 'P') ADVANCE(272);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == 'U') ADVANCE(51);
      if (lookahead == 'Y') ADVANCE(60);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'M') ADVANCE(258);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(266);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(268);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'S') ADVANCE(270);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == 'T') ADVANCE(230);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '|') ADVANCE(74);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(276);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_char_token5);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '-') ADVANCE(302);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(300);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '|') ADVANCE(74);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '|') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '|') ADVANCE(312);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '|') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(327);
      if (lookahead == '{') ADVANCE(323);
      if (lookahead == '|') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '|') ADVANCE(326);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(46);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(318);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(320);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '|') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(46);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(332);
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
  [1] = {.lex_state = 86},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 86},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 86},
  [16] = {.lex_state = 86},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 86},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 86},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 86},
  [28] = {.lex_state = 86},
  [29] = {.lex_state = 86},
  [30] = {.lex_state = 86},
  [31] = {.lex_state = 86},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 86},
  [34] = {.lex_state = 86},
  [35] = {.lex_state = 86},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 86},
  [38] = {.lex_state = 86},
  [39] = {.lex_state = 86},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 86},
  [42] = {.lex_state = 86},
  [43] = {.lex_state = 86},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 86},
  [47] = {.lex_state = 86},
  [48] = {.lex_state = 86},
  [49] = {.lex_state = 86},
  [50] = {.lex_state = 86},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 86},
  [53] = {.lex_state = 86},
  [54] = {.lex_state = 86},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 89},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 89},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 86},
  [72] = {.lex_state = 86},
  [73] = {.lex_state = 86},
  [74] = {.lex_state = 86},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 91},
  [78] = {.lex_state = 86},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 86},
  [81] = {.lex_state = 86},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 86},
  [84] = {.lex_state = 91},
  [85] = {.lex_state = 91},
  [86] = {.lex_state = 86},
  [87] = {.lex_state = 86},
  [88] = {.lex_state = 86},
  [89] = {.lex_state = 86},
  [90] = {.lex_state = 86},
  [91] = {.lex_state = 86},
  [92] = {.lex_state = 86},
  [93] = {.lex_state = 86},
  [94] = {.lex_state = 91},
  [95] = {.lex_state = 91},
  [96] = {.lex_state = 91},
  [97] = {.lex_state = 93},
  [98] = {.lex_state = 93},
  [99] = {.lex_state = 93},
  [100] = {.lex_state = 93},
  [101] = {.lex_state = 93},
  [102] = {.lex_state = 93},
  [103] = {.lex_state = 93},
  [104] = {.lex_state = 93},
  [105] = {.lex_state = 86},
  [106] = {.lex_state = 86},
  [107] = {.lex_state = 91},
  [108] = {.lex_state = 91},
  [109] = {.lex_state = 91},
  [110] = {.lex_state = 91},
  [111] = {.lex_state = 91},
  [112] = {.lex_state = 91},
  [113] = {.lex_state = 91},
  [114] = {.lex_state = 91},
  [115] = {.lex_state = 91},
  [116] = {.lex_state = 91},
  [117] = {.lex_state = 91},
  [118] = {.lex_state = 91},
  [119] = {.lex_state = 94},
  [120] = {.lex_state = 94},
  [121] = {.lex_state = 86},
  [122] = {.lex_state = 86},
  [123] = {.lex_state = 86},
  [124] = {.lex_state = 95},
  [125] = {.lex_state = 95},
  [126] = {.lex_state = 86},
  [127] = {.lex_state = 95},
  [128] = {.lex_state = 91},
  [129] = {.lex_state = 94},
  [130] = {.lex_state = 94},
  [131] = {.lex_state = 96},
  [132] = {.lex_state = 95},
  [133] = {.lex_state = 96},
  [134] = {.lex_state = 91},
  [135] = {.lex_state = 95},
  [136] = {.lex_state = 86},
  [137] = {.lex_state = 95},
  [138] = {.lex_state = 95},
  [139] = {.lex_state = 94},
  [140] = {.lex_state = 94},
  [141] = {.lex_state = 95},
  [142] = {.lex_state = 94},
  [143] = {.lex_state = 94},
  [144] = {.lex_state = 86},
  [145] = {.lex_state = 86},
  [146] = {.lex_state = 94},
  [147] = {.lex_state = 94},
  [148] = {.lex_state = 96},
  [149] = {.lex_state = 94},
  [150] = {.lex_state = 94},
  [151] = {.lex_state = 96},
  [152] = {.lex_state = 94},
  [153] = {.lex_state = 94},
  [154] = {.lex_state = 94},
  [155] = {.lex_state = 98},
  [156] = {.lex_state = 96},
  [157] = {.lex_state = 94},
  [158] = {.lex_state = 98},
  [159] = {.lex_state = 96},
  [160] = {.lex_state = 95},
  [161] = {.lex_state = 96},
  [162] = {.lex_state = 95},
  [163] = {.lex_state = 95},
  [164] = {.lex_state = 86},
  [165] = {.lex_state = 95},
  [166] = {.lex_state = 86},
  [167] = {.lex_state = 99},
  [168] = {.lex_state = 94},
  [169] = {.lex_state = 96},
  [170] = {.lex_state = 94},
  [171] = {.lex_state = 95},
  [172] = {.lex_state = 95},
  [173] = {.lex_state = 95},
  [174] = {.lex_state = 95},
  [175] = {.lex_state = 94},
  [176] = {.lex_state = 95},
  [177] = {.lex_state = 96},
  [178] = {.lex_state = 91},
  [179] = {.lex_state = 96},
  [180] = {.lex_state = 96},
  [181] = {.lex_state = 96},
  [182] = {.lex_state = 98},
  [183] = {.lex_state = 98},
  [184] = {.lex_state = 96},
  [185] = {.lex_state = 96},
  [186] = {.lex_state = 91},
  [187] = {.lex_state = 99},
  [188] = {.lex_state = 100},
  [189] = {.lex_state = 96},
  [190] = {.lex_state = 96},
  [191] = {.lex_state = 96},
  [192] = {.lex_state = 91},
  [193] = {.lex_state = 87},
  [194] = {.lex_state = 91},
  [195] = {.lex_state = 87},
  [196] = {.lex_state = 87},
  [197] = {.lex_state = 86},
  [198] = {.lex_state = 91},
  [199] = {.lex_state = 100},
  [200] = {.lex_state = 87},
  [201] = {.lex_state = 87},
  [202] = {.lex_state = 91},
  [203] = {.lex_state = 87},
  [204] = {.lex_state = 87},
  [205] = {.lex_state = 86},
  [206] = {.lex_state = 91},
  [207] = {.lex_state = 87},
  [208] = {.lex_state = 91},
  [209] = {.lex_state = 87},
  [210] = {.lex_state = 87},
  [211] = {.lex_state = 91},
  [212] = {.lex_state = 87},
  [213] = {.lex_state = 87},
  [214] = {.lex_state = 87},
  [215] = {.lex_state = 87},
  [216] = {.lex_state = 87},
  [217] = {.lex_state = 87},
  [218] = {.lex_state = 87},
  [219] = {.lex_state = 87},
  [220] = {.lex_state = 91},
  [221] = {.lex_state = 87},
  [222] = {.lex_state = 91},
  [223] = {.lex_state = 91},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 86},
  [227] = {.lex_state = 30},
  [228] = {.lex_state = 86},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 30},
  [232] = {.lex_state = 30},
  [233] = {.lex_state = 86},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 31},
  [244] = {.lex_state = 31},
  [245] = {.lex_state = 31},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 86},
  [253] = {.lex_state = 86},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 86},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 31},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 86},
  [262] = {.lex_state = 32},
  [263] = {.lex_state = 91},
  [264] = {.lex_state = 91},
  [265] = {.lex_state = 32},
  [266] = {.lex_state = 91},
  [267] = {.lex_state = 86},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 31},
  [270] = {.lex_state = 31},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 86},
  [273] = {.lex_state = 86},
  [274] = {.lex_state = 86},
  [275] = {.lex_state = 30},
  [276] = {.lex_state = 32},
  [277] = {.lex_state = 31},
  [278] = {.lex_state = 86},
  [279] = {.lex_state = 31},
  [280] = {.lex_state = 30},
  [281] = {.lex_state = 86},
  [282] = {.lex_state = 30},
  [283] = {.lex_state = 86},
  [284] = {.lex_state = 86},
  [285] = {.lex_state = 31},
  [286] = {.lex_state = 86},
  [287] = {.lex_state = 31},
  [288] = {.lex_state = 30},
  [289] = {.lex_state = 30},
  [290] = {.lex_state = 31},
  [291] = {.lex_state = 35},
  [292] = {.lex_state = 32},
  [293] = {.lex_state = 32},
  [294] = {.lex_state = 32},
  [295] = {.lex_state = 37},
  [296] = {.lex_state = 35},
  [297] = {.lex_state = 35},
  [298] = {.lex_state = 30},
  [299] = {.lex_state = 30},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 30},
  [302] = {.lex_state = 32},
  [303] = {.lex_state = 30},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 32},
  [306] = {.lex_state = 31},
  [307] = {.lex_state = 31},
  [308] = {.lex_state = 31},
  [309] = {.lex_state = 38},
  [310] = {.lex_state = 31},
  [311] = {.lex_state = 38},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 31},
  [315] = {.lex_state = 31},
  [316] = {.lex_state = 31},
  [317] = {.lex_state = 31},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 39},
  [320] = {.lex_state = 35},
  [321] = {.lex_state = 35},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 35},
  [324] = {.lex_state = 35},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 35},
  [327] = {.lex_state = 35},
  [328] = {.lex_state = 12},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 38},
  [332] = {.lex_state = 22},
  [333] = {.lex_state = 38},
  [334] = {.lex_state = 12},
  [335] = {.lex_state = 35},
  [336] = {.lex_state = 10},
  [337] = {.lex_state = 22},
  [338] = {.lex_state = 12},
  [339] = {.lex_state = 32},
  [340] = {.lex_state = 10},
  [341] = {.lex_state = 32},
  [342] = {.lex_state = 35},
  [343] = {.lex_state = 37},
  [344] = {.lex_state = 87},
  [345] = {.lex_state = 10},
  [346] = {.lex_state = 32},
  [347] = {.lex_state = 32},
  [348] = {.lex_state = 87},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 32},
  [352] = {.lex_state = 10},
  [353] = {.lex_state = 32},
  [354] = {.lex_state = 10},
  [355] = {.lex_state = 35},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 10},
  [358] = {.lex_state = 10},
  [359] = {.lex_state = 12},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 32},
  [362] = {.lex_state = 12},
  [363] = {.lex_state = 87},
  [364] = {.lex_state = 87},
  [365] = {.lex_state = 32},
  [366] = {.lex_state = 10},
  [367] = {.lex_state = 32},
  [368] = {.lex_state = 87},
  [369] = {.lex_state = 10},
  [370] = {.lex_state = 44},
  [371] = {.lex_state = 10},
  [372] = {.lex_state = 22},
  [373] = {.lex_state = 39},
  [374] = {.lex_state = 36},
  [375] = {.lex_state = 36},
  [376] = {.lex_state = 22},
  [377] = {.lex_state = 22},
  [378] = {.lex_state = 12},
  [379] = {.lex_state = 22},
  [380] = {.lex_state = 22},
  [381] = {.lex_state = 22},
  [382] = {.lex_state = 22},
  [383] = {.lex_state = 36},
  [384] = {.lex_state = 86},
  [385] = {.lex_state = 86},
  [386] = {.lex_state = 22},
  [387] = {.lex_state = 12},
  [388] = {.lex_state = 36},
  [389] = {.lex_state = 22},
  [390] = {.lex_state = 36},
  [391] = {.lex_state = 36},
  [392] = {.lex_state = 36},
  [393] = {.lex_state = 44},
  [394] = {.lex_state = 22},
  [395] = {.lex_state = 36},
  [396] = {.lex_state = 22},
  [397] = {.lex_state = 22},
  [398] = {.lex_state = 44},
  [399] = {.lex_state = 44},
  [400] = {.lex_state = 44},
  [401] = {.lex_state = 22},
  [402] = {.lex_state = 36},
  [403] = {.lex_state = 44},
  [404] = {.lex_state = 36},
  [405] = {.lex_state = 36},
  [406] = {.lex_state = 44},
  [407] = {.lex_state = 22},
  [408] = {.lex_state = 36},
  [409] = {.lex_state = 44},
  [410] = {.lex_state = 36},
  [411] = {.lex_state = 36},
  [412] = {.lex_state = 44},
  [413] = {.lex_state = 12},
  [414] = {.lex_state = 36},
  [415] = {.lex_state = 12},
  [416] = {.lex_state = 22},
  [417] = {.lex_state = 12},
  [418] = {.lex_state = 44},
  [419] = {.lex_state = 12},
  [420] = {.lex_state = 12},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 12},
  [423] = {.lex_state = 12},
  [424] = {.lex_state = 12},
  [425] = {.lex_state = 22},
  [426] = {.lex_state = 12},
  [427] = {.lex_state = 12},
  [428] = {.lex_state = 12},
  [429] = {.lex_state = 12},
  [430] = {.lex_state = 86},
  [431] = {.lex_state = 86},
  [432] = {.lex_state = 86},
  [433] = {.lex_state = 86},
  [434] = {.lex_state = 86},
  [435] = {.lex_state = 86},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 86},
  [438] = {.lex_state = 86},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 86},
  [441] = {.lex_state = 86},
  [442] = {.lex_state = 86},
  [443] = {.lex_state = 86},
  [444] = {.lex_state = 86},
  [445] = {.lex_state = 86},
  [446] = {.lex_state = 86},
  [447] = {.lex_state = 86},
  [448] = {.lex_state = 86},
  [449] = {.lex_state = 36},
  [450] = {.lex_state = 86},
  [451] = {.lex_state = 36},
  [452] = {.lex_state = 86},
  [453] = {.lex_state = 86},
  [454] = {.lex_state = 86},
  [455] = {.lex_state = 86},
  [456] = {.lex_state = 86},
  [457] = {.lex_state = 86},
  [458] = {.lex_state = 36},
  [459] = {.lex_state = 86},
  [460] = {.lex_state = 86},
  [461] = {.lex_state = 86},
  [462] = {.lex_state = 86},
  [463] = {.lex_state = 86},
  [464] = {.lex_state = 86},
  [465] = {.lex_state = 36},
  [466] = {.lex_state = 86},
  [467] = {.lex_state = 86},
  [468] = {.lex_state = 86},
  [469] = {.lex_state = 86},
  [470] = {.lex_state = 86},
  [471] = {.lex_state = 86},
  [472] = {.lex_state = 86},
  [473] = {.lex_state = 86},
  [474] = {.lex_state = 86},
  [475] = {.lex_state = 45},
  [476] = {.lex_state = 86},
  [477] = {.lex_state = 86},
  [478] = {.lex_state = 86},
  [479] = {.lex_state = 86},
  [480] = {.lex_state = 86},
  [481] = {.lex_state = 36},
  [482] = {.lex_state = 36},
  [483] = {.lex_state = 36},
  [484] = {.lex_state = 86},
  [485] = {.lex_state = 36},
  [486] = {.lex_state = 36},
  [487] = {.lex_state = 86},
  [488] = {.lex_state = 86},
  [489] = {.lex_state = 86},
  [490] = {.lex_state = 86},
  [491] = {.lex_state = 86},
  [492] = {.lex_state = 86},
  [493] = {.lex_state = 86},
  [494] = {.lex_state = 86},
  [495] = {.lex_state = 86},
  [496] = {.lex_state = 22},
  [497] = {.lex_state = 29},
  [498] = {.lex_state = 86},
  [499] = {.lex_state = 86},
  [500] = {.lex_state = 86},
  [501] = {.lex_state = 86},
  [502] = {.lex_state = 86},
  [503] = {.lex_state = 86},
  [504] = {.lex_state = 86},
  [505] = {.lex_state = 86},
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
    [sym__case_impossible] = ACTIONS(1),
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
    [sym_module] = STATE(493),
    [sym_declaration] = STATE(106),
    [sym_data_declaration] = STATE(233),
    [sym_module_declaration] = STATE(233),
    [sym_import_declaration] = STATE(233),
    [sym_type_signature] = STATE(233),
    [sym_function_definition] = STATE(233),
    [sym_operator_name] = STATE(77),
    [aux_sym_module_repeat1] = STATE(106),
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
  [368] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 38,
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
  [414] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 38,
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
  [460] = 21,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 1,
      sym__case,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      sym__integerDecimal,
    ACTIONS(59), 1,
      sym_double,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_application,
    STATE(158), 1,
      sym__case_infix_expression,
    STATE(215), 1,
      sym__case_body_expression,
    STATE(381), 1,
      sym_operator_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    STATE(216), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(43), 3,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
    ACTIONS(57), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(120), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [539] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(73), 1,
      sym_operator,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(472), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [614] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(73), 1,
      sym_operator,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(454), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [689] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(73), 1,
      sym_operator,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(468), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [764] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(73), 1,
      sym_operator,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(466), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [839] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(73), 1,
      sym_operator,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(500), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [914] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(73), 1,
      sym_operator,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(479), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [989] = 20,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      sym__integerDecimal,
    ACTIONS(59), 1,
      sym_double,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    STATE(155), 1,
      sym_application,
    STATE(158), 1,
      sym__case_infix_expression,
    STATE(215), 1,
      sym__case_body_expression,
    STATE(381), 1,
      sym_operator_name,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_RPAREN,
      sym__case_bar,
    STATE(216), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(57), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(120), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1063] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym__case,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      sym__integerDecimal,
    ACTIONS(107), 1,
      sym_double,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_expression,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(407), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(105), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(132), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1135] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(468), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1207] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(483), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1279] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(479), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1351] = 16,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    STATE(219), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__case_bar,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(402), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    ACTIONS(137), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1417] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(212), 1,
      sym_expression,
    STATE(396), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1489] = 16,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    STATE(219), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__case_bar,
    STATE(402), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    ACTIONS(157), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1555] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(482), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1627] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_expression,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1699] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(481), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1771] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(427), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1843] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(458), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1915] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      sym__case,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(212), 1,
      sym_expression,
    STATE(396), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [1987] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      sym__integerDecimal,
    ACTIONS(107), 1,
      sym_double,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym__case,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(212), 1,
      sym_expression,
    STATE(407), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(105), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(132), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2059] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(423), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2131] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(472), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2203] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      sym__case,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(226), 1,
      sym_expression,
    STATE(396), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2275] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(454), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2347] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(451), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2419] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(465), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2491] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(500), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2563] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      sym__case,
    ACTIONS(173), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_QMARK,
    ACTIONS(177), 1,
      sym__integerDecimal,
    ACTIONS(181), 1,
      sym_double,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(416), 1,
      sym_operator_name,
    STATE(427), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(179), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(295), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(271), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2635] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym__case,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      sym__integerDecimal,
    ACTIONS(107), 1,
      sym_double,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(212), 1,
      sym_expression,
    STATE(407), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(105), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(132), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2707] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym__case,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    STATE(466), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2779] = 20,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym__case,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(197), 1,
      sym__integerDecimal,
    ACTIONS(201), 1,
      sym_double,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(309), 1,
      sym__case_infix_expression,
    STATE(311), 1,
      sym_application,
    STATE(394), 1,
      sym_operator_name,
    STATE(417), 1,
      sym__case_body_expression,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      sym__case_of,
      sym__case_bar,
    STATE(419), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(199), 3,
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
  [2853] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      sym__case,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(228), 1,
      sym_expression,
    STATE(396), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2925] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(449), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [2997] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(485), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3069] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      sym__case,
    STATE(200), 1,
      sym_expression,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(396), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(188), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3141] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      sym__case,
    ACTIONS(173), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_QMARK,
    ACTIONS(177), 1,
      sym__integerDecimal,
    ACTIONS(181), 1,
      sym_double,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(416), 1,
      sym_operator_name,
    STATE(423), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(179), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(295), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(271), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3213] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_BSLASH,
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
    STATE(378), 1,
      sym__incomplete_case_expression,
    STATE(401), 1,
      sym_operator_name,
    STATE(486), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(387), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(319), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3285] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      sym__integerDecimal,
    ACTIONS(107), 1,
      sym_double,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym__case,
    STATE(200), 1,
      sym_expression,
    STATE(210), 1,
      sym__incomplete_case_expression,
    STATE(407), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(105), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(167), 3,
      sym_application,
      sym_infix_expression,
      sym__expression_term,
    STATE(132), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3357] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 1,
      sym__case,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      sym__integerDecimal,
    ACTIONS(59), 1,
      sym_double,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_application,
    STATE(158), 1,
      sym__case_infix_expression,
    STATE(209), 1,
      sym__case_body_expression,
    STATE(381), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(216), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(57), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(120), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3427] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      sym__integerDecimal,
    ACTIONS(59), 1,
      sym_double,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      sym__case,
    STATE(155), 1,
      sym_application,
    STATE(158), 1,
      sym__case_infix_expression,
    STATE(209), 1,
      sym__case_body_expression,
    STATE(381), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(216), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(57), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(120), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3497] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym__case,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(197), 1,
      sym__integerDecimal,
    ACTIONS(201), 1,
      sym_double,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(309), 1,
      sym__case_infix_expression,
    STATE(311), 1,
      sym_application,
    STATE(394), 1,
      sym_operator_name,
    STATE(413), 1,
      sym__case_body_expression,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(419), 2,
      sym_lambda_expression,
      sym_case_expression,
    ACTIONS(199), 3,
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
  [3567] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__incomplete_case_alternative,
    STATE(204), 1,
      sym__incomplete_impossible_case_alternative,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(348), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(374), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3634] = 17,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      sym__case_of,
      sym__case_bar,
    STATE(420), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(375), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3699] = 17,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(135), 2,
      sym__case_of,
      sym__case_bar,
    STATE(420), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(375), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3764] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__incomplete_case_alternative,
    STATE(204), 1,
      sym__incomplete_impossible_case_alternative,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(363), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(374), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3831] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    STATE(428), 1,
      sym__incomplete_impossible_case_alternative,
    STATE(429), 1,
      sym__incomplete_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(359), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(390), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3898] = 17,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_RPAREN,
      sym__case_bar,
    STATE(219), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(388), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [3963] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__incomplete_case_alternative,
    STATE(204), 1,
      sym__incomplete_impossible_case_alternative,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(201), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(414), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4030] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    STATE(428), 1,
      sym__incomplete_impossible_case_alternative,
    STATE(429), 1,
      sym__incomplete_case_alternative,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(338), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(390), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4097] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__incomplete_case_alternative,
    STATE(204), 1,
      sym__incomplete_impossible_case_alternative,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(207), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(414), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4164] = 17,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_RPAREN,
      sym__case_bar,
    STATE(219), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(388), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4229] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(359), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(375), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4290] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(348), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(388), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4351] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(207), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(402), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4412] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(219), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(388), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4473] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(219), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(402), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4534] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(141), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_QMARK,
    ACTIONS(145), 1,
      sym__integerDecimal,
    ACTIONS(149), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(420), 2,
      sym_case_alternative,
      sym_impossible_case_alternative,
    ACTIONS(147), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(375), 3,
      sym_pattern,
      sym_constructor_pattern,
      sym_constructor_application_pattern,
    STATE(392), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4595] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
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
    STATE(401), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(373), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(292), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4650] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_QMARK,
    ACTIONS(177), 1,
      sym__integerDecimal,
    ACTIONS(181), 1,
      sym_double,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(416), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(343), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(179), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(271), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4705] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(83), 1,
      sym_double,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(396), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(199), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(156), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4760] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      sym__integerDecimal,
    ACTIONS(107), 1,
      sym_double,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(407), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(187), 2,
      sym_application,
      sym__expression_term,
    ACTIONS(105), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(132), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4815] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      sym__integerDecimal,
    ACTIONS(225), 1,
      sym_double,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(397), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(502), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(223), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(116), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4871] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      sym__integerDecimal,
    ACTIONS(225), 1,
      sym_double,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(397), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(490), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(223), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(116), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4927] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      sym__integerDecimal,
    ACTIONS(225), 1,
      sym_double,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      sym__equals,
    STATE(84), 1,
      aux_sym_function_definition_repeat1,
    STATE(118), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(223), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(116), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [4985] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(197), 1,
      sym__integerDecimal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      sym_double,
    STATE(333), 1,
      sym_application,
    STATE(394), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(199), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(287), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5039] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      sym__integerDecimal,
    ACTIONS(225), 1,
      sym_double,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(397), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(478), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(223), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(116), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5095] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(197), 1,
      sym__integerDecimal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym_double,
    STATE(331), 1,
      sym_application,
    STATE(394), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(199), 3,
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
  [5149] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      sym__integerDecimal,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym_double,
    STATE(182), 1,
      sym_application,
    STATE(381), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(57), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(139), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5203] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym__pattern_constructor_token1,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      sym__integerDecimal,
    ACTIONS(225), 1,
      sym_double,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(397), 1,
      sym__pattern_constructor,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(480), 2,
      sym_pattern,
      sym_constructor_application_pattern,
    ACTIONS(223), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(116), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5259] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      sym__integerDecimal,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym_double,
    STATE(183), 1,
      sym_application,
    STATE(381), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(57), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(140), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5313] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(221), 1,
      sym__integerDecimal,
    ACTIONS(225), 1,
      sym_double,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym__equals,
    STATE(85), 1,
      aux_sym_function_definition_repeat1,
    STATE(118), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(223), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(116), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5368] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(248), 1,
      sym__equals,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym__,
    ACTIONS(256), 1,
      anon_sym_QMARK,
    ACTIONS(259), 1,
      sym__integerDecimal,
    ACTIONS(265), 1,
      sym_double,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      aux_sym_function_definition_repeat1,
    STATE(118), 1,
      sym_pattern,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(262), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(116), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5423] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_QMARK,
    ACTIONS(79), 1,
      sym__integerDecimal,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(81), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(191), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5471] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      sym__integerDecimal,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(57), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(154), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5519] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym__,
    ACTIONS(195), 1,
      anon_sym_QMARK,
    ACTIONS(197), 1,
      sym__integerDecimal,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(199), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(308), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5567] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(101), 1,
      anon_sym_QMARK,
    ACTIONS(103), 1,
      sym__integerDecimal,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(105), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(173), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5615] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(113), 1,
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
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(127), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(361), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5663] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_QMARK,
    ACTIONS(177), 1,
      sym__integerDecimal,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_double,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(179), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(313), 9,
      sym__expression_atom,
      sym_parenthesized_expression,
      sym_qualified_name,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5711] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym__,
    ACTIONS(304), 1,
      anon_sym_QMARK,
    ACTIONS(306), 1,
      sym__integerDecimal,
    ACTIONS(310), 1,
      sym_double,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(308), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(355), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5757] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      sym_identifier,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym__,
    ACTIONS(322), 1,
      anon_sym_QMARK,
    ACTIONS(324), 1,
      sym__integerDecimal,
    ACTIONS(328), 1,
      sym_double,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(326), 3,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
    STATE(425), 7,
      sym_parenthesized_pattern,
      sym_hole,
      sym_integer,
      sym__number,
      sym_char,
      sym_string,
      sym__text,
  [5803] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(334), 4,
      anon_sym_where,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(336), 12,
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
  [5831] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(338), 4,
      anon_sym_where,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(340), 12,
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
  [5859] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym__,
    ACTIONS(354), 1,
      anon_sym_QMARK,
    STATE(222), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(346), 4,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
    STATE(192), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [5901] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(358), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5928] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(362), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5955] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(366), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [5982] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(370), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [6009] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(374), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [6036] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(378), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(376), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [6063] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(382), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [6090] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(386), 7,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LBRACE,
      sym_identifier,
    ACTIONS(384), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [6117] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_data,
    ACTIONS(396), 1,
      anon_sym_module,
    ACTIONS(399), 1,
      anon_sym_import,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(105), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(233), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [6157] = 11,
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
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(105), 2,
      sym_declaration,
      aux_sym_module_repeat1,
    STATE(233), 5,
      sym_data_declaration,
      sym_module_declaration,
      sym_import_declaration,
      sym_type_signature,
      sym_function_definition,
  [6197] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(407), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(409), 10,
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
  [6222] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(411), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(413), 10,
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
  [6247] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(415), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(417), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6276] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(422), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(424), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6305] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(428), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(430), 10,
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
  [6330] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(432), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(434), 10,
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
  [6355] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(436), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(438), 10,
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
  [6380] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(110), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(440), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(442), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6409] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(444), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(446), 10,
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
  [6434] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(448), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(450), 10,
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
  [6459] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(452), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(454), 10,
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
  [6484] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(456), 3,
      anon_sym__,
      sym_identifier,
      sym__integerDecimal,
    ACTIONS(458), 9,
      sym__equals,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      sym__integerHexadecimal,
      sym__integerOctal,
      sym__integerBinary,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [6508] = 5,
    ACTIONS(460), 1,
      anon_sym_DOT,
    STATE(130), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(424), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6534] = 7,
    ACTIONS(466), 1,
      aux_sym_application_token1,
    ACTIONS(468), 1,
      aux_sym__case_infix_operator_token1,
    STATE(83), 1,
      sym__case_infix_operator,
    STATE(142), 1,
      aux_sym_application_repeat1,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [6564] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(266), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6600] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(446), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(266), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6636] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(266), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6672] = 5,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(125), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(478), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6698] = 5,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(424), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6724] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(266), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [6760] = 5,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6786] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(415), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(417), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6810] = 5,
    ACTIONS(460), 1,
      anon_sym_DOT,
    STATE(119), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(478), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6836] = 5,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(130), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(417), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6862] = 5,
    ACTIONS(490), 1,
      anon_sym_DOT,
    STATE(131), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6887] = 5,
    ACTIONS(497), 1,
      aux_sym_application_token1,
    STATE(137), 1,
      aux_sym_application_repeat1,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6912] = 5,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(131), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(424), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [6937] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(501), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(503), 6,
      anon_sym_data,
      anon_sym_where,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [6960] = 5,
    ACTIONS(497), 1,
      aux_sym_application_token1,
    STATE(138), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(507), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [6985] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(452), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(266), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [7018] = 5,
    ACTIONS(497), 1,
      aux_sym_application_token1,
    STATE(138), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(507), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7043] = 5,
    ACTIONS(513), 1,
      aux_sym_application_token1,
    STATE(138), 1,
      aux_sym_application_repeat1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(511), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7068] = 5,
    ACTIONS(466), 1,
      aux_sym_application_token1,
    STATE(142), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(516), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(518), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7093] = 5,
    ACTIONS(466), 1,
      aux_sym_application_token1,
    STATE(142), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(522), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7118] = 3,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 9,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7139] = 5,
    ACTIONS(466), 1,
      aux_sym_application_token1,
    STATE(146), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(507), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7164] = 5,
    ACTIONS(466), 1,
      aux_sym_application_token1,
    STATE(146), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(507), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7189] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym__,
    ACTIONS(354), 1,
      anon_sym_QMARK,
    STATE(255), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(192), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [7222] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(473), 1,
      sym_type,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(266), 5,
      sym__type_atom,
      sym_explicit_binder,
      sym_implicit_binder,
      sym_qualified_name,
      sym_hole,
  [7255] = 5,
    ACTIONS(524), 1,
      aux_sym_application_token1,
    STATE(146), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(511), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7280] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(417), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7301] = 5,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(478), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7326] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(334), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7346] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(407), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7366] = 5,
    ACTIONS(527), 1,
      aux_sym_application_token1,
    STATE(151), 1,
      aux_sym_application_repeat1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(511), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7390] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(530), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(532), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7410] = 3,
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
  [7430] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(534), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(536), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7450] = 5,
    ACTIONS(468), 1,
      aux_sym__case_infix_operator_token1,
    STATE(83), 1,
      sym__case_infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(464), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7474] = 5,
    ACTIONS(538), 1,
      aux_sym_application_token1,
    STATE(161), 1,
      aux_sym_application_repeat1,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7498] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(444), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7518] = 5,
    ACTIONS(544), 1,
      aux_sym__case_infix_operator_token1,
    STATE(81), 1,
      sym__case_infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(540), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(542), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7542] = 5,
    ACTIONS(538), 1,
      aux_sym_application_token1,
    STATE(151), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(507), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7566] = 3,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(452), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7586] = 5,
    ACTIONS(538), 1,
      aux_sym_application_token1,
    STATE(151), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(507), 6,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [7610] = 3,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(407), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7630] = 3,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(532), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7650] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 1,
      anon_sym__,
    ACTIONS(354), 1,
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
  [7680] = 3,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(432), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7700] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym__,
    ACTIONS(219), 1,
      anon_sym_QMARK,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
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
  [7730] = 5,
    ACTIONS(550), 1,
      aux_sym__infix_operator_token1,
    STATE(74), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(546), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(548), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7754] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(432), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7774] = 3,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7794] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(436), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7814] = 3,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7834] = 3,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(436), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7854] = 3,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(536), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7874] = 3,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 8,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [7894] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 3,
      ts_builtin_sym_end,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
    ACTIONS(452), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7914] = 3,
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
  [7934] = 3,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(436), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [7953] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_DASH_GT,
    STATE(178), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(503), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [7978] = 3,
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
  [7997] = 3,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(452), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [8016] = 3,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(407), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [8035] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(518), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(516), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
  [8054] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(522), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
    ACTIONS(520), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__case_infix_operator_token1,
      sym__case_bar,
  [8073] = 3,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [8092] = 3,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(532), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [8111] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(559), 1,
      anon_sym_DASH_GT,
    STATE(178), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(557), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8136] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(563), 5,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      aux_sym__infix_operator_token1,
      sym_identifier,
  [8155] = 5,
    ACTIONS(565), 1,
      aux_sym__infix_operator_token1,
    STATE(73), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(546), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(548), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8178] = 3,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(432), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [8197] = 3,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
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
      aux_sym_application_token1,
      sym_identifier,
  [8216] = 3,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(536), 7,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_application_token1,
      sym_identifier,
  [8235] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(559), 1,
      anon_sym_DASH_GT,
    STATE(186), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(567), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(569), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8260] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(571), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(573), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8280] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(338), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8300] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(546), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(548), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8320] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(217), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(575), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym__case_bar,
    ACTIONS(577), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8342] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(205), 1,
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
  [8366] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    STATE(206), 1,
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
  [8390] = 3,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__infix_operator_token1,
    ACTIONS(563), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8408] = 4,
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
  [8428] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(597), 1,
      sym__case_bar,
    STATE(213), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(595), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8452] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(336), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
    ACTIONS(334), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8472] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      sym__case_bar,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(599), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(601), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8494] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      sym__case_bar,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(605), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(607), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8516] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(613), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8540] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    STATE(208), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(615), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(617), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8564] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(597), 1,
      sym__case_bar,
    STATE(196), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(595), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8588] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(623), 1,
      anon_sym_PIPE,
    STATE(208), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(619), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(621), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8612] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(626), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(628), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8632] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(630), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(632), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8652] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    STATE(220), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(634), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(636), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8676] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(638), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(640), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8696] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      sym__case_bar,
    STATE(217), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(577), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8720] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(644), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(646), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8740] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(626), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(628), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8760] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(462), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(464), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8780] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(652), 1,
      sym__case_bar,
    STATE(217), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(648), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(650), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8804] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(655), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(657), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8824] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(659), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(661), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8844] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(587), 1,
      anon_sym_PIPE,
    STATE(208), 1,
      aux_sym_data_declaration_repeat2,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(665), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8868] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(644), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__case_bar,
    ACTIONS(646), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8888] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(669), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8907] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(673), 5,
      anon_sym_data,
      anon_sym_PIPE,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8926] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(240), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [8948] = 5,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [8968] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(685), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [8986] = 5,
    ACTIONS(687), 1,
      anon_sym_DOT,
    STATE(232), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(476), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(478), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9006] = 4,
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
  [9024] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9044] = 5,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_BSLASH_LBRACE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(700), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9064] = 5,
    ACTIONS(703), 1,
      anon_sym_DOT,
    STATE(231), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(415), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(417), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9084] = 5,
    ACTIONS(687), 1,
      anon_sym_DOT,
    STATE(231), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(422), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(424), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9104] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(706), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(708), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [9122] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
    STATE(236), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9142] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(714), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(716), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9162] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(718), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9182] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9202] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(722), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(724), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9222] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(728), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9242] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(730), 1,
      anon_sym_COLON,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
    ACTIONS(735), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(240), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [9264] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(740), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9284] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(744), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9304] = 6,
    ACTIONS(746), 1,
      aux_sym_application_token1,
    ACTIONS(748), 1,
      aux_sym__case_infix_operator_token1,
    STATE(80), 1,
      sym__case_infix_operator,
    STATE(269), 1,
      aux_sym_application_repeat1,
    ACTIONS(462), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9326] = 5,
    ACTIONS(424), 1,
      aux_sym_application_token1,
    ACTIONS(750), 1,
      anon_sym_DOT,
    STATE(245), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9346] = 5,
    ACTIONS(417), 1,
      aux_sym_application_token1,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(245), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9366] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9386] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9406] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(763), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9426] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(765), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9446] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(769), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9466] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9486] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(773), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(775), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [9504] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(777), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(779), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [9522] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9542] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(783), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(785), 4,
      anon_sym_data,
      anon_sym_module,
      anon_sym_import,
      sym_identifier,
  [9560] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(787), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(224), 3,
      sym_explicit_binder,
      sym_implicit_binder,
      aux_sym_data_declaration_repeat1,
  [9582] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9602] = 5,
    ACTIONS(478), 1,
      aux_sym_application_token1,
    ACTIONS(750), 1,
      anon_sym_DOT,
    STATE(244), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9622] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(793), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9642] = 5,
    ACTIONS(679), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(795), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 3,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9662] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(223), 1,
      sym_constructor_declaration,
    STATE(436), 1,
      sym_constructor_name,
    STATE(439), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9685] = 5,
    ACTIONS(424), 1,
      aux_sym_application_token1,
    ACTIONS(799), 1,
      anon_sym_DOT,
    STATE(276), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(422), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9704] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(801), 1,
      anon_sym_DASH_GT,
    STATE(263), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(501), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9723] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(804), 1,
      anon_sym_DASH_GT,
    STATE(263), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(555), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9742] = 5,
    ACTIONS(478), 1,
      aux_sym_application_token1,
    ACTIONS(799), 1,
      anon_sym_DOT,
    STATE(262), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(476), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9761] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(804), 1,
      anon_sym_DASH_GT,
    STATE(264), 1,
      aux_sym_type_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(567), 3,
      anon_sym_where,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9780] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(211), 1,
      sym_constructor_declaration,
    STATE(436), 1,
      sym_constructor_name,
    STATE(439), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [9803] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_BSLASH,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [9816] = 4,
    ACTIONS(746), 1,
      aux_sym_application_token1,
    STATE(277), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9833] = 4,
    ACTIONS(746), 1,
      aux_sym_application_token1,
    STATE(277), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9850] = 5,
    ACTIONS(495), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(808), 1,
      aux_sym_application_token1,
    STATE(288), 1,
      aux_sym_application_repeat1,
    ACTIONS(493), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9869] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(349), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9890] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(358), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9911] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(357), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [9932] = 3,
    ACTIONS(415), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 3,
      anon_sym_DOT,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
  [9947] = 5,
    ACTIONS(417), 1,
      aux_sym_application_token1,
    ACTIONS(816), 1,
      anon_sym_DOT,
    STATE(276), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(415), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [9966] = 4,
    ACTIONS(819), 1,
      aux_sym_application_token1,
    STATE(277), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [9983] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(198), 1,
      sym_constructor_declaration,
    STATE(436), 1,
      sym_constructor_name,
    STATE(439), 1,
      sym_operator_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10006] = 4,
    ACTIONS(746), 1,
      aux_sym_application_token1,
    STATE(269), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(520), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10023] = 5,
    ACTIONS(507), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(808), 1,
      aux_sym_application_token1,
    STATE(282), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10042] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(822), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(366), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [10063] = 5,
    ACTIONS(511), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(824), 1,
      aux_sym_application_token1,
    STATE(282), 1,
      aux_sym_application_repeat1,
    ACTIONS(509), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10082] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(421), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [10103] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(322), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [10124] = 3,
    ACTIONS(417), 2,
      anon_sym_DOT,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10139] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    STATE(352), 2,
      sym_explicit_binder,
      sym_implicit_binder,
  [10160] = 4,
    ACTIONS(746), 1,
      aux_sym_application_token1,
    STATE(269), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(516), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10177] = 5,
    ACTIONS(507), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(808), 1,
      aux_sym_application_token1,
    STATE(282), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10196] = 3,
    ACTIONS(444), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(446), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10210] = 3,
    ACTIONS(436), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10224] = 4,
    ACTIONS(833), 1,
      aux_sym_application_token1,
    STATE(296), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(835), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10240] = 4,
    ACTIONS(837), 1,
      aux_sym_application_token1,
    STATE(305), 1,
      aux_sym_application_repeat1,
    ACTIONS(493), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10256] = 4,
    ACTIONS(839), 1,
      aux_sym_application_token1,
    STATE(293), 1,
      aux_sym_application_repeat1,
    ACTIONS(509), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10272] = 4,
    ACTIONS(837), 1,
      aux_sym_application_token1,
    STATE(293), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10288] = 4,
    ACTIONS(842), 1,
      aux_sym__infix_operator_token1,
    STATE(72), 1,
      sym__infix_operator,
    ACTIONS(546), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10304] = 4,
    ACTIONS(844), 1,
      aux_sym_application_token1,
    STATE(296), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(847), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10320] = 4,
    ACTIONS(833), 1,
      aux_sym_application_token1,
    STATE(291), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(849), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10336] = 3,
    ACTIONS(334), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(336), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10350] = 3,
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
  [10364] = 3,
    ACTIONS(436), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(438), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10378] = 3,
    ACTIONS(432), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(434), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10392] = 3,
    ACTIONS(415), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(417), 2,
      anon_sym_DOT,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10406] = 3,
    ACTIONS(407), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(409), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10420] = 3,
    ACTIONS(452), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(454), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10434] = 4,
    ACTIONS(837), 1,
      aux_sym_application_token1,
    STATE(293), 1,
      aux_sym_application_repeat1,
    ACTIONS(505), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10450] = 3,
    ACTIONS(334), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10464] = 3,
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
  [10478] = 3,
    ACTIONS(536), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(534), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10492] = 4,
    ACTIONS(851), 1,
      aux_sym__case_infix_operator_token1,
    STATE(78), 1,
      sym__case_infix_operator,
    ACTIONS(540), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10508] = 3,
    ACTIONS(444), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10522] = 4,
    ACTIONS(748), 1,
      aux_sym__case_infix_operator_token1,
    STATE(80), 1,
      sym__case_infix_operator,
    ACTIONS(462), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10538] = 3,
    ACTIONS(530), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(532), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10552] = 3,
    ACTIONS(534), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(536), 2,
      aux_sym_application_token1,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10566] = 3,
    ACTIONS(432), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10580] = 3,
    ACTIONS(407), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(409), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10594] = 3,
    ACTIONS(452), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10608] = 3,
    ACTIONS(532), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(530), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10622] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10639] = 4,
    ACTIONS(546), 1,
      sym__case_of,
    ACTIONS(857), 1,
      aux_sym__infix_operator_token1,
    STATE(71), 1,
      sym__infix_operator,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10654] = 3,
    ACTIONS(407), 1,
      aux_sym_application_token1,
    ACTIONS(409), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10667] = 3,
    ACTIONS(432), 1,
      aux_sym_application_token1,
    ACTIONS(434), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10680] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_EQ_GT,
    STATE(325), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10697] = 3,
    ACTIONS(436), 1,
      aux_sym_application_token1,
    ACTIONS(438), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10710] = 3,
    ACTIONS(338), 1,
      aux_sym_application_token1,
    ACTIONS(340), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10723] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10740] = 3,
    ACTIONS(334), 1,
      aux_sym_application_token1,
    ACTIONS(336), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10753] = 3,
    ACTIONS(452), 1,
      aux_sym_application_token1,
    ACTIONS(454), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10766] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(648), 1,
      sym__case_of,
    ACTIONS(865), 1,
      sym__case_bar,
    STATE(328), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10783] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_COLON,
    STATE(336), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10800] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_COLON,
    STATE(336), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10817] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(520), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10828] = 4,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(874), 1,
      aux_sym_application_token1,
    STATE(332), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10843] = 2,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(516), 3,
      aux_sym__case_infix_operator_token1,
      sym__case_of,
      sym__case_bar,
  [10854] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      sym__case_of,
    ACTIONS(877), 1,
      sym__case_bar,
    STATE(328), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10871] = 3,
    ACTIONS(428), 1,
      aux_sym_application_token1,
    ACTIONS(430), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10884] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(879), 1,
      anon_sym_COLON,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10901] = 4,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    ACTIONS(886), 1,
      aux_sym_application_token1,
    STATE(332), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10916] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      sym__case_of,
    ACTIONS(888), 1,
      sym__case_bar,
    STATE(334), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [10933] = 3,
    ACTIONS(452), 1,
      aux_sym_application_token1,
    ACTIONS(454), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10946] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [10963] = 3,
    ACTIONS(407), 1,
      aux_sym_application_token1,
    ACTIONS(409), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10976] = 3,
    ACTIONS(444), 1,
      aux_sym_application_token1,
    ACTIONS(446), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [10989] = 3,
    ACTIONS(563), 1,
      aux_sym__infix_operator_token1,
    ACTIONS(561), 2,
      sym__case_of,
      sym__case_bar,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11002] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 1,
      sym__case_bar,
    STATE(364), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [11019] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_COLON,
    STATE(330), 1,
      aux_sym_explicit_binder_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11036] = 3,
    ACTIONS(432), 1,
      aux_sym_application_token1,
    ACTIONS(434), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11049] = 3,
    ACTIONS(444), 1,
      aux_sym_application_token1,
    ACTIONS(446), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11062] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      sym__case_bar,
    STATE(368), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [11079] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_EQ_GT,
    STATE(356), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11096] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11113] = 3,
    ACTIONS(436), 1,
      aux_sym_application_token1,
    ACTIONS(438), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11126] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(905), 1,
      anon_sym_EQ_GT,
    STATE(350), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11143] = 3,
    ACTIONS(338), 1,
      aux_sym_application_token1,
    ACTIONS(340), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11156] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11173] = 3,
    ACTIONS(909), 1,
      aux_sym_application_token1,
    ACTIONS(911), 2,
      sym__case_arrow,
      sym__case_impossible,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11186] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11203] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_EQ_GT,
    STATE(360), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11220] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_EQ_GT,
    STATE(369), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11237] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      sym__case_of,
    ACTIONS(888), 1,
      sym__case_bar,
    STATE(362), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [11254] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11271] = 3,
    ACTIONS(536), 1,
      aux_sym_application_token1,
    ACTIONS(534), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11284] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(328), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(575), 2,
      sym__case_of,
      sym__case_bar,
  [11299] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      sym__case_bar,
    STATE(344), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [11316] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      sym__case_bar,
    STATE(364), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [11333] = 3,
    ACTIONS(334), 1,
      aux_sym_application_token1,
    ACTIONS(336), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11346] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(924), 1,
      anon_sym_EQ_GT,
    STATE(354), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11363] = 3,
    ACTIONS(532), 1,
      aux_sym_application_token1,
    ACTIONS(530), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11376] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    STATE(364), 1,
      aux_sym_case_expression_repeat1,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(575), 2,
      anon_sym_RPAREN,
      sym__case_bar,
  [11391] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_EQ_GT,
    STATE(340), 1,
      aux_sym_lambda_expression_repeat1,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11408] = 3,
    ACTIONS(928), 1,
      anon_sym_BSLASH,
    ACTIONS(930), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11420] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(932), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [11432] = 3,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(454), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11444] = 2,
    ACTIONS(561), 2,
      sym__case_of,
      aux_sym__infix_operator_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11454] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(934), 1,
      sym__case_arrow,
    ACTIONS(936), 1,
      sym__case_impossible,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11468] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(938), 1,
      sym__case_arrow,
    ACTIONS(940), 1,
      sym__case_impossible,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11482] = 3,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(430), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11494] = 3,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11506] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(630), 2,
      sym__case_of,
      sym__case_bar,
  [11518] = 3,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(446), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11530] = 3,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11542] = 3,
    ACTIONS(942), 1,
      aux_sym_application_token1,
    STATE(143), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11554] = 3,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11566] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(454), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11578] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(253), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11592] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(252), 1,
      sym_module_name,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11606] = 3,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11618] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(546), 2,
      sym__case_of,
      sym__case_bar,
  [11630] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(946), 1,
      sym__case_arrow,
    ACTIONS(948), 1,
      sym__case_impossible,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11644] = 3,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11656] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(950), 1,
      sym__case_arrow,
    ACTIONS(952), 1,
      sym__case_impossible,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11670] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(409), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11682] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(450), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11694] = 3,
    ACTIONS(954), 1,
      anon_sym_BSLASH,
    ACTIONS(956), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11706] = 3,
    ACTIONS(958), 1,
      aux_sym_application_token1,
    STATE(270), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11718] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(430), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11730] = 3,
    ACTIONS(960), 1,
      aux_sym_application_token1,
    STATE(159), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11742] = 3,
    ACTIONS(886), 1,
      aux_sym_application_token1,
    STATE(337), 1,
      aux_sym_constructor_application_pattern_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11754] = 3,
    ACTIONS(962), 1,
      anon_sym_BSLASH,
    ACTIONS(964), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11766] = 3,
    ACTIONS(966), 1,
      anon_sym_BSLASH,
    ACTIONS(968), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11778] = 3,
    ACTIONS(970), 1,
      anon_sym_BSLASH,
    ACTIONS(972), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11790] = 3,
    ACTIONS(974), 1,
      aux_sym_application_token1,
    STATE(294), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11802] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(948), 1,
      sym__case_impossible,
    ACTIONS(976), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11816] = 3,
    ACTIONS(978), 1,
      anon_sym_BSLASH,
    ACTIONS(980), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11828] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(434), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11840] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(446), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11852] = 3,
    ACTIONS(982), 1,
      anon_sym_BSLASH,
    ACTIONS(984), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11864] = 3,
    ACTIONS(986), 1,
      aux_sym_application_token1,
    STATE(135), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11876] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(438), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11888] = 3,
    ACTIONS(988), 1,
      anon_sym_BSLASH,
    ACTIONS(990), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11900] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11912] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(336), 2,
      sym__case_arrow,
      sym__case_impossible,
  [11924] = 3,
    ACTIONS(992), 1,
      anon_sym_BSLASH,
    ACTIONS(994), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11936] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(626), 2,
      sym__case_of,
      sym__case_bar,
  [11948] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(936), 1,
      sym__case_impossible,
    ACTIONS(996), 1,
      sym__case_arrow,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [11962] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(644), 2,
      sym__case_of,
      sym__case_bar,
  [11974] = 3,
    ACTIONS(998), 1,
      aux_sym_application_token1,
    STATE(280), 1,
      aux_sym_application_repeat1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [11986] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(626), 2,
      sym__case_of,
      sym__case_bar,
  [11998] = 3,
    ACTIONS(1000), 1,
      anon_sym_BSLASH,
    ACTIONS(1002), 1,
      aux_sym_char_token5,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [12010] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(462), 2,
      sym__case_of,
      sym__case_bar,
  [12022] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(659), 2,
      sym__case_of,
      sym__case_bar,
  [12034] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
    ACTIONS(1004), 2,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [12046] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(644), 2,
      sym__case_of,
      sym__case_bar,
  [12058] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(589), 2,
      sym__case_of,
      sym__case_bar,
  [12070] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(655), 2,
      sym__case_of,
      sym__case_bar,
  [12082] = 3,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [12094] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(571), 2,
      sym__case_of,
      sym__case_bar,
  [12106] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
    ACTIONS(638), 2,
      sym__case_of,
      sym__case_bar,
  [12118] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(605), 1,
      sym__case_of,
    ACTIONS(1006), 1,
      sym__case_bar,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [12132] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      sym__case_of,
    ACTIONS(1008), 1,
      sym__case_bar,
    ACTIONS(3), 2,
      sym_doc_comment,
      sym_block_comment,
  [12146] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1010), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12157] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1012), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12168] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12179] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1016), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12190] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12201] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1020), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12212] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1022), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12223] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1024), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12234] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1026), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12245] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1028), 1,
      anon_sym_COLON,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12256] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1030), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12267] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1032), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12278] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1034), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12289] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1036), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12300] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1038), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12311] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1040), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12322] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12333] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1044), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12344] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1046), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12355] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1048), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12366] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12377] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1052), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12388] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1054), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12399] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1056), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12410] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12421] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12432] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1062), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12443] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1064), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12454] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1066), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12465] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1068), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12476] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12487] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1072), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12498] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1074), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12509] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1076), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12520] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1078), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12531] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1080), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12542] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12553] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12564] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12575] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1088), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12586] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1090), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12597] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1092), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12608] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12619] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1096), 1,
      anon_sym_where,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12630] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1098), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12641] = 2,
    ACTIONS(1100), 1,
      aux_sym_string_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [12650] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1102), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12661] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12672] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12683] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12694] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12705] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1112), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12716] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1114), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12727] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1116), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12738] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12749] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1120), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12760] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1122), 1,
      sym__case_of,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12771] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1124), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12782] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1126), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12793] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1128), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12804] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12815] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1132), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12826] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12837] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1136), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12848] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1138), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12859] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1140), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12870] = 2,
    ACTIONS(413), 1,
      aux_sym_application_token1,
    ACTIONS(3), 3,
      sym_doc_comment,
      sym_line_comment,
      sym_block_comment,
  [12879] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1142), 1,
      sym_operator,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12890] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1144), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12901] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1146), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12912] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12923] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1150), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12934] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12945] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1154), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12956] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1156), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_doc_comment,
      sym_line_comment,
  [12967] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
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
  [SMALL_STATE(11)] = 414,
  [SMALL_STATE(12)] = 460,
  [SMALL_STATE(13)] = 539,
  [SMALL_STATE(14)] = 614,
  [SMALL_STATE(15)] = 689,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 839,
  [SMALL_STATE(18)] = 914,
  [SMALL_STATE(19)] = 989,
  [SMALL_STATE(20)] = 1063,
  [SMALL_STATE(21)] = 1135,
  [SMALL_STATE(22)] = 1207,
  [SMALL_STATE(23)] = 1279,
  [SMALL_STATE(24)] = 1351,
  [SMALL_STATE(25)] = 1417,
  [SMALL_STATE(26)] = 1489,
  [SMALL_STATE(27)] = 1555,
  [SMALL_STATE(28)] = 1627,
  [SMALL_STATE(29)] = 1699,
  [SMALL_STATE(30)] = 1771,
  [SMALL_STATE(31)] = 1843,
  [SMALL_STATE(32)] = 1915,
  [SMALL_STATE(33)] = 1987,
  [SMALL_STATE(34)] = 2059,
  [SMALL_STATE(35)] = 2131,
  [SMALL_STATE(36)] = 2203,
  [SMALL_STATE(37)] = 2275,
  [SMALL_STATE(38)] = 2347,
  [SMALL_STATE(39)] = 2419,
  [SMALL_STATE(40)] = 2491,
  [SMALL_STATE(41)] = 2563,
  [SMALL_STATE(42)] = 2635,
  [SMALL_STATE(43)] = 2707,
  [SMALL_STATE(44)] = 2779,
  [SMALL_STATE(45)] = 2853,
  [SMALL_STATE(46)] = 2925,
  [SMALL_STATE(47)] = 2997,
  [SMALL_STATE(48)] = 3069,
  [SMALL_STATE(49)] = 3141,
  [SMALL_STATE(50)] = 3213,
  [SMALL_STATE(51)] = 3285,
  [SMALL_STATE(52)] = 3357,
  [SMALL_STATE(53)] = 3427,
  [SMALL_STATE(54)] = 3497,
  [SMALL_STATE(55)] = 3567,
  [SMALL_STATE(56)] = 3634,
  [SMALL_STATE(57)] = 3699,
  [SMALL_STATE(58)] = 3764,
  [SMALL_STATE(59)] = 3831,
  [SMALL_STATE(60)] = 3898,
  [SMALL_STATE(61)] = 3963,
  [SMALL_STATE(62)] = 4030,
  [SMALL_STATE(63)] = 4097,
  [SMALL_STATE(64)] = 4164,
  [SMALL_STATE(65)] = 4229,
  [SMALL_STATE(66)] = 4290,
  [SMALL_STATE(67)] = 4351,
  [SMALL_STATE(68)] = 4412,
  [SMALL_STATE(69)] = 4473,
  [SMALL_STATE(70)] = 4534,
  [SMALL_STATE(71)] = 4595,
  [SMALL_STATE(72)] = 4650,
  [SMALL_STATE(73)] = 4705,
  [SMALL_STATE(74)] = 4760,
  [SMALL_STATE(75)] = 4815,
  [SMALL_STATE(76)] = 4871,
  [SMALL_STATE(77)] = 4927,
  [SMALL_STATE(78)] = 4985,
  [SMALL_STATE(79)] = 5039,
  [SMALL_STATE(80)] = 5095,
  [SMALL_STATE(81)] = 5149,
  [SMALL_STATE(82)] = 5203,
  [SMALL_STATE(83)] = 5259,
  [SMALL_STATE(84)] = 5313,
  [SMALL_STATE(85)] = 5368,
  [SMALL_STATE(86)] = 5423,
  [SMALL_STATE(87)] = 5471,
  [SMALL_STATE(88)] = 5519,
  [SMALL_STATE(89)] = 5567,
  [SMALL_STATE(90)] = 5615,
  [SMALL_STATE(91)] = 5663,
  [SMALL_STATE(92)] = 5711,
  [SMALL_STATE(93)] = 5757,
  [SMALL_STATE(94)] = 5803,
  [SMALL_STATE(95)] = 5831,
  [SMALL_STATE(96)] = 5859,
  [SMALL_STATE(97)] = 5901,
  [SMALL_STATE(98)] = 5928,
  [SMALL_STATE(99)] = 5955,
  [SMALL_STATE(100)] = 5982,
  [SMALL_STATE(101)] = 6009,
  [SMALL_STATE(102)] = 6036,
  [SMALL_STATE(103)] = 6063,
  [SMALL_STATE(104)] = 6090,
  [SMALL_STATE(105)] = 6117,
  [SMALL_STATE(106)] = 6157,
  [SMALL_STATE(107)] = 6197,
  [SMALL_STATE(108)] = 6222,
  [SMALL_STATE(109)] = 6247,
  [SMALL_STATE(110)] = 6276,
  [SMALL_STATE(111)] = 6305,
  [SMALL_STATE(112)] = 6330,
  [SMALL_STATE(113)] = 6355,
  [SMALL_STATE(114)] = 6380,
  [SMALL_STATE(115)] = 6409,
  [SMALL_STATE(116)] = 6434,
  [SMALL_STATE(117)] = 6459,
  [SMALL_STATE(118)] = 6484,
  [SMALL_STATE(119)] = 6508,
  [SMALL_STATE(120)] = 6534,
  [SMALL_STATE(121)] = 6564,
  [SMALL_STATE(122)] = 6600,
  [SMALL_STATE(123)] = 6636,
  [SMALL_STATE(124)] = 6672,
  [SMALL_STATE(125)] = 6698,
  [SMALL_STATE(126)] = 6724,
  [SMALL_STATE(127)] = 6760,
  [SMALL_STATE(128)] = 6786,
  [SMALL_STATE(129)] = 6810,
  [SMALL_STATE(130)] = 6836,
  [SMALL_STATE(131)] = 6862,
  [SMALL_STATE(132)] = 6887,
  [SMALL_STATE(133)] = 6912,
  [SMALL_STATE(134)] = 6937,
  [SMALL_STATE(135)] = 6960,
  [SMALL_STATE(136)] = 6985,
  [SMALL_STATE(137)] = 7018,
  [SMALL_STATE(138)] = 7043,
  [SMALL_STATE(139)] = 7068,
  [SMALL_STATE(140)] = 7093,
  [SMALL_STATE(141)] = 7118,
  [SMALL_STATE(142)] = 7139,
  [SMALL_STATE(143)] = 7164,
  [SMALL_STATE(144)] = 7189,
  [SMALL_STATE(145)] = 7222,
  [SMALL_STATE(146)] = 7255,
  [SMALL_STATE(147)] = 7280,
  [SMALL_STATE(148)] = 7301,
  [SMALL_STATE(149)] = 7326,
  [SMALL_STATE(150)] = 7346,
  [SMALL_STATE(151)] = 7366,
  [SMALL_STATE(152)] = 7390,
  [SMALL_STATE(153)] = 7410,
  [SMALL_STATE(154)] = 7430,
  [SMALL_STATE(155)] = 7450,
  [SMALL_STATE(156)] = 7474,
  [SMALL_STATE(157)] = 7498,
  [SMALL_STATE(158)] = 7518,
  [SMALL_STATE(159)] = 7542,
  [SMALL_STATE(160)] = 7566,
  [SMALL_STATE(161)] = 7586,
  [SMALL_STATE(162)] = 7610,
  [SMALL_STATE(163)] = 7630,
  [SMALL_STATE(164)] = 7650,
  [SMALL_STATE(165)] = 7680,
  [SMALL_STATE(166)] = 7700,
  [SMALL_STATE(167)] = 7730,
  [SMALL_STATE(168)] = 7754,
  [SMALL_STATE(169)] = 7774,
  [SMALL_STATE(170)] = 7794,
  [SMALL_STATE(171)] = 7814,
  [SMALL_STATE(172)] = 7834,
  [SMALL_STATE(173)] = 7854,
  [SMALL_STATE(174)] = 7874,
  [SMALL_STATE(175)] = 7894,
  [SMALL_STATE(176)] = 7914,
  [SMALL_STATE(177)] = 7934,
  [SMALL_STATE(178)] = 7953,
  [SMALL_STATE(179)] = 7978,
  [SMALL_STATE(180)] = 7997,
  [SMALL_STATE(181)] = 8016,
  [SMALL_STATE(182)] = 8035,
  [SMALL_STATE(183)] = 8054,
  [SMALL_STATE(184)] = 8073,
  [SMALL_STATE(185)] = 8092,
  [SMALL_STATE(186)] = 8111,
  [SMALL_STATE(187)] = 8136,
  [SMALL_STATE(188)] = 8155,
  [SMALL_STATE(189)] = 8178,
  [SMALL_STATE(190)] = 8197,
  [SMALL_STATE(191)] = 8216,
  [SMALL_STATE(192)] = 8235,
  [SMALL_STATE(193)] = 8260,
  [SMALL_STATE(194)] = 8280,
  [SMALL_STATE(195)] = 8300,
  [SMALL_STATE(196)] = 8320,
  [SMALL_STATE(197)] = 8342,
  [SMALL_STATE(198)] = 8366,
  [SMALL_STATE(199)] = 8390,
  [SMALL_STATE(200)] = 8408,
  [SMALL_STATE(201)] = 8428,
  [SMALL_STATE(202)] = 8452,
  [SMALL_STATE(203)] = 8472,
  [SMALL_STATE(204)] = 8494,
  [SMALL_STATE(205)] = 8516,
  [SMALL_STATE(206)] = 8540,
  [SMALL_STATE(207)] = 8564,
  [SMALL_STATE(208)] = 8588,
  [SMALL_STATE(209)] = 8612,
  [SMALL_STATE(210)] = 8632,
  [SMALL_STATE(211)] = 8652,
  [SMALL_STATE(212)] = 8676,
  [SMALL_STATE(213)] = 8696,
  [SMALL_STATE(214)] = 8720,
  [SMALL_STATE(215)] = 8740,
  [SMALL_STATE(216)] = 8760,
  [SMALL_STATE(217)] = 8780,
  [SMALL_STATE(218)] = 8804,
  [SMALL_STATE(219)] = 8824,
  [SMALL_STATE(220)] = 8844,
  [SMALL_STATE(221)] = 8868,
  [SMALL_STATE(222)] = 8888,
  [SMALL_STATE(223)] = 8907,
  [SMALL_STATE(224)] = 8926,
  [SMALL_STATE(225)] = 8948,
  [SMALL_STATE(226)] = 8968,
  [SMALL_STATE(227)] = 8986,
  [SMALL_STATE(228)] = 9006,
  [SMALL_STATE(229)] = 9024,
  [SMALL_STATE(230)] = 9044,
  [SMALL_STATE(231)] = 9064,
  [SMALL_STATE(232)] = 9084,
  [SMALL_STATE(233)] = 9104,
  [SMALL_STATE(234)] = 9122,
  [SMALL_STATE(235)] = 9142,
  [SMALL_STATE(236)] = 9162,
  [SMALL_STATE(237)] = 9182,
  [SMALL_STATE(238)] = 9202,
  [SMALL_STATE(239)] = 9222,
  [SMALL_STATE(240)] = 9242,
  [SMALL_STATE(241)] = 9264,
  [SMALL_STATE(242)] = 9284,
  [SMALL_STATE(243)] = 9304,
  [SMALL_STATE(244)] = 9326,
  [SMALL_STATE(245)] = 9346,
  [SMALL_STATE(246)] = 9366,
  [SMALL_STATE(247)] = 9386,
  [SMALL_STATE(248)] = 9406,
  [SMALL_STATE(249)] = 9426,
  [SMALL_STATE(250)] = 9446,
  [SMALL_STATE(251)] = 9466,
  [SMALL_STATE(252)] = 9486,
  [SMALL_STATE(253)] = 9504,
  [SMALL_STATE(254)] = 9522,
  [SMALL_STATE(255)] = 9542,
  [SMALL_STATE(256)] = 9560,
  [SMALL_STATE(257)] = 9582,
  [SMALL_STATE(258)] = 9602,
  [SMALL_STATE(259)] = 9622,
  [SMALL_STATE(260)] = 9642,
  [SMALL_STATE(261)] = 9662,
  [SMALL_STATE(262)] = 9685,
  [SMALL_STATE(263)] = 9704,
  [SMALL_STATE(264)] = 9723,
  [SMALL_STATE(265)] = 9742,
  [SMALL_STATE(266)] = 9761,
  [SMALL_STATE(267)] = 9780,
  [SMALL_STATE(268)] = 9803,
  [SMALL_STATE(269)] = 9816,
  [SMALL_STATE(270)] = 9833,
  [SMALL_STATE(271)] = 9850,
  [SMALL_STATE(272)] = 9869,
  [SMALL_STATE(273)] = 9890,
  [SMALL_STATE(274)] = 9911,
  [SMALL_STATE(275)] = 9932,
  [SMALL_STATE(276)] = 9947,
  [SMALL_STATE(277)] = 9966,
  [SMALL_STATE(278)] = 9983,
  [SMALL_STATE(279)] = 10006,
  [SMALL_STATE(280)] = 10023,
  [SMALL_STATE(281)] = 10042,
  [SMALL_STATE(282)] = 10063,
  [SMALL_STATE(283)] = 10082,
  [SMALL_STATE(284)] = 10103,
  [SMALL_STATE(285)] = 10124,
  [SMALL_STATE(286)] = 10139,
  [SMALL_STATE(287)] = 10160,
  [SMALL_STATE(288)] = 10177,
  [SMALL_STATE(289)] = 10196,
  [SMALL_STATE(290)] = 10210,
  [SMALL_STATE(291)] = 10224,
  [SMALL_STATE(292)] = 10240,
  [SMALL_STATE(293)] = 10256,
  [SMALL_STATE(294)] = 10272,
  [SMALL_STATE(295)] = 10288,
  [SMALL_STATE(296)] = 10304,
  [SMALL_STATE(297)] = 10320,
  [SMALL_STATE(298)] = 10336,
  [SMALL_STATE(299)] = 10350,
  [SMALL_STATE(300)] = 10364,
  [SMALL_STATE(301)] = 10378,
  [SMALL_STATE(302)] = 10392,
  [SMALL_STATE(303)] = 10406,
  [SMALL_STATE(304)] = 10420,
  [SMALL_STATE(305)] = 10434,
  [SMALL_STATE(306)] = 10450,
  [SMALL_STATE(307)] = 10464,
  [SMALL_STATE(308)] = 10478,
  [SMALL_STATE(309)] = 10492,
  [SMALL_STATE(310)] = 10508,
  [SMALL_STATE(311)] = 10522,
  [SMALL_STATE(312)] = 10538,
  [SMALL_STATE(313)] = 10552,
  [SMALL_STATE(314)] = 10566,
  [SMALL_STATE(315)] = 10580,
  [SMALL_STATE(316)] = 10594,
  [SMALL_STATE(317)] = 10608,
  [SMALL_STATE(318)] = 10622,
  [SMALL_STATE(319)] = 10639,
  [SMALL_STATE(320)] = 10654,
  [SMALL_STATE(321)] = 10667,
  [SMALL_STATE(322)] = 10680,
  [SMALL_STATE(323)] = 10697,
  [SMALL_STATE(324)] = 10710,
  [SMALL_STATE(325)] = 10723,
  [SMALL_STATE(326)] = 10740,
  [SMALL_STATE(327)] = 10753,
  [SMALL_STATE(328)] = 10766,
  [SMALL_STATE(329)] = 10783,
  [SMALL_STATE(330)] = 10800,
  [SMALL_STATE(331)] = 10817,
  [SMALL_STATE(332)] = 10828,
  [SMALL_STATE(333)] = 10843,
  [SMALL_STATE(334)] = 10854,
  [SMALL_STATE(335)] = 10871,
  [SMALL_STATE(336)] = 10884,
  [SMALL_STATE(337)] = 10901,
  [SMALL_STATE(338)] = 10916,
  [SMALL_STATE(339)] = 10933,
  [SMALL_STATE(340)] = 10946,
  [SMALL_STATE(341)] = 10963,
  [SMALL_STATE(342)] = 10976,
  [SMALL_STATE(343)] = 10989,
  [SMALL_STATE(344)] = 11002,
  [SMALL_STATE(345)] = 11019,
  [SMALL_STATE(346)] = 11036,
  [SMALL_STATE(347)] = 11049,
  [SMALL_STATE(348)] = 11062,
  [SMALL_STATE(349)] = 11079,
  [SMALL_STATE(350)] = 11096,
  [SMALL_STATE(351)] = 11113,
  [SMALL_STATE(352)] = 11126,
  [SMALL_STATE(353)] = 11143,
  [SMALL_STATE(354)] = 11156,
  [SMALL_STATE(355)] = 11173,
  [SMALL_STATE(356)] = 11186,
  [SMALL_STATE(357)] = 11203,
  [SMALL_STATE(358)] = 11220,
  [SMALL_STATE(359)] = 11237,
  [SMALL_STATE(360)] = 11254,
  [SMALL_STATE(361)] = 11271,
  [SMALL_STATE(362)] = 11284,
  [SMALL_STATE(363)] = 11299,
  [SMALL_STATE(364)] = 11316,
  [SMALL_STATE(365)] = 11333,
  [SMALL_STATE(366)] = 11346,
  [SMALL_STATE(367)] = 11363,
  [SMALL_STATE(368)] = 11376,
  [SMALL_STATE(369)] = 11391,
  [SMALL_STATE(370)] = 11408,
  [SMALL_STATE(371)] = 11420,
  [SMALL_STATE(372)] = 11432,
  [SMALL_STATE(373)] = 11444,
  [SMALL_STATE(374)] = 11454,
  [SMALL_STATE(375)] = 11468,
  [SMALL_STATE(376)] = 11482,
  [SMALL_STATE(377)] = 11494,
  [SMALL_STATE(378)] = 11506,
  [SMALL_STATE(379)] = 11518,
  [SMALL_STATE(380)] = 11530,
  [SMALL_STATE(381)] = 11542,
  [SMALL_STATE(382)] = 11554,
  [SMALL_STATE(383)] = 11566,
  [SMALL_STATE(384)] = 11578,
  [SMALL_STATE(385)] = 11592,
  [SMALL_STATE(386)] = 11606,
  [SMALL_STATE(387)] = 11618,
  [SMALL_STATE(388)] = 11630,
  [SMALL_STATE(389)] = 11644,
  [SMALL_STATE(390)] = 11656,
  [SMALL_STATE(391)] = 11670,
  [SMALL_STATE(392)] = 11682,
  [SMALL_STATE(393)] = 11694,
  [SMALL_STATE(394)] = 11706,
  [SMALL_STATE(395)] = 11718,
  [SMALL_STATE(396)] = 11730,
  [SMALL_STATE(397)] = 11742,
  [SMALL_STATE(398)] = 11754,
  [SMALL_STATE(399)] = 11766,
  [SMALL_STATE(400)] = 11778,
  [SMALL_STATE(401)] = 11790,
  [SMALL_STATE(402)] = 11802,
  [SMALL_STATE(403)] = 11816,
  [SMALL_STATE(404)] = 11828,
  [SMALL_STATE(405)] = 11840,
  [SMALL_STATE(406)] = 11852,
  [SMALL_STATE(407)] = 11864,
  [SMALL_STATE(408)] = 11876,
  [SMALL_STATE(409)] = 11888,
  [SMALL_STATE(410)] = 11900,
  [SMALL_STATE(411)] = 11912,
  [SMALL_STATE(412)] = 11924,
  [SMALL_STATE(413)] = 11936,
  [SMALL_STATE(414)] = 11948,
  [SMALL_STATE(415)] = 11962,
  [SMALL_STATE(416)] = 11974,
  [SMALL_STATE(417)] = 11986,
  [SMALL_STATE(418)] = 11998,
  [SMALL_STATE(419)] = 12010,
  [SMALL_STATE(420)] = 12022,
  [SMALL_STATE(421)] = 12034,
  [SMALL_STATE(422)] = 12046,
  [SMALL_STATE(423)] = 12058,
  [SMALL_STATE(424)] = 12070,
  [SMALL_STATE(425)] = 12082,
  [SMALL_STATE(426)] = 12094,
  [SMALL_STATE(427)] = 12106,
  [SMALL_STATE(428)] = 12118,
  [SMALL_STATE(429)] = 12132,
  [SMALL_STATE(430)] = 12146,
  [SMALL_STATE(431)] = 12157,
  [SMALL_STATE(432)] = 12168,
  [SMALL_STATE(433)] = 12179,
  [SMALL_STATE(434)] = 12190,
  [SMALL_STATE(435)] = 12201,
  [SMALL_STATE(436)] = 12212,
  [SMALL_STATE(437)] = 12223,
  [SMALL_STATE(438)] = 12234,
  [SMALL_STATE(439)] = 12245,
  [SMALL_STATE(440)] = 12256,
  [SMALL_STATE(441)] = 12267,
  [SMALL_STATE(442)] = 12278,
  [SMALL_STATE(443)] = 12289,
  [SMALL_STATE(444)] = 12300,
  [SMALL_STATE(445)] = 12311,
  [SMALL_STATE(446)] = 12322,
  [SMALL_STATE(447)] = 12333,
  [SMALL_STATE(448)] = 12344,
  [SMALL_STATE(449)] = 12355,
  [SMALL_STATE(450)] = 12366,
  [SMALL_STATE(451)] = 12377,
  [SMALL_STATE(452)] = 12388,
  [SMALL_STATE(453)] = 12399,
  [SMALL_STATE(454)] = 12410,
  [SMALL_STATE(455)] = 12421,
  [SMALL_STATE(456)] = 12432,
  [SMALL_STATE(457)] = 12443,
  [SMALL_STATE(458)] = 12454,
  [SMALL_STATE(459)] = 12465,
  [SMALL_STATE(460)] = 12476,
  [SMALL_STATE(461)] = 12487,
  [SMALL_STATE(462)] = 12498,
  [SMALL_STATE(463)] = 12509,
  [SMALL_STATE(464)] = 12520,
  [SMALL_STATE(465)] = 12531,
  [SMALL_STATE(466)] = 12542,
  [SMALL_STATE(467)] = 12553,
  [SMALL_STATE(468)] = 12564,
  [SMALL_STATE(469)] = 12575,
  [SMALL_STATE(470)] = 12586,
  [SMALL_STATE(471)] = 12597,
  [SMALL_STATE(472)] = 12608,
  [SMALL_STATE(473)] = 12619,
  [SMALL_STATE(474)] = 12630,
  [SMALL_STATE(475)] = 12641,
  [SMALL_STATE(476)] = 12650,
  [SMALL_STATE(477)] = 12661,
  [SMALL_STATE(478)] = 12672,
  [SMALL_STATE(479)] = 12683,
  [SMALL_STATE(480)] = 12694,
  [SMALL_STATE(481)] = 12705,
  [SMALL_STATE(482)] = 12716,
  [SMALL_STATE(483)] = 12727,
  [SMALL_STATE(484)] = 12738,
  [SMALL_STATE(485)] = 12749,
  [SMALL_STATE(486)] = 12760,
  [SMALL_STATE(487)] = 12771,
  [SMALL_STATE(488)] = 12782,
  [SMALL_STATE(489)] = 12793,
  [SMALL_STATE(490)] = 12804,
  [SMALL_STATE(491)] = 12815,
  [SMALL_STATE(492)] = 12826,
  [SMALL_STATE(493)] = 12837,
  [SMALL_STATE(494)] = 12848,
  [SMALL_STATE(495)] = 12859,
  [SMALL_STATE(496)] = 12870,
  [SMALL_STATE(497)] = 12879,
  [SMALL_STATE(498)] = 12890,
  [SMALL_STATE(499)] = 12901,
  [SMALL_STATE(500)] = 12912,
  [SMALL_STATE(501)] = 12923,
  [SMALL_STATE(502)] = 12934,
  [SMALL_STATE(503)] = 12945,
  [SMALL_STATE(504)] = 12956,
  [SMALL_STATE(505)] = 12967,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_alternative, 2, .production_id = 29),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_alternative, 2, .production_id = 29),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 5, .production_id = 19),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 5, .production_id = 19),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 6, .production_id = 28),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 6, .production_id = 28),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(116),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(82),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(95),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(491),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(117),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(117),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(116),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(393),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 7), SHIFT_REPEAT(239),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 2, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 2, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hole, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hole, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2, .production_id = 23),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 2, .production_id = 23),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 25),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 25),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 4, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 6, .production_id = 32),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 6, .production_id = 32),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 6, .production_id = 32),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 6, .production_id = 32),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 5, .production_id = 24),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 5, .production_id = 24),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 25),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 25),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_binder, 4, .production_id = 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_binder, 5, .production_id = 24),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_binder, 5, .production_id = 24),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(77),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(431),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(384),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(385),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(497),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_name, 3, .production_id = 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(487),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 9),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pattern, 3, .production_id = 9),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_atom, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_atom, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_body_expression, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_body_expression, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_atom, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_atom, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(459),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(494),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(474),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_term, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_term, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 8),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(89),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_infix_expression, 3, .production_id = 38),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_infix_expression, 3, .production_id = 38),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_infix_expression, 3, .production_id = 12),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_infix_expression, 3, .production_id = 12),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(87),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(86),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 13),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_body_expression, 1, .production_id = 37),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__case_body_expression, 1, .production_id = 37),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(164),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 12),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 12),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_expression, 5, .production_id = 20),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_expression, 5, .production_id = 20),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 5, .production_id = 28),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 5, .production_id = 28),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 6, .production_id = 15),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 6, .production_id = 15),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 4, .production_id = 18),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 4, .production_id = 18),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 19),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 19),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 20),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 20),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 21),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_expression, 4, .production_id = 21),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 22),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 22),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 31),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 31),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 31), SHIFT_REPEAT(261),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_alternative, 3, .production_id = 36),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_alternative, 3, .production_id = 36),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 6),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, .production_id = 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 7, .production_id = 26),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 7, .production_id = 26),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 5, .production_id = 27),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 5, .production_id = 27),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impossible_case_alternative, 2, .production_id = 29),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impossible_case_alternative, 2, .production_id = 29),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 35),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 35),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 35), SHIFT_REPEAT(69),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__incomplete_case_expression, 5, .production_id = 21),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__incomplete_case_expression, 5, .production_id = 21),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 34),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 8, .production_id = 33),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 8, .production_id = 33),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_declaration, 3, .production_id = 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat2, 2, .production_id = 30),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(475),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(230),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(448),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(489),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_declaration_repeat1, 2), SHIFT_REPEAT(488),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(470),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3, .production_id = 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(166),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [816] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(503),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(88),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(91),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_application_pattern, 2, .production_id = 10),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_application_repeat1, 2, .production_id = 14), SHIFT_REPEAT(90),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14), SHIFT_REPEAT(92),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 35), SHIFT_REPEAT(70),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 14), SHIFT_REPEAT(93),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 16),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 16), SHIFT_REPEAT(457),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_application_pattern, 2, .production_id = 10),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(283),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 7),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_application_pattern_repeat1, 2, .production_id = 13),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, .production_id = 35), SHIFT_REPEAT(68),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_binder_repeat1, 2, .production_id = 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_expression_repeat1, 2, .production_id = 17),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_name, 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
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
