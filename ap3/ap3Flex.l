%{
#include <stdlib.h>
#define YY_DECL int yylex()
#include "ap3Bison.tab.h"
%}

PROGRAM     ("MAIN")
L_BRACE     [\{]
R_BRACE     [\}]
L_PAREN     [\(]
R_PAREN     [\)]
COMMA       [\,]
SEMICOLON   [\;]
IF          ("if")
ELSE        ("else")
FOR         ("for")
IN          ("in")
OUT         ("out")
IGNORE      [ \n\t]*
INT_TYPE    ("int")
FLOAT_TYPE  ("float")
STRING_TYPE ("string")
ID          [a-zA-Z][a-zA-Z0-9]*
FLOAT       [+-]?[0-9]+(\.)([0-9]+)*
INT         [+-]?[0-9]+
ASSIGN      ("=")
SUM         ("+")
SUB         ("-")
MUL         ("*")
DIV         ("/")
EQ          ("==")
NEQ         ("!=")
LT          ("<")
GT          (">")
LTE         ("<=")
GTE         (">=")
STRING      (\"([^"]*)\")

%%

{PROGRAM}     {return PROGRAM;}
{L_BRACE}     {return L_BRACE;}
{R_BRACE}     {return R_BRACE;}
{L_PAREN}     {return L_PAREN;}
{R_PAREN}     {return R_PAREN;}
{COMMA}       {return COMMA;}
{SEMICOLON}   {return SEMICOLON;}
{IF}          {return IF;}
{ELSE}        {return ELSE;}
{FOR}         {return FOR;}
{IN}          {return IN;}
{OUT}         {return OUT;}
{IGNORE}      {;}
{INT_TYPE}    {return INT_TYPE;}
{FLOAT_TYPE}  {return FLOAT_TYPE;}
{STRING_TYPE} {return STRING_TYPE;}
{ID}          {yylval.str = strdup(yytext); return ID;}
{FLOAT}       {yylval.str = strdup(yytext); return FLOAT;}
{INT}         {yylval.str = strdup(yytext); return INT;}
{ASSIGN}      {return ASSIGN;}
{SUM}         {return SUM;}
{SUB}         {return SUB;}
{MUL}         {return MUL;}
{DIV}         {return DIV;}
{EQ}          {return EQ;}
{NEQ}         {return NEQ;}
{LT}          {return LT;}
{GT}          {return GT;}
{LTE}         {return LTE;}
{GTE}         {return GTE;}
{STRING}      {return STRING;}


%%

