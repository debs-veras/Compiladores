rm a.out ap3Bison.tab.c ap3Bison.tab.h lex.yy.c output.il
clear
flex ap3Flex.l
bison -d ap3Bison.y
gcc lex.yy.c ap3Bison.tab.c -lfl -lm
./a.out < input.txt