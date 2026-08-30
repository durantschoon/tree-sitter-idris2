; Keywords
[
  "module"
  "import"
  "data"
  "where"
] @keyword

; Operators & Symbols
[
  "->"
  "=>"
  "|"
] @operator

(operator) @operator
(operator_name) @operator

; Types and Constructors
(data_declaration name: (identifier) @type)
(type (identifier) @type)
(constructor_declaration name: (constructor_name (identifier) @constructor))
(constructor_pattern (identifier) @constructor)
(constructor_application_pattern constructor: (identifier) @constructor)

; Functions and Declarations
(type_signature name: (identifier) @function)
(type_signature name: (operator_name) @function)
(function_definition name: (identifier) @function)
(function_definition name: (operator_name) @function)
(with_declaration name: (identifier) @function)
(with_clause name: (identifier) @function)
(application function: (identifier) @function.call)

; Parameters and Binders
(function_definition parameter: (pattern (identifier) @variable.parameter))
(lambda_expression parameter: (identifier) @variable.parameter)
(explicit_binder name: (identifier) @variable.parameter)
(implicit_binder name: (identifier) @variable.parameter)
(with_declaration parameter: (pattern (identifier) @variable.parameter))
(with_clause refined_parameter: (pattern (identifier) @variable.parameter))

; Literals
(integer) @number
(double) @number.float
(char) @character
(string) @string
(hole) @label

; Comments
(line_comment) @comment.line
(block_comment) @comment.block
(doc_comment) @comment.doc
(literate_comment) @comment.block.documentation

; Delimiters & Brackets
[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  "."
  ":"
] @punctuation.delimiter

; Variables (fallback)
(identifier) @variable
