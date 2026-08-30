module Language.JSON.Data

import Data.List
import Data.String

||| JSON Value representation.
data JSON : Type where
  JNull : JSON
| JBool : Bool -> JSON
| JNumber : Double -> JSON
| JString : String -> JSON
| JArray : List JSON -> JSON

||| Check if a JSON value is null.
isNull : JSON -> Bool
isNull val = case val of {
  JNull => True ;
  _ => False
}

||| Inspect a boolean JSON value.
boolValue : JSON -> (b : Bool) -> Bool
boolValue val target with (val)
  boolValue (JBool True) target | True = target
  boolValue (JBool False) target | False = not target
  boolValue _ target | _ = False

||| Format a JSON boolean as a string.
formatBool : JSON -> String
formatBool val = case val of {
  (JBool True) => "true" ;
  (JBool False) => "false" ;
  _ => "not-a-bool"
}
