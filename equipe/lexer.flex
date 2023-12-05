%option noyywrap
%{
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"
#define YY_DECL int yylex()

/* OBS:
 * Todos os tokens são tratados como strings inclusive os números.
 * As expressoes tem que ser digitadas com espaços entre os simbolos, exceto para números com sinal.
 * Exemplo de entrada: 5 + 5 - -5.5 * 9.6 / (4 - +5) ** 7 % (-8.08 // 1)
 */

/* Compilação:
 * flex lexer.flex
 * bison -d parser.y
 * gcc lex.yy.c parser.tab.c
*/

%}

ws    [ \t]+
int   [+-]?[0-9]+
float [+-]?[0-9]+.[0-9]+
%%

{ws}                            { ; }
{int}                           { yylval.str = strdup(yytext); return NUM; }
{float}                         { yylval.str = strdup(yytext); return NUM; }
"+"                             { return SUM; }
"-"                             { return SUB; }
"*"                             { return MUL; }
"**"                            { return POW; }
"/"                             { return DIV; }
"//"                            { return DIV; }
"%"                             { return MOD; }
"\n"                            { return NEWLINE; }
"("                             { return LPAR; }
")"                             { return RPAR; }
.                               { fprintf(stderr, "Caractere inesperado: %c\n", yytext[0]); }

%%
