#
# A combined Makefile to build the VC compiler, VAS assembler and VAM
# simulator.
#
#    make <component>
#
# where component is vc, vas or vam as appropriate.
#
#
# Modifications:
# ==============
#
# 14 Jan 96: Combined makefile for 2nd edition publication


# Specify the compiler, scanner and parser generators and the flags

CC    = gcc
YACC  = bison
LEX   = flex
CP    = copy /b
RM    = del

# Some associated file names

YACCOUT = y_tab.c
YACCHDR = y_tab.h
LEXOUT  = lexyy.c

# Specify some flags

CFLAGS    = -g -ansi -pedantic -DDJGPP
YACCFLAGS = -d -y
LEXFLAGS  = 
LDFLAGS   = -lbison -lflex

# Now the rules for generating one from the other

.y.c:
.y.h:
	$(YACC) $(YACCFLAGS) $*.y
	$(CP) $(YACCOUT) $*.c
	$(CP) $(YACCHDR) $*.h
	$(RM) $(YACCOUT)
	$(RM) $(YACCHDR)

.l.c:
	$(LEX) $(LEXFLAGS) $*.l
	$(CP) $(LEXOUT) $*.c
	$(RM) $(LEXOUT)

.c.o:
	$(CC) -c $(CFLAGS) $*.c


# The compiler files involved

HDRS = vc.h \
       parser.h

CSRCS = main.c \
        cg.c

SRCS = $(CSRCS) \
       scanner.c \
       parser.c

OBJS = main.o \
       parser.o \
       scanner.o \
       cg.o


# Create everything for dos

all: vc.exe vas.exe vam.exe disasm.exe

vc.exe: vc
	copy /b c:\djgpp\bin\stub.exe+vc vc.exe

vas.exe: vas
	copy /b c:\djgpp\bin\stub.exe+vas vas.exe

vam.exe: vam
	copy /b c:\djgpp\bin\stub.exe+vam vam.exe

disasm.exe: disasm
	copy /b c:\djgpp\bin\stub.exe+disasm disasm.exe


# Create a new compiler

vc: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o vc


# Create a new VAS assembler

vas: vas.o
	$(CC) $(CFLAGS) vas.o -o vas


# Create a new VAM simulator

vam: vam.o
	$(CC) $(CFLAGS) vam.o -o vam


# Create a new VAM disassembler

disasm: disasm.o
	$(CC) $(CFLAGS) disasm.o -o disasm


# Compiler source file dependencies


parser.c parser.h: parser.y
scanner.c: scanner.l
main.o: main.c vc.h parser.h
scanner.o: scanner.c vc.h parser.h
parser.o: parser.c vc.h parser.h
cg.o: cg.c vc.h


# Assembler source file dependencies

vas.c vas.h: vas.y
vas.o: vas.h


# Clean everything up

clean:
	$(CP) fib.vsl main.o     
	$(RM) main.o
	$(CP) fib.vsl scanner.c  
	$(RM) scanner.c
	$(CP) fib.vsl scanner.o  
	$(RM) scanner.o
	$(CP) fib.vsl parser.c   
	$(RM) parser.c
	$(CP) fib.vsl parser.h   
	$(RM) parser.h
	$(CP) fib.vsl parser.o   
	$(RM) parser.o
	$(CP) fib.vsl cg.o       
	$(RM) cg.o
	$(CP) fib.vsl vas.o      
	$(RM) vas.o
	$(CP) fib.vsl vam.o      
	$(RM) vam.o
	$(CP) fib.vsl disasm.o   
	$(RM) disasm.o
	$(CP) fib.vsl fact.vas   
	$(RM) fact.vas
	$(CP) fib.vsl fact.vam   
	$(RM) fact.vam
	$(CP) fib.vsl fib.vas    
	$(RM) fib.vas
	$(CP) fib.vsl fib.vam    
	$(RM) fib.vam
	$(CP) fib.vsl a.~        
	$(RM) *.~
	$(CP) fib.vsl a.?~       
	$(RM) *.?~
	$(CP) fib.vsl a.??~      
	$(RM) *.??~
	$(CP) fib.vsl a.exe
	$(RM) *.exe
	$(CP) fib.vsl vc
	$(RM) vc
	$(CP) fib.vsl vas
	$(RM) vas
	$(CP) fib.vsl vam
	$(RM) vam
	$(CP) fib.vsl disasm
	$(RM) disasm
