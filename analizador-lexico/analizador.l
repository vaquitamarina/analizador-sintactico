%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "parser.tab.h"

FILE *outfile;
FILE *table;
char stringBuffer[1024];
int idCount = 0;

typedef struct {
  int id;
  char lexema[100];
  char token[20];
} Id;


Id idTable[100];

void escribirArchivo(const char* token, const char* lexema);
int existeId(const char* lexema);
int verificarRango(const char* lexema);
void escribirTabla(const char* token,const char* lexema, int id);

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



SALTO_LINEA                "\n"
TAB                        "\t"
ESPACIO                    " "
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
{PR_INT}                { escribirArchivo("PR_INT", yytext); return PR_INT; }
{PR_SHORT}              { escribirArchivo("PR_SHORT", yytext); return PR_SHORT; }
{PR_LONG}               { escribirArchivo("PR_LONG", yytext); return PR_LONG; }
{PR_FLOAT}              { escribirArchivo("PR_FLOAT", yytext); return PR_FLOAT; }
{PR_DOUB}               { escribirArchivo("PR_DOUB", yytext); return PR_DOUB; }
{PR_BOOL_C99}           { escribirArchivo("PR_BOOL_C99", yytext);  return PR_BOOL_C99; }
{PR_CHAR}               { escribirArchivo("PR_CHAR", yytext); return PR_CHAR; }
{PR_SIGN}               { escribirArchivo("PR_SIGN", yytext);  return PR_SIGN; }
{PR_UNSIGN}             { escribirArchivo("PR_UNSIGN", yytext); return PR_UNSIGN; }
{PR_VOID}               { escribirArchivo("PR_VOID", yytext); return PR_VOID; }
{PR_ENUM}               { escribirArchivo("PR_ENUM", yytext); return PR_ENUM; }
{PR_GOTO}               { escribirArchivo("PR_GOTO", yytext); return PR_GOTO; }
{PR_INLINE}             { escribirArchivo("PR_INLINE", yytext); return PR_INLINE; }
{PR_REGIS}              { escribirArchivo("PR_REGIS", yytext); return PR_REGIS; }
{PR_RESTRICT}           { escribirArchivo("PR_RESTRICT", yytext); return PR_RESTRICT; }
{PR_BREAK}              { escribirArchivo("PR_BREAK", yytext); return PR_BREAK; }
{PR_SWITCH}             { escribirArchivo("PR_SWITCH", yytext); return PR_SWITCH; }
{PR_RETURN}             { escribirArchivo("PR_RETURN", yytext); return PR_RETURN; }
{PR_SIZEOF}             { escribirArchivo("PR_SIZEOF", yytext); return PR_SIZEOF; }
{PR_WHILE}              { escribirArchivo("PR_WHILE", yytext); return PR_WHILE; }
{PR_STATIC}             { escribirArchivo("PR_STATIC", yytext); return PR_STATIC; }
{PR_DEFAULT}            { escribirArchivo("PR_DEFAULT", yytext); return PR_DEFAULT; }
{PR_CONST}              { escribirArchivo("PR_CONST", yytext); return PR_CONST; }
{PR_CASE}               { escribirArchivo("PR_CASE", yytext); return PR_CASE; }
{PR_CONTIN}             { escribirArchivo("PR_CONTIN", yytext); return PR_CONTIN; }
{PR_IF}                 { escribirArchivo("PR_IF", yytext); return PR_IF; }
{PR_ELSE}               { escribirArchivo("PR_ELSE", yytext); return PR_ELSE; }
{PR_DO}                 { escribirArchivo("PR_DO", yytext); return PR_DO; }
{PR_AUTO}               { escribirArchivo("PR_AUTO", yytext); return PR_AUTO; }
{PR_EXTERN}             { escribirArchivo("PR_EXTERN", yytext); return PR_EXTERN; }
{PR_STRUCT}             { escribirArchivo("PR_STRUCT", yytext); return PR_STRUCT; }
{PR_TYPEDEF}            { escribirArchivo("PR_TYPEDEF", yytext); return PR_TYPEDEF; }
{PR_TYPEOF}             { escribirArchivo("PR_TYPEOF", yytext); return PR_TYPEOF; }
{PR_UNION}              { escribirArchivo("PR_UNION", yytext); return PR_UNION; }
{PR_TYPEUNQ}            { escribirArchivo("PR_TYPEUNQ", yytext); return PR_TYPEUNQ; }
{PR_VOLATILE}           { escribirArchivo("PR_VOLATILE", yytext); return PR_VOLATILE; }
{PR_ALIGNAS}            { escribirArchivo("PR_ALIGNAS", yytext); return PR_ALIGNAS; }
{PR_ALIGNOF}            { escribirArchivo("PR_ALIGNOF", yytext); return PR_ALIGNOF; }
{PR_ATOMIC}             { escribirArchivo("PR_ATOMIC", yytext); return PR_ATOMIC; }
{PR_BOOL_CPP}           { escribirArchivo("PR_BOOL_CPP", yytext); return PR_BOOL_CPP; }
{PR_COMPLEX}            { escribirArchivo("PR_COMPLEX", yytext); return PR_COMPLEX; }
{PR_GENERIC}            { escribirArchivo("PR_GENERIC", yytext); return PR_GENERIC; }
{PR_IMAGINARY}          { escribirArchivo("PR_IMAGINARY", yytext); return PR_IMAGINARY; }
{PR_NORETURN}           { escribirArchivo("PR_NORETURN", yytext); return PR_NORETURN; }
{PR_STATIC_ASSERT}      { escribirArchivo("PR_STATIC_ASSERT", yytext); return PR_STATIC_ASSERT; }
{PR_THREAD_LOCAL}       { escribirArchivo("PR_THREAD_LOCAL", yytext); return PR_THREAD_LOCAL; }

