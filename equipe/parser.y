%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror (const char *s);
extern int yylex();
extern int yyparse();
extern FILE* yyin;

void ILOC_Code(char *op, char * r1, char * r2);

char str[101];
char str2[100];
int count = 1;

%}

%union { char *str; }

%token <str> NUM

%token SUM SUB MUL DIV LPAR RPAR
%token NEWLINE

%left SUM SUB
%left MUL DIV
%left MOD
%right POW

%type <str> Exp
%type <str> Term
%type <str> Literal
%type <str> Line

%start Exp

%%

Exp:        Term            { $$ = $1; }
   |        Exp SUM Exp     { ILOC_Code("ADD", $1, $3); $$ = strdup(str); }
   |        Exp SUB Exp     { ILOC_Code("SUB", $1, $3); $$ = strdup(str); }
   |        Exp MUL Exp     { ILOC_Code("MUL", $1, $3); $$ = strdup(str); }
   |        Exp DIV Exp     { ILOC_Code("DIV", $1, $3); $$ = strdup(str); }
   |        Exp POW Exp     { ILOC_Code("POW", $1, $3); $$ = strdup(str); }
   |        Exp MOD Exp     { ILOC_Code("MOD", $1, $3); $$ = strdup(str); }
   |        LPAR Exp RPAR   { $$ = $2; }
   ;

Term:       Literal         { $$ = $1; }
    ;

Literal:    NUM             { $$ = $1; }
       ;

Line:       NEWLINE
    |       Exp NEWLINE     { printf("%s\n", $1); }
    ;

%%

void ILOC_Code(char *op, char * r1, char * r2) {
    strcpy(str, "R"); // Faz o primeiro caractere do registrador
    sprintf(str2, "%d", count); // Faz o cast do contador para string 
    strcat(str, str2); // Concatena as duas strings
    printf("%s, %s, %s, R%d\n", op, r1, r2, count++);
}

void yyerror(const char *s) {
    printf("\n");
}

int main(){
    printf("\n");
    yyin = stdin;
    do {
        yyparse();
    } while(!feof(yyin));
    return 0;
}
