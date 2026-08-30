(module_declaration
  name: (module_name (identifier) @name)) @definition.module

(data_declaration
  name: (identifier) @name) @definition.type

(constructor_declaration
  name: (constructor_name (identifier) @name)) @definition.constructor

(type_signature
  name: (identifier) @name) @definition.function

(function_definition
  name: (identifier) @name) @definition.function

(with_declaration
  name: (identifier) @name) @definition.function
