# Baby's first Quine #

I ran into [jpo](https://github.com/jpouellet) in Bollo's, and he brought up
[Quines](https://en.wikipedia.org/wiki/Quine_(computing)). I've been intersted
in Quines for a long time (as a CS person and also, briefly a Philosophy major),
but had never written one, and avoided reading any "how-to" information,
in anticipation of the day when I could solve the puzzle for myself, and jpo
had done the same. We jointly figured out this strategy of having an escaped
string containing the code, except for the string itself, and two helper
functions: one for double-escaping that string (in my case, stolen from
[StackOverflow] (http://stackoverflow.com/questions/3535023/convert-characters-in-a-c-string-to-their-escape-sequences)),
and another for inserting one string into another (in this case, just printf).

Anyway, I wrote this monstrosity of a Quine in plain C (jpo had written one
using stringify features of the preprocessor before). I'll probably write more
and leave them here, because it was fun.

# Quinextra #

This one is slightly more interesting: you can type in a one-line expression to
transform the source code in some way before it gets printed (e.g. reversing it).
