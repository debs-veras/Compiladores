%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
FILE* output_file;

void ILOC_Code(char *op, char * r1, char * r2);

char str[101];
char str2[100];
int count = 1;

void yyerror(const char* s); 

%}

%union {
    void* noDefine;
    int numInt;
    float numFloat;
    char* str;
}

%token PROGRAM 
%token L_BRACE R_BRACE L_PAREN R_PAREN SEMICOLON COMMA
%token INT_TYPE FLOAT_TYPE STRING_TYPE
%token<str> ID 
%token ASSIGN STRING INT FLOAT
%token SUM SUB MUL DIV
%token EQ NEQ LT GT LTE GTE
%token IF ELSE
%token FOR
%token IN OUT
%start program

%left SUM SUB
%left MUL DIV

%type<str> mat_op
%type<str> term
%type<str> att
%type<str> exp
%type<str> value
%type<str> declarations
%type<str> declaration

%%

program: PROGRAM L_BRACE cmds R_BRACE {
                                        printf("\n*program\n ");
                                        fclose(output_file); 
                                      }
;

type: INT_TYPE                         {printf("\n*type - INT_TYPE");}
    | FLOAT_TYPE                       {printf("\n*type - FLOAT_TYPE");}
    | STRING_TYPE                      {printf("\n*type - STRING_TYPE");}
;

cmds:                                  {printf("\n*cmds - null");} 
    | cmd cmds                         {printf("\n*cmds ");}
;

cmd: att                               {printf("\n*cmd - att");}
   | declarations
   | condition                         {printf("\n*cmd - condition");}
   | loop                              {printf("\n*cmd - loop");}
   | in                                {printf("\n*cmd - in");}
   | out                               {printf("\n*cmd - out");}
;

declarations:                          {printf("\n*declarations - null");}
   | declaration declarations {printf("\n*declarations ");}
;

declaration: type ID SEMICOLON         {printf("\n*declaration - type ID SEMICOLON");}
;

att: ID ASSIGN value SEMICOLON         {
                                        printf("\n*att - ID ASSIGN value SEMICOLON ");
                                        // fprintf(output_file, "loadI %s => r%d\n", $3, temp_counter);
                                        // fprintf(output_file, "storeAI r%d => %s\n", temp_counter, $1);
                                        // temp_counter++;
                                       }
;

value: term                            {printf("\n*value - term ");}
     | relation                        {printf("\n*value - relation ");}
     | STRING                          {printf("\n*value - STRING ");}
;                        

term: FLOAT                            {printf("\n*term - FLOAT");} 
    | INT                              {printf("\n*term - INT");}
    | ID                               {printf("\n*term - ID ");}
    | exp                              {printf("\n*term - exp ");}
;

term_for:
  INT
  |ID

exp:  L_PAREN term R_PAREN             {printf("\n*exp - ( term )" );}
    | mat_op                           {printf("\n*exp - term mat_op term" );}
    | L_PAREN mat_op R_PAREN           {printf("\n*exp - ( term mat_op term )" );}
;

mat_op: term SUM term                  {
                                          ILOC_Code("ADD", $1, $3); $$ = strdup(str);
                                        //  printf("\n*mat_op - SUM" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "ADD r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3;
                                       }
      | term SUB term                  {
                                        ILOC_Code("SUB", $1, $3); $$ = strdup(str);
                                        //  printf("\n*mat_op - SUB" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "SUB r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3;
                                       }
      | term MUL term                  {
                                         ILOC_Code("MUT", $1, $3); $$ = strdup(str);
                                        //  printf("\n*mat_op - MUL" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "MUL r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3;
                                       }
      | term DIV term                  {
                                        ILOC_Code("DIV", $1, $3); $$ = strdup(str);
                                        //  printf("\n*mat_op - DIV" );
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $1 , temp_counter); 
                                        //  fprintf(output_file, "LOADAI %s => r%d\n", $3 , temp_counter + 1); 
                                        //  fprintf(output_file, "DIV r%d, r%d => r%d\n", temp_counter, temp_counter + 1, temp_counter + 2); 
                                        //  fprintf(output_file, "STOREAI r%d => %s \n", temp_counter + 2, $1); 
                                        //  temp_counter += 3; 
                                       }
;

relation:                              {printf("\n*relation - null");} 
        | term rel_op term             {printf("\n*relation - term rel_op term" );}
;

rel_op: EQ                             {printf("\n*rel_op - EQ" );}
      | NEQ                            {printf("\n*rel_op - NEQ" );}
      | LT                             {printf("\n*rel_op - LT" );}
      | GT                             {printf("\n*rel_op - GT" );}
      | LTE                            {printf("\n*rel_op - LTE" );}
      | GTE                            {printf("\n*rel_op - GTE" );}
;

condition: IF L_PAREN relation R_PAREN L_BRACE cmds R_BRACE else {printf("\n*condition - if");}
;

else:                                  {printf("\n*condition - else null");} 
    |ELSE L_BRACE cmds R_BRACE         {printf("\n*condition - else");}
;

loop: FOR L_PAREN ID ASSIGN term_for SEMICOLON relation SEMICOLON exp R_PAREN L_BRACE cmds R_BRACE {printf("\n*loop");}
;

in: ID ASSIGN IN L_PAREN input R_PAREN SEMICOLON          {printf("\n*in");}
;

input:                                 {printf("\n*in - input - null");}
      | STRING                         {printf("\n*in - input - string");}
      | INT                            {printf("\n*in - input - int");}
;

out: OUT L_PAREN outputs R_PAREN SEMICOLON {printf("\n*out");}
;
 
outputs:  value                        {printf("\n*out - output");}
        | value COMMA outputs          {printf("\n*out - outputs");}
;

%%

void ILOC_Code(char *op, char * r1, char * r2) {
    strcpy(str, "R"); 
    sprintf(str2, "%d", count);  
    strcat(str, str2); 
    fprintf(output_file, "%s, %s, %s, R%d\n", op, r1, r2, count++); 
    /* printf("%s, %s, %s, R%d\n", op, r1, r2, count++); */
}

int main(){
    yyin = stdin;
    output_file = fopen("output.il", "w");

    if (output_file == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        exit(EXIT_FAILURE);
    }

    do {
        yyparse();
    } while (!feof(yyin));

    return 0;
}

void yyerror(const char* s){
    fprintf(stderr, "%s\n", s);
    exit(1);
}
