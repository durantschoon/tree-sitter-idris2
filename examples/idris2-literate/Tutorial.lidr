# Literate Idris 2 Tutorial

This is a literate Idris module demonstrating bird-track syntax.

> module Tutorial.Literate
>
> import Prelude.Basics
>
> ||| Standard natural numbers.
> data Nat : Type where
>   Z : Nat
> | S : Nat -> Nat
>
> ||| Addition on natural numbers.
> plus : Nat -> Nat -> Nat
> plus Z y = y
> plus (S k) y = S (plus k y)

We can also inspect numbers using case analysis:

> isZero : Nat -> Bool
> isZero n = case n of {
>   Z => True ;
>   (S _) => False
> }

And refine branches with `with` clauses:

> parity : Nat -> Nat
> parity n with (isZero n)
>   parity n | True = Z
>   parity n | False = S Z
