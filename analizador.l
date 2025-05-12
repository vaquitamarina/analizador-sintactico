%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

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

void escribirArchivo(const char* token, const char* lexema) {
    fprintf(outfile, "%-30s %s\n", token, lexema);
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
        fprintf(outfile, "%-30s %s\n", "INTEGER NO VALID", lexema);
        return 0;
    }

    if (valor < -2147483648L || valor > 2147483647L) {
        fprintf(outfile, "%-30s %s\n", "INTEGER NO VALID", lexema);
        return 0;
    }

    return 1;
}

void escribirTabla(const char* token,const char* lexema, int id) {
  if (!existeId(lexema)) {
    strcpy(idTable[idCount].lexema, lexema);
    idTable[idCount].id = id;
    strcpy(idTable[idCount].token, token);
    idCount++;
  }
}
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
FLOAT [+-]?{DIGITO}+"."{DIGITO}*
CHAR {COMILLA_SIMPLE}.{COMILLA_SIMPLE}

HEADER {OP_MENOR}[^{OP_MAYOR} \t\n]+{OP_MAYOR}

IDENTIFICADOR ({LETRA}|{SE_GUION_BAJO})({LETRA}|{DIGITO}|{SE_GUION_BAJO})*

%%
{PR_INT}                { escribirArchivo("PR_INT", yytext); }
{PR_SHORT}              { escribirArchivo("PR_SHORT", yytext); }
{PR_LONG}               { escribirArchivo("PR_LONG", yytext); }
{PR_FLOAT}              { escribirArchivo("PR_FLOAT", yytext); }
{PR_DOUB}               { escribirArchivo("PR_DOUB", yytext); }
{PR_BOOL_C99}           { escribirArchivo("PR_BOOL_C99", yytext); }
{PR_CHAR}               { escribirArchivo("PR_CHAR", yytext); }
{PR_SIGN}               { escribirArchivo("PR_SIGN", yytext); }
{PR_UNSIGN}             { escribirArchivo("PR_UNSIGN", yytext); }
{PR_VOID}               { escribirArchivo("PR_VOID", yytext); }
{PR_ENUM}               { escribirArchivo("PR_ENUM", yytext); }
{PR_GOTO}               { escribirArchivo("PR_GOTO", yytext); }
{PR_INLINE}             { escribirArchivo("PR_INLINE", yytext); }
{PR_REGIS}              { escribirArchivo("PR_REGIS", yytext); }
{PR_RESTRICT}           { escribirArchivo("PR_RESTRICT", yytext); }
{PR_BREAK}              { escribirArchivo("PR_BREAK", yytext); }
{PR_SWITCH}             { escribirArchivo("PR_SWITCH", yytext); }
{PR_RETURN}             { escribirArchivo("PR_RETURN", yytext); }
{PR_SIZEOF}             { escribirArchivo("PR_SIZEOF", yytext); }
{PR_WHILE}              { escribirArchivo("PR_WHILE", yytext); }
{PR_STATIC}             { escribirArchivo("PR_STATIC", yytext); }
{PR_DEFAULT}            { escribirArchivo("PR_DEFAULT", yytext); }
{PR_CONST}              { escribirArchivo("PR_CONST", yytext); }
{PR_CASE}               { escribirArchivo("PR_CASE", yytext); }
{PR_CONTIN}             { escribirArchivo("PR_CONTIN", yytext); }
{PR_IF}                 { escribirArchivo("PR_IF", yytext); }
{PR_ELSE}               { escribirArchivo("PR_ELSE", yytext); }
{PR_DO}                 { escribirArchivo("PR_DO", yytext); }
{PR_AUTO}               { escribirArchivo("PR_AUTO", yytext); }
{PR_EXTERN}             { escribirArchivo("PR_EXTERN", yytext); }
{PR_STRUCT}             { escribirArchivo("PR_STRUCT", yytext); }
{PR_TYPEDEF}            { escribirArchivo("PR_TYPEDEF", yytext); }
{PR_TYPEOF}             { escribirArchivo("PR_TYPEOF", yytext); }
{PR_UNION}              { escribirArchivo("PR_UNION", yytext); }
{PR_TYPEUNQ}            { escribirArchivo("PR_TYPEUNQ", yytext); }
{PR_VOLATILE}           { escribirArchivo("PR_VOLATILE", yytext); }
{PR_ALIGNAS}            { escribirArchivo("PR_ALIGNAS", yytext); }
{PR_ALIGNOF}            { escribirArchivo("PR_ALIGNOF", yytext); }
{PR_ATOMIC}             { escribirArchivo("PR_ATOMIC", yytext); }
{PR_BOOL_CPP}           { escribirArchivo("PR_BOOL_CPP", yytext); }
{PR_COMPLEX}            { escribirArchivo("PR_COMPLEX", yytext); }
{PR_GENERIC}            { escribirArchivo("PR_GENERIC", yytext); }
{PR_IMAGINARY}          { escribirArchivo("PR_IMAGINARY", yytext); }
{PR_NORETURN}           { escribirArchivo("PR_NORETURN", yytext); }
{PR_STATIC_ASSERT}      { escribirArchivo("PR_STATIC_ASSERT", yytext); }
{PR_THREAD_LOCAL}       { escribirArchivo("PR_THREAD_LOCAL", yytext); }

