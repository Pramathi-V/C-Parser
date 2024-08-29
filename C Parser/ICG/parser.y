%{
	#include "quad_generation.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	#define YYSTYPE char*

	void yyerror(char* s); // error handling function
	int yylex(); 	// declare the function performing lexical analysis
	extern int yylineno; // track the line number

	FILE* icg_quad_file;
	int temp_no = 1;
	int label_no = 1;
	char* temp;
	char* temp1;
%}


%token T_ID T_NUM DO WHILE IF ELSE 

/* specify start symbol */
%start START


%%
START : STMT	{ printf("Valid syntax\n");YYACCEPT;}
		;
STMT : IF '(' COND ')' STMT '{' STMT '}'  {$2=new_label();
quad_code_gen("Label",temp1,":","");} STMT
	|  IF '(' COND ')' STMT '{' STMT '}' {quad_code_gen("Label",temp1,":","");}
		ELSE '{' STMT '}' {$2=new_label();quad_code_gen("Label",$2,":","");} STMT
	| DO_WHILE '{' STMT '}' WHILE '(' DO_COND ')' STMT
	| ASSGN ';' STMT 
	|
	;  

DO_WHILE : DO {
	$$=new_label();quad_code_gen("Label",$$,":","");temp=$$;
}

DO_COND : F RELOP F {
	$$=new_temp();
	quad_code_gen($$, $1, $2, $3);
	quad_code_gen("if", $$,"goto", temp);
}

/* Grammar for assignment */
ASSGN : T_ID '=' E	{$$=strdup($1);quad_code_gen($$,"=",$3,"");}
	;

/* Expression Grammar */
E : E '+' T 		{$$=new_temp();quad_code_gen_expr($$,$1,strdup("+"),$3);}
	| E '-' T 		{$$=new_temp();quad_code_gen_expr($$,$1,strdup("-"),$3);}
	| T
	;
	
	
T : T '*' F 		{$$=new_temp();quad_code_gen_expr($$,$1,strdup("*"),$3);}
	| T '/' F 		{$$=new_temp();quad_code_gen_expr($$,$1,strdup("/"),$3);}
	| F
	;

F : '(' E ')' 		{$$=$2;}
	| T_ID 			{$$=strdup($1);}
	| T_NUM 		{$$=strdup($1);}
	;


RELOP : '<' { $$ = "<";}
	   | '>' { $$ = ">";}
	   | '>''=' { $$ = ">=";}
	   | '<''=' { $$ = "<=";} 
	   | '=''=' { $$ = "==";}
	   | '!''=' { $$ = "!=";}
	;

COND : F RELOP F {$$=new_temp();quad_code_gen($$, $1, $2, $3);
				$1 = new_label();
				$2=new_label();
				temp1=$2;
				quad_code_gen("if", $$,"goto",$1);
				quad_code_gen("goto",$2,"","");	
				quad_code_gen("Label",$1,":","");
				}

		;
%%


/* error handling function */
void yyerror(char* s)
{
	printf("Error :%s at %d \n",s,yylineno);
}


/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	icg_quad_file = fopen("icg_quad.txt","w");
	yyparse();
	fclose(icg_quad_file);
	return 0;
}