%{
#include <stdio.h>
#include <string.h>

FILE *outfile;

void escribirArchivo(const char* token,const char* lexema) {
    fprintf(outfile, "%s: %s\n", token, lexema);
}
%}

DIGITO [0-9]
LETRA [a-zA-Z]

PR_INT             ["int"]
PR_SHORT           ["short"]
PR_LONG            ["long"]
PR_FLOAT           ["float"]
PR_DOUB            ["double"]
PR_LONGDO          ["long double"]
PR_BOOL_C99        ["bool"]
PR_CHAR            ["char"]
PR_SIGN            ["signed"]
PR_UNSIGN          ["unsigned"]
PR_VOID            ["void"]
PR_ENUM            ["enum"]
PR_GOTO            ["goto"]
PR_INLINE          ["inline"]
PR_REGIS           ["register"]
PR_RESTRICT        ["restrict"]
PR_BREAK           ["break"]
PR_SWITCH          ["switch"]
PR_RETURN          ["return"]
PR_SIZEOF          ["sizeof"]
PR_WHILE           ["while"]
PR_STATIC          ["static"]
PR_DEFAULT         ["default"]
PR_CONST           ["const"]
PR_CASE            ["case"]
PR_CONTIN          ["continue"]
PR_IF              ["if"]
PR_ELSE            ["else"]
PR_DO              ["do"]
PR_AUTO            ["auto"]
PR_EXTERN          ["extern"]
PR_STRUCT          ["struct"]
PR_TYPEDEF         ["typedef"]
PR_TYPEOF          ["typeof"]
PR_UNION           ["union"]
PR_TYPEUNQ         ["typeof_unqual"]
PR_VOLATILE        ["volatile"]
PR_ALIGNAS         ["_Alignas"]
PR_ALIGNOF         ["_Alignof"]
PR_ATOMIC          ["_Atomic"]
PR_BOOL_CPP        ["_Bool"]
PR_COMPLEX         ["_Complex"]
PR_GENERIC         ["_Generic"]
PR_IMAGINARY       ["_Imaginary"]
PR_NORETURN        ["_Noreturn"]
PR_STATIC_ASSERT   ["_Static_assert"]
PR_THREAD_LOCAL    ["_Thread_local"]

OP_ASIGNACION      ["="]
OP_COMPARATIVO     ["=="]
OP_MENOR           ["<"]
OP_MAYOR           [">"]
OP_MENOR_IGUAL     ["<="]
OP_MAYOR_IGUAL     [">="]
OP_NOES_IGUAL      ["!="]
OP_SUMA            ["+"]
OP_RESTA           ["-"]
OP_MULTIPLICACION  ["*"]
OP_DIVISION        ["/"]
OP_TERNARIO_IF     ["?"]
OP_TERNARIO_ELSE   [":"]
OP_ASIGNACION_SUMA ["+="]
OP_ASIGNACION_RESTA ["-="]
OP_ASIGNACION_MULTIP ["*="]
OP_ASIGNACION_DIV  ["/="]
OP_AND             ["&&"]
OP_OR              ["||"]
OP_NEGACION        ["!"]
OP_ASIGNACION_INCREMENTAR ["++"]
OP_ASIGNACION_DISMINUIR   ["--"]
OP_MODULO          ["%"]
OP_ASIGNACION_MOD  ["%="]
OP_XOR             ["^"]
OP_DIRECCION       ["&"]
OP_MIEMBRO_PTR     ["->"]

SE_PUNTO           ["."]
SE_PUNTO_COMA      [";"]

LLAVE_AP           ["{"]
LLAVE_CE           ["}"]
CORCHETE_AP        ["["]
CORCHETE_CE        ["]"]
PARENTESIS_AP      ["("]
PARENTESIS_CE      [")"]

COMENTARIO_LINEA   ["//"]
COMENTARIO_AP      ["/*"]
COMENTARIO_CE      ["*/"]

SALTO_LINEA        ["\n"]
TAB                ["\t"]
LIT_NUMERAL        ["#"]

%%

{DIGITO}   { escribirArchivo("Digito", yytext); }
{LETRA}   { escribirArchivo("Letra", yytext); }

. { escribirArchivo("Caracter no reconocido", yytext); }
%%

int main(int argc, char **argv) {
  ++argv,--argc; /* se salta el nombre del programa*/
  outfile = fopen("archivo.txt", "w");
  if (!outfile) {
        printf("No se pudo abrir el archivo de salida");
        return 1;
  }
	if ( argc > 0 ) yyin = fopen( argv[0], "r" ); 
	else yyin = stdin; yylex();
  fclose(outfile);
  return 0;
}

int yywrap(){
return 1;
}
