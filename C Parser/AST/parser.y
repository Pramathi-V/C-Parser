%{
	#include "abstract_syntax_tree.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	void yyerror(char* s); 											 
	int yylex(); 												
	extern int yylineno; 											%}
// union to allow nodes to have return different datatypes
%union																
{
	char* text;
	expression_node* exp_node;
}
%token <text> T_ID T_NUM IF ELSE DO WHILE
%type <text> RELOP
%type <exp_node> E T F ASSGN STMT COND SEQ

/* specify start symbol */
%start START
%%
START : SEQ {
	display_exp_tree($1);
	printf("\nValid syntax\n");
	YYACCEPT;
};

SEQ	: STMT SEQ { $$ = init_exp_node("seq ", $1, $2);}
| STMT {$$ = $1;}
;

STMT: IF '(' COND ')' '{' SEQ '}' {
		$$ = init_exp_node(strdup("if "), $3, $6);
	}
	| IF '(' COND')' '{' SEQ'}' ELSE '{' SEQ'}' {
	$$ = init_exp_node("seq ", init_exp_node(strdup("if "),$3,$6), init_exp_node(strdup("else "),$10,NULL));
	}
	| DO '{' SEQ '}' WHILE '(' COND ')' {
		$$ = init_exp_node("seq ",init_exp_node(strdup("while "),$7,NULL),init_exp_node(strdup("do "),$3,NULL));
	}
	|ASSGN ';' { $$ = $1;}	
;

COND: F RELOP F {$$=init_exp_node(strdup($2), $1, $3);
}
        ;
RELOP : '<' { $$ = "<";}
	   | '>' { $$ = ">";}
	   | '>''=' { $$ = ">=";}
	   | '<''=' { $$ = "<=";} 
	   | '=''=' { $$ = "==";}
	   | '!''=' { $$ = "!=";}
;


ASSGN : T_ID '=' E	{$$ = init_exp_node(strdup(" = "), init_exp_node($1,NULL,NULL),$3);}
	;
E : E '+' T 	{$$ = init_exp_node(strdup(" + "),$1,$3);}	
   | E '-' T 	{$$ = init_exp_node(strdup(" - "),$1,$3);}
   | T 			{$$=$1;}
   ;
T : T '*' F 	{$$ = init_exp_node(strdup(" * "),$1,$3);}
   | T '/' F 	{$$ = init_exp_node(strdup("/ "),$1,$3);}
   | F 			{$$=$1;}
   ;
F : '(' E ')' {$$=$2;}
	| T_ID 	{$$ = init_exp_node($1,NULL,NULL);}
	| T_NUM {$$ = init_exp_node($1,NULL,NULL);}
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
	yyparse();
	return 0;
}