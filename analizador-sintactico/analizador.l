%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "parser.tab.h"


char stringBuffer[1024];
int idCount = 0;

%}

%x COMENTARIO_M
%x STRING

PR_INT               "int"
PR_SHORT             "short"
PR_LONG              "long"
PR_FLOAT             "float"
PR_DOUB              "double"
PR_BOOL_C99          "bool"
PR_CHAR              "char"
PR_SIGN              "signed"
PR_UNSIGN            "unsigned"
PR_VOID              "void"
PR_ENUM              "enum"
PR_GOTO              "goto"
PR_INLINE            "inline"
PR_REGIS             "register"
PR_RESTRICT          "restrict"
PR_BREAK             "break"
PR_SWITCH            "switch"
PR_RETURN            "return"
PR_SIZEOF            "sizeof"
PR_WHILE             "while"
PR_FOR               "for"
PR_STATIC            "static"
PR_DEFAULT           "default"
PR_CONST             "const"
PR_CASE              "case"
PR_CONTIN            "continue"
PR_IF                "if"
PR_ELSE              "else"
PR_DO                "do"
PR_AUTO              "auto"
PR_EXTERN            "extern"
PR_STRUCT            "struct"
PR_TYPEDEF           "typedef"
PR_TYPEOF            "typeof"
PR_UNION             "union"
PR_TYPEUNQ           "typeof_unqual"
PR_VOLATILE          "volatile"
PR_ALIGNAS           "_Alignas"
PR_ALIGNOF           "_Alignof"
PR_ATOMIC            "_Atomic"
PR_BOOL_CPP          "_Bool"
PR_COMPLEX           "_Complex"
PR_GENERIC           "_Generic"
PR_IMAGINARY         "_Imaginary"
PR_NORETURN          "_Noreturn"
PR_STATIC_ASSERT     "_Static_assert"
PR_THREAD_LOCAL      "_Thread_local"

OP_ASIGNACION              "="
OP_COMPARATIVO             "=="
OP_MENOR                   "<"
OP_MAYOR                   ">"
OP_MENOR_IGUAL             "<="
OP_MAYOR_IGUAL             ">="
OP_NOES_IGUAL              "!="
OP_SUMA                    "+"
OP_RESTA                   "-"
OP_MULTIPLICACION          "*"
OP_DIVISION                "/"
OP_TERNARIO_IF             "?"
OP_TERNARIO_ELSE           ":"
OP_ASIGNACION_SUMA         "+="
OP_ASIGNACION_RESTA        "-="
OP_ASIGNACION_MULTIP       "*="
OP_ASIGNACION_DIV          "/="
OP_AND                     "&&"
OP_OR                      "||"
OP_NEGACION                "!"
OP_ASIGNACION_INCREMENTAR  "++"
OP_ASIGNACION_DISMINUIR    "--"
OP_MODULO                  "%"
OP_ASIGNACION_MOD          "%="
OP_XOR                     "^"
OP_DIRECCION               "&"
OP_MIEMBRO_PTR             "->"
OP_IZQ                     "<<"
OP_DER                     ">>"

SE_PUNTO                   "."
SE_PUNTO_COMA              ";"
SE_GUION_BAJO              "_"
SE_COMA                    ","

COMILLA_SIMPLE             \'
COMILLA_DOBLE              \"
LLAVE_AP                   "{"
LLAVE_CE                   "}"
CORCHETE_AP                "["
CORCHETE_CE                "\]"
PARENTESIS_AP              "("
PARENTESIS_CE              ")"

COMENTARIO_LINEA           "//".*
COMENTARIO_AP              "/*"
COMENTARIO_CE              "*/"

SE_HASH                    "#"
PR_INCLUDE                 {SE_HASH}"include"
PR_DEFINE                  {SE_HASH}"define"


DIGITO [0-9]
LETRA [a-zA-Z]