{OP_ASIGNACION}              { escribirArchivo("OP_ASIGNACION", yytext); }
{OP_COMPARATIVO}             { escribirArchivo("OP_COMPARATIVO", yytext); }
{OP_MENOR}                   { escribirArchivo("OP_MENOR", yytext); }
{OP_MAYOR}                   { escribirArchivo("OP_MAYOR", yytext); }
{OP_MENOR_IGUAL}             { escribirArchivo("OP_MENOR_IGUAL", yytext); }
{OP_MAYOR_IGUAL}             { escribirArchivo("OP_MAYOR_IGUAL", yytext); }
{OP_NOES_IGUAL}              { escribirArchivo("OP_NOES_IGUAL", yytext); }
{OP_SUMA}                    { escribirArchivo("OP_SUMA", yytext); }
{OP_RESTA}                   { escribirArchivo("OP_RESTA", yytext); }
{OP_MULTIPLICACION}          { escribirArchivo("OP_MULTIPLICACION", yytext); }
{OP_DIVISION}                { escribirArchivo("OP_DIVISION", yytext); }
{OP_TERNARIO_IF}             { escribirArchivo("OP_TERNARIO_IF", yytext); }
{OP_TERNARIO_ELSE}           { escribirArchivo("OP_TERNARIO_ELSE", yytext); }
{OP_ASIGNACION_SUMA}         { escribirArchivo("OP_ASIGNACION_SUMA", yytext); }
{OP_ASIGNACION_RESTA}        { escribirArchivo("OP_ASIGNACION_RESTA", yytext); }
{OP_ASIGNACION_MULTIP}       { escribirArchivo("OP_ASIGNACION_MULTIP", yytext); }
{OP_ASIGNACION_DIV}          { escribirArchivo("OP_ASIGNACION_DIV", yytext); }
{OP_AND}                     { escribirArchivo("OP_AND", yytext); }
{OP_OR}                      { escribirArchivo("OP_OR", yytext); }
{OP_NEGACION}                { escribirArchivo("OP_NEGACION", yytext); }
{OP_ASIGNACION_INCREMENTAR}  { escribirArchivo("OP_ASIGNACION_INCREMENTAR", yytext); }
{OP_ASIGNACION_DISMINUIR}    { escribirArchivo("OP_ASIGNACION_DISMINUIR", yytext); }
{OP_MODULO}                  { escribirArchivo("OP_MODULO", yytext); }
{OP_ASIGNACION_MOD}          { escribirArchivo("OP_ASIGNACION_MOD", yytext); }
{OP_XOR}                     { escribirArchivo("OP_XOR", yytext); }
{OP_DIRECCION}               { escribirArchivo("OP_DIRECCION", yytext); }
{OP_MIEMBRO_PTR}             { escribirArchivo("OP_MIEMBRO_PTR", yytext); }

{SE_PUNTO}                   { escribirArchivo("SE_PUNTO", yytext); }
{SE_PUNTO_COMA}              { escribirArchivo("SE_PUNTO_COMA", yytext); }
{SE_COMA}                { escribirArchivo("SE_COMA", yytext); }

{LLAVE_AP}                   { escribirArchivo("LLAVE_AP", yytext); }
{LLAVE_CE}                   { escribirArchivo("LLAVE_CE", yytext); }
{CORCHETE_AP}                { escribirArchivo("CORCHETE_AP", yytext); }
{CORCHETE_CE}                { escribirArchivo("CORCHETE_CE", yytext); }
{PARENTESIS_AP}              { escribirArchivo("PARENTESIS_AP", yytext); }
{PARENTESIS_CE}              { escribirArchivo("PARENTESIS_CE", yytext); }

{SALTO_LINEA}                {}
{TAB}                        {}
{ESPACIO}                    {}
{SE_HASH}                { escribirArchivo("LIT_NUMERAL", yytext); }

{PR_INCLUDE}         { escribirArchivo("PR_INCLUDE", yytext); }
{PR_DEFINE}          { escribirArchivo("PR_DEFINE", yytext); }

{HEADER} { escribirArchivo("HEADER", yytext); }
{IDENTIFICADOR} { 
  escribirArchivo("IDENTIFICADOR", yytext);
  escribirTabla("IDENTIFICADOR", yytext, idCount);
}

{INT} { 
    if (verificarRango(yytext)) { 
        escribirArchivo("LIT_INT", yytext); 
    } 
}
{FLOAT} { escribirArchivo("LIT_FLOAT", yytext); }
{CHAR} { escribirArchivo("LIT_CHAR", yytext); }


{COMENTARIO_LINEA}  {}

{COMENTARIO_AP} { BEGIN(COMENTARIO_M); }
<COMENTARIO_M>{
  {COMENTARIO_CE}  { BEGIN(INITIAL); }
  .|\n     ; 
}

{COMILLA_DOBLE} {
  strcat(stringBuffer, "\"");
  BEGIN(STRING); 
}
<STRING>{
  {COMILLA_DOBLE}  {
    strcat(stringBuffer, "\"");
    escribirArchivo("LIT_STRING", stringBuffer);
    strcpy(stringBuffer, "");
    BEGIN(INITIAL); 
  }
  .|\n     {strncat(stringBuffer, yytext, 1);}
}

.                             { escribirArchivo("Caracter no reconocido", yytext); }


%%

int main(int argc, char **argv) {
  ++argv,--argc; /* se salta el nombre del programa*/
  outfile = fopen("archivo.txt", "w");
  table = fopen("table.txt", "w");
  if (!outfile) {
    printf("No se pudo abrir el archivo de salida");
    return 1;
  }
  if (!table) {
    printf("No se pudo abrir el archivo de tabla");
    return 1;
  }

  fprintf(outfile, "%-30s %s\n", "TOKEN", "LEXEMA");
  fprintf(outfile, "--------------------------------------\n");
	if ( argc > 0 ) yyin = fopen( argv[0], "r" ); 
	else yyin = stdin; yylex();

  for (int i = 0; i < idCount; i++) {
    fprintf(table, "%d: %s\n", idTable[i].id, idTable[i].lexema);
  }

  fclose(outfile);
  fclose(table);
  return 0;
}

int yywrap(){
return 1;
}