{COMILLA_SIMPLE}             { escribirArchivo("COMILLA_SIMPLE", yytext); return COMILLA_SIMPLE; }
{OP_ASIGNACION}              { escribirArchivo("OP_ASIGNACION", yytext); return OP_ASIGNACION; }
{OP_COMPARATIVO}             { escribirArchivo("OP_COMPARATIVO", yytext); return OP_COMPARATIVO; }
{OP_MENOR}                   { escribirArchivo("OP_MENOR", yytext); return OP_MENOR; }
{OP_MAYOR}                   { escribirArchivo("OP_MAYOR", yytext); return OP_MAYOR; }
{OP_MENOR_IGUAL}             { escribirArchivo("OP_MENOR_IGUAL", yytext); return OP_MENOR_IGUAL; }
{OP_MAYOR_IGUAL}             { escribirArchivo("OP_MAYOR_IGUAL", yytext); return OP_MAYOR_IGUAL; }
{OP_NOES_IGUAL}              { escribirArchivo("OP_NOES_IGUAL", yytext); return OP_NOES_IGUAL; }
{OP_SUMA}                    { escribirArchivo("OP_SUMA", yytext); return OP_SUMA; }
{OP_RESTA}                   { escribirArchivo("OP_RESTA", yytext); return OP_RESTA; }
{OP_MULTIPLICACION}          { escribirArchivo("OP_MULTIPLICACION", yytext); return OP_MULTIPLICACION; }
{OP_DIVISION}                { escribirArchivo("OP_DIVISION", yytext); return OP_DIVISION; }
{OP_TERNARIO_IF}             { escribirArchivo("OP_TERNARIO_IF", yytext); return OP_TERNARIO_IF; }
{OP_TERNARIO_ELSE}           { escribirArchivo("OP_TERNARIO_ELSE", yytext); return OP_TERNARIO_ELSE; }
{OP_ASIGNACION_SUMA}         { escribirArchivo("OP_ASIGNACION_SUMA", yytext); return OP_ASIGNACION_SUMA; }
{OP_ASIGNACION_RESTA}        { escribirArchivo("OP_ASIGNACION_RESTA", yytext); return OP_ASIGNACION_RESTA; }
{OP_ASIGNACION_MULTIP}       { escribirArchivo("OP_ASIGNACION_MULTIP", yytext); return OP_ASIGNACION_MULTIP; }
{OP_ASIGNACION_DIV}          { escribirArchivo("OP_ASIGNACION_DIV", yytext); return OP_ASIGNACION_DIV; }
{OP_AND}                     { escribirArchivo("OP_AND", yytext); return OP_AND; }
{OP_OR}                      { escribirArchivo("OP_OR", yytext); return OP_OR; }
{OP_NEGACION}                { escribirArchivo("OP_NEGACION", yytext); return OP_NEGACION; }
{OP_ASIGNACION_INCREMENTAR}  { escribirArchivo("OP_ASIGNACION_INCREMENTAR", yytext); return OP_ASIGNACION_INCREMENTAR; }
{OP_ASIGNACION_DISMINUIR}    { escribirArchivo("OP_ASIGNACION_DISMINUIR", yytext); return OP_ASIGNACION_DISMINUIR; }
{OP_MODULO}                  { escribirArchivo("OP_MODULO", yytext); return OP_MODULO; }
{OP_ASIGNACION_MOD}          { escribirArchivo("OP_ASIGNACION_MOD", yytext); return OP_ASIGNACION_MOD; }
{OP_XOR}                     { escribirArchivo("OP_XOR", yytext); return OP_XOR; }
{OP_DIRECCION}               { escribirArchivo("OP_DIRECCION", yytext); return OP_DIRECCION; }
{OP_MIEMBRO_PTR}             { escribirArchivo("OP_MIEMBRO_PTR", yytext); return OP_MIEMBRO_PTR; }
{OP_IZQ}                     { escribirArchivo("OP_IZQ", yytext); return OP_IZQ; }
{OP_DER}                     { escribirArchivo("OP_DER", yytext); return OP_DER; }

