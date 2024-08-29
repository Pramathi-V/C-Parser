%{
    #define YYSTYPE char*
    #include "y.tab.h"
    extern void yyerror(const char *);
    #include <string.h>
    #include <stdio.h>
    extern void yyerror(const char *); // declare the error handling function
    extern YYSTYPE yylval;
    
%}

letter  [a-zA-Z]
digit   [0-9]
id      ({letter}|_)({letter}|{digit}|_)*
digits	{digit}+
opFraction	(\.{digits})?
opExponent	([Ee][+-]?{digits})?

opening   "/*"
comment     [^*]|(\*+[^*/])
closing     "*/"
newline \n
MLcomment   {opening}({comment}{newline}?)*{closing}



%option noyywrap
%option yylineno
%%


int     return INT;
float   return FLOAT;
char    return CHAR;
double  return DOUBLE;
main    return MAIN;
if      return IF;
else    return ELSE;
for     return FOR;
while   return WHILE;
do      return DO;
switch  return SWITCH;
case    return CASE;
break   return BREAK;
default return DEFAULT;
"<"(.+)".h>" return HEADER;
#include     return INCLUDE;
"++"   return INC;
\-\-   return DEC;
"||"			return LOG;
"&&"			return LOG;
(<|>|<=|>=|==|!=)   return RELOP;
return  return RETURN; 

{id}        	{
			yylval=strdup(yytext); //stores the identifier to be used later for symbol table insertion
			return ID;
		}
{digit}* {
			yylval=strdup(yytext);  //stores the value of the number to be used later for symbol table insertion
			return NUM;
		}
{digits}{opFraction}{opExponent} {
			yylval=strdup(yytext);  //stores the value of the number to be used later for symbol table insertion
			return FLOAT_LIT;
		} 

\".*\"		{yylval=strdup(yytext); return STRING; }
\''.*\'		{yylval=strdup(yytext); return STRING; }

[ \t\n] ;
\/\/(.*) ;
{MLcomment} ;

.       {return *yytext;}