INT [+-]?{DIGITO}+
FLOAT [+-]?({DIGITO}+"."{DIGITO}*|"."{DIGITO}+|{DIGITO}+)([eE][+-]?{DIGITO}+)?
CHAR {COMILLA_SIMPLE}.{COMILLA_SIMPLE}

HEADER {OP_MENOR}[^<>\t\n ]+{OP_MAYOR}

IDENTIFICADOR ({LETRA}|{SE_GUION_BAJO})({LETRA}|{DIGITO}|{SE_GUION_BAJO})*

%%
{PR_INT}                { return PR_INT; }
{PR_SHORT}              { return PR_SHORT; }
{PR_LONG}               { return PR_LONG; }
{PR_FLOAT}              { return PR_FLOAT; }
{PR_DOUB}               { return PR_DOUB; }
{PR_BOOL_C99}           { return PR_BOOL_C99; }
{PR_CHAR}               { return PR_CHAR; }
{PR_SIGN}               { return PR_SIGN; }
{PR_UNSIGN}             { return PR_UNSIGN; }
{PR_VOID}               { return PR_VOID; }
{PR_ENUM}               { return PR_ENUM; }
{PR_GOTO}               { return PR_GOTO; }
{PR_INLINE}             { return PR_INLINE; }
{PR_REGIS}              { return PR_REGIS; }
{PR_RESTRICT}           { return PR_RESTRICT; }
{PR_BREAK}              { return PR_BREAK; }
{PR_SWITCH}             { return PR_SWITCH; }
{PR_RETURN}             { return PR_RETURN; }
{PR_SIZEOF}             { return PR_SIZEOF; }
{PR_WHILE}              { return PR_WHILE; }
{PR_FOR}                { return PR_FOR; }
{PR_STATIC}             { return PR_STATIC; }
{PR_DEFAULT}            { return PR_DEFAULT; }
{PR_CONST}              { return PR_CONST; }
{PR_CASE}               { return PR_CASE; }
{PR_CONTIN}             { return PR_CONTIN; }
{PR_IF}                 { return PR_IF; }
{PR_ELSE}               { return PR_ELSE; }
{PR_DO}                 { return PR_DO; }
{PR_AUTO}               { return PR_AUTO; }
{PR_EXTERN}             { return PR_EXTERN; }
{PR_STRUCT}             { return PR_STRUCT; }
{PR_TYPEDEF}            { return PR_TYPEDEF; }
{PR_TYPEOF}             { return PR_TYPEOF; }
{PR_UNION}              { return PR_UNION; }
{PR_TYPEUNQ}            { return PR_TYPEUNQ; }
{PR_VOLATILE}           { return PR_VOLATILE; }
{PR_ALIGNAS}            { return PR_ALIGNAS; }
{PR_ALIGNOF}            { return PR_ALIGNOF; }
{PR_ATOMIC}             { return PR_ATOMIC; }
{PR_BOOL_CPP}           { return PR_BOOL_CPP; }
{PR_COMPLEX}            { return PR_COMPLEX; }
{PR_GENERIC}            { return PR_GENERIC; }
{PR_IMAGINARY}          { return PR_IMAGINARY; }
{PR_NORETURN}           { return PR_NORETURN; }
{PR_STATIC_ASSERT}      { return PR_STATIC_ASSERT; }
{PR_THREAD_LOCAL}       { return PR_THREAD_LOCAL; }

