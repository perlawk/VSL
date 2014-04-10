This is my n times to learn the compiler techniques. Lex and yacc are very good for the beginner
to study the primary skills of writing a compiler even a toy one.

This book is a pre-runner of the time. Even today it's very fasional. A small book contains both
lexing, parsing, code generation, assembler, byte code generation, virtual machine. Especially
the virtual machine is the hot topic in the internet of the programming geeks. Nearly every newly
invented languages have their own virual machine.

The original codes is mixed with dos and unix. And it doesn't initially work when compile the code.
So the bug fixing started. Luckily, it took me less than few days to find the problem and fixed 
them all. Any further problem in compiling is welcome to discuss.

Since I don't use window$ product more than 20 years. So any question about the dos part is ignored. 

Changes of the original codes:
Some syntax erros when run the program because of the header and lib is dos oriented, the
evil '\r' is the source. I removed them all. To prevent this from loading a source code of
vsl, vas is generated from a dos/window$ systems, I change the scanner.l, parser.y and vas.y
and let the '\r' as part of the '\n'. It only true in Linux system, other unix system like OSX
may be problem. Please be careful!.

A minimal vsl and hell.vsl is added to the sample directory. The author's minimal vsl is

FUNC main()
{
	CONTINUE
}

but I found the braces are unecessary, so:

FUNC main()
	CONTINUE

is enough. Of course, the author's minimal program is more clear. It's up to you. 

A vsl compiling script is added to the code directory. After compile the compiler, assembler and
vam. Just run:

./vsl ../sample/hello.vsl

In the vc.h, change the value of LIB_DIR to any location you want and place the lib and header
file there and recompile the vc. The new compiler will search the lib and header there.

The disasm is compiled for your convenient.

Enjoy the study of this great book.


