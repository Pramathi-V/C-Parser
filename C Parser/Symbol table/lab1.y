%{
    
    #include "sym_tab.c"
    #include <stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #define YYSTYPE char*         //changes the default type to char pointer	int type=-1;	//initial declaration of type for symbol table
    int type = -1;
    int vtype=-1;	//initial declaration for type checking for symbol table
    int scope=0;	//initial declaration for scope
    void yyerror(const char*);
    int yylex();
    extern int yylineno;
%}
%token LOG INT FLOAT ID IF WHILE RELOP FOR NUM RETURN CHAR FLOAT_LIT STRING DOUBLE ELSE DO SWITCH CASE BREAK DEFAULT HEADER INCLUDE MAIN INC DEC

%%

Prog : Stmt 
        ;

Stmt : INCLUDE HEADER Stmt
        |Declr ';' Stmt
        |ASSIGN ';' Stmt
        |RETURN EXPR ';' Stmt
        |IF '(' Cond ')' INLOOP Stmt
        | ELSE INLOOP Stmt
		| FORLOOP Stmt
        | WHILE '(' Cond ')' Stmt
        | DO INLOOP WHILE '(' Cond ')' ';' Stmt
        | SWITCHSTM Stmt
        | INLOOP Stmt
        | Type MAIN '(' ')' '{'{scope++;} Stmt '}' {scope--;}
        | FUNCTION Stmt
        | BREAK ';' Stmt
        | error ';' Stmt
		|
        ;


SWITCHSTM: SWITCH '(' F ')' '{' INCASE '}'
        ;

INCASE: CASE F ':' Stmt INCASE
        | DEFAULT ':' Stmt 
        ;

INLOOP: '{'{scope++;} Stmt '}' {scope--;}
		;
        
FORLOOP: FOR '(' Declr ';' Cond ';' UNI ')' 
		;

FUNCTION : Type '(' Stmt ')'
        ;

EXPR : E
        |EXPR RELOP E 
		|UNI
		| EXPR LOG E
		| '!' E

        ;

E : E '+' T
        {
	if(vtype==2)
		sprintf($$,"%d",atoi($1)+atoi($3));
	if(vtype==3)
		sprintf($$,"%f",atof($1)+atof($3));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror($$);
		$$="~";
		}
	}              
    |E '-' T{
	if(vtype==2)
		sprintf($$,"%d",atoi($1)-atoi($3));
	if(vtype==3)
		sprintf($$,"%f",atof($1)-atof($3));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror($$);
		$$="~";
		}
	}
    |T
    ;

T : T '*' F 
{
	if(vtype==2)
		sprintf($$,"%d",atoi($1)*atoi($3));
	if(vtype==3)
		sprintf($$,"%f",atof($1)*atof($3));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror($$);
		$$="~";
		}
	}
    |T '/' F
    {
	if(vtype==2)
		sprintf($$,"%d",atoi($1)/atoi($3));
	if(vtype==3)
		sprintf($$,"%f",atof($1)/atof($3));
	if(vtype==1){
		printf("character used in arithmetic operator\n");
		yyerror($$);
		$$="~";
		}
	}
    |F
    ;

F : '(' EXPR ')'
    |ID {if(check_sym_tab($1)){
	char* value=retrieve_val($1);
	if (value=="~"){
	printf("variable %s not initialised\n",$1);
	}
	else{
	$$=strdup(value);
	vtype=type_check(value);
	}
	}
	}
    |NUM {	$$=strdup($1);
		vtype=type_check($1);
					}
    |FLOAT_LIT 
    |STRING {$$=strdup($1);
		vtype=-1;
		}
    ;
UNI:  INC ID
	| ID INC
	| DEC ID
	| ID DEC
	;
Cond : E RELOP E
        ;

Declr : Type ListVar 
        ;

Type : INT {type = T_INT;}
        | FLOAT {type = T_FLOAT;}
        | CHAR {type = T_CHAR;}
        | DOUBLE {type = T_DOUBLE;}
        ;

ListVar :ListVar ',' X
        |X
        ;

X : ID '=' EXPR 	
{
        vtype = type_check($3);
        if (type != vtype) {
               printf("Wrong type specified\n");
		yyerror($$);
        }
        else{
                if(check_sym_tab($1)){
                printf("variable %s already declared \n",$1);
                }
                else{
	        insert_symbol($1,size(type),type,yylineno,scope);
	        insert_val($1,$3,yylineno);
	        }
        }      	
}
        |ARRAY
        |ID
		{if(check_sym_tab($1)){
		printf("variable %s already declared \n",$1);
	        }
		else{
		insert_symbol($1,size(type),type,yylineno,scope);
		}
		}
	
        ;
ARRAY: | ID '[' NUM ']' {if(check_sym_tab($1)){
		printf("variable %s already declared \n",$1);
	        }
		else{
		insert_symbol($1,size(type)*atoi($3),type,yylineno,scope);
		}
		}
		| ARRAY '[' NUM ']'
ASSIGN : ID '=' EXPR 
{   //vtype = type_check($3);
        if (type_check($3) != type_check($1)) {
               printf("Wrong type specified\n");
		yyerror($$);
        }
        else{
        
        if(!check_sym_tab($1)){
	printf("variable %s not declared \n",$1);
	yyerror($1);
	 }
	else{
	insert_val($1,$3,yylineno);
	}
}
}
;


%%

void yyerror(const char *s)
{
	printf("Error :%s at %d \n",s,yylineno);}

int main(int argc, char* argv[])
{
        t=init_table();
	//printf("here \n");
	yyparse();
	display_sym_tab();
	return 0;
   
}