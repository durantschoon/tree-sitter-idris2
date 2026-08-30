module Prelude.Basics

import Builtin

%default total

||| Identity function.
id : a -> a
id x = x

||| Constant function.
const : a -> b -> a
const x = \y => x

||| Flip the order of the first two arguments to a function.
flip : (a -> b -> c) -> b -> a -> c
flip f = \x, y => f y x

||| Application operator with low precedence.
($) : (a -> b) -> a -> b
($) f = \x => f x

||| Logical negation.
not : Bool -> Bool
not True = False
not False = True

||| Boolean conjunction.
(&&) : Bool -> Bool -> Bool
(&&) True b = b
(&&) False _ = False

||| Boolean disjunction.
(||) : Bool -> Bool -> Bool
(||) True _ = True
(||) False b = b