{SE_PUNTO}                   { escribirArchivo("SE_PUNTO", yytext); return SE_PUNTO; }
{SE_PUNTO_COMA}              { escribirArchivo("SE_PUNTO_COMA", yytext); return SE_PUNTO_COMA; }
{SE_COMA}                    { escribirArchivo("SE_COMA", yytext); return SE_COMA; }

{LLAVE_AP}                   { escribirArchivo("LLAVE_AP", yytext); return LLAVE_AP; }
{LLAVE_CE}                   { escribirArchivo("LLAVE_CE", yytext); return LLAVE_CE; }
{CORCHETE_AP}                { escribirArchivo("CORCHETE_AP", yytext); return CORCHETE_AP; }
{CORCHETE_CE}                { escribirArchivo("CORCHETE_CE", yytext); return CORCHETE_CE; }
{PARENTESIS_AP}              { escribirArchivo("PARENTESIS_AP", yytext); return PARENTESIS_AP; }
{PARENTESIS_CE}              { escribirArchivo("PARENTESIS_CE", yytext); return PARENTESIS_CE; }

{SALTO_LINEA}                { return SALTO_LINEA; }
{TAB}                        { return TAB; }
{ESPACIO}                    { return ESPACIO; }
{SE_HASH}                    { escribirArchivo("LIT_NUMERAL", yytext); return SE_HASH; }

{PR_INCLUDE}                 { escribirArchivo("PR_INCLUDE", yytext); return PR_INCLUDE; }
{PR_DEFINE}                  { escribirArchivo("PR_DEFINE", yytext); return PR_DEFINE; }

{HEADER}                     { escribirArchivo("HEADER", yytext); return HEADER; }
{IDENTIFICADOR} { 
  escribirArchivo("IDENTIFICADOR", yytext);
  return IDENTIFICADOR;
  escribirTabla("IDENTIFICADOR", yytext, idCount);
}

{INT} { 
    if (verificarRango(yytext)) {
        return LIT_INT;
        escribirArchivo("LIT_INT", yytext); 
    } 
}

{FLOAT}                      { escribirArchivo("LIT_FLOAT", yytext); return LIT_FLOAT; }
{CHAR}                       { escribirArchivo("LIT_CHAR", yytext);  return LIT_CHAR; }


{COMENTARIO_LINEA}           {}

{COMENTARIO_AP} { BEGIN(COMENTARIO_M); }
<COMENTARIO_M>{
  {COMENTARIO_CE} { BEGIN(INITIAL); }
  .|\n     ;
  <<EOF>> {
  escribirArchivo("ERROR COMENTARIO NO CERRADO", yytext);
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
    escribirArchivo("LIT_STRING", stringBuffer);
    return LIT_STRING;
    strcpy(stringBuffer, "");
    BEGIN(INITIAL); 
  }
  .|\n     {strncat(stringBuffer, yytext, 1);}
  <<EOF>> {
    escribirArchivo("INVALID_STRING", stringBuffer);
    return INVALID_STRING;
    strcpy(stringBuffer, "");
    BEGIN(INITIAL); 
  }
}

.                            { escribirArchivo("DESCONOCIDO", yytext); return DESCONOCIDO; }


%%

int yywrap(){
return 1;
}

void escribirArchivo(const char* token, const char* lexema) {
}


int existeId(const char* lexema) {
    for (int i = 0; i < idCount; i++) {
        if (strcmp(idTable[i].lexema, lexema) == 0) {
            return 1;
        }
    }
    return 0;
}


int verificarRango(const char* lexema) {
    char* endptr;
    errno = 0;
    long int valor = strtol(lexema, &endptr, 10);
    if (errno == ERANGE) {
        return 0;
    }

    if (valor < -2147483648L || valor > 2147483647L) {
        return 0;
    }

    return 1;
}

void escribirTabla(const char* token,const char* lexema, int id) {
}