{COMILLA_SIMPLE}             { return COMILLA_SIMPLE; }
{OP_ASIGNACION}              { return OP_ASIGNACION; }
{OP_COMPARATIVO}             { return OP_COMPARATIVO; }
{OP_MENOR}                   { return OP_MENOR; }
{OP_MAYOR}                   { return OP_MAYOR; }
{OP_MENOR_IGUAL}             { return OP_MENOR_IGUAL; }
{OP_MAYOR_IGUAL}             { return OP_MAYOR_IGUAL; }
{OP_NOES_IGUAL}              { return OP_NOES_IGUAL; }
{OP_SUMA}                    { return OP_SUMA; }
{OP_RESTA}                   { return OP_RESTA; }
{OP_MULTIPLICACION}          { return OP_MULTIPLICACION; }
{OP_DIVISION}                { return OP_DIVISION; }
{OP_TERNARIO_IF}             { return OP_TERNARIO_IF; }
{OP_TERNARIO_ELSE}           { return OP_TERNARIO_ELSE; }
{OP_ASIGNACION_SUMA}         { return OP_ASIGNACION_SUMA; }
{OP_ASIGNACION_RESTA}        { return OP_ASIGNACION_RESTA; }
{OP_ASIGNACION_MULTIP}       { return OP_ASIGNACION_MULTIP; }
{OP_ASIGNACION_DIV}          { return OP_ASIGNACION_DIV; }
{OP_AND}                     { return OP_AND; }
{OP_OR}                      { return OP_OR; }
{OP_NEGACION}                { return OP_NEGACION; }
{OP_ASIGNACION_INCREMENTAR}  { return OP_ASIGNACION_INCREMENTAR; }
{OP_ASIGNACION_DISMINUIR}    { return OP_ASIGNACION_DISMINUIR; }
{OP_MODULO}                  { return OP_MODULO; }
{OP_ASIGNACION_MOD}          { return OP_ASIGNACION_MOD; }
{OP_XOR}                     { return OP_XOR; }
{OP_DIRECCION}               { return OP_DIRECCION; }
{OP_MIEMBRO_PTR}             { return OP_MIEMBRO_PTR; }
{OP_IZQ}                     { return OP_IZQ; }
{OP_DER}                     { return OP_DER; }

{SE_PUNTO}                   { return SE_PUNTO; }
{SE_PUNTO_COMA}              { return SE_PUNTO_COMA; }
{SE_COMA}                    { return SE_COMA; }

{LLAVE_AP}                   { return LLAVE_AP; }
{LLAVE_CE}                   { return LLAVE_CE; }
{CORCHETE_AP}                { return CORCHETE_AP; }
{CORCHETE_CE}                { return CORCHETE_CE; }
{PARENTESIS_AP}              { return PARENTESIS_AP; }
{PARENTESIS_CE}              { return PARENTESIS_CE; }

[ \t\n\r]+  { /* ignorar espacios en blanco */ }
{SE_HASH}                    { return SE_HASH; }

{PR_INCLUDE}                 { return PR_INCLUDE; }
{PR_DEFINE}                  { return PR_DEFINE; }

{HEADER}                     { return HEADER; }
{IDENTIFICADOR} { 
  return IDENTIFICADOR;
}

{INT} { 
        return LIT_INT;
}

{FLOAT}                      { return LIT_FLOAT; }
{CHAR}                       { return LIT_CHAR; }


{COMENTARIO_LINEA}           {}

{COMENTARIO_AP} { BEGIN(COMENTARIO_M); }
<COMENTARIO_M>{
  {COMENTARIO_CE} { BEGIN(INITIAL); }
  .|\n     ;
  <<EOF>> {
  BEGIN(INITIAL); 
    }
}

{COMILLA_DOBLE} {
  strcat(stringBuffer, "\"");
  BEGIN(STRING); 
}
<STRING>{
  \\\"    {strncat(stringBuffer, yytext,2);}

  {COMILLA_DOBLE} {
    strcat(stringBuffer, "\"");
    return LIT_STRING;
    strcpy(stringBuffer, "");
    BEGIN(INITIAL); 
  }
  .|\n     {strncat(stringBuffer, yytext, 1);}
  <<EOF>> {
    return INVALID_STRING;
    strcpy(stringBuffer, "");
    BEGIN(INITIAL); 
  }
}

.                            { return DESCONOCIDO; }


%%

int yywrap(){
return 1;
}
