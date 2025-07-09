%{
    #include <stdio.h>
    #include <stdlib.h>

    extern int yylex(void);
    extern char *yytext;
    extern FILE *yyin;
    extern int yylineno;
    void yyerror(char *s);
%}

%token PR_INT 
%token PR_SHORT PR_LONG PR_FLOAT PR_DOUB PR_BOOL_C99 PR_CHAR PR_SIGN PR_UNSIGN
%token PR_VOID PR_ENUM PR_GOTO PR_INLINE PR_REGIS PR_RESTRICT PR_BREAK PR_SWITCH
%token PR_RETURN PR_SIZEOF PR_WHILE PR_FOR PR_STATIC PR_DEFAULT PR_CONST PR_CASE PR_CONTIN
%token PR_IF PR_ELSE PR_DO PR_AUTO PR_EXTERN PR_STRUCT PR_TYPEDEF PR_TYPEOF PR_UNION
%token PR_TYPEUNQ PR_VOLATILE PR_ALIGNAS PR_ALIGNOF PR_ATOMIC PR_BOOL_CPP
%token PR_COMPLEX PR_GENERIC PR_IMAGINARY PR_NORETURN PR_STATIC_ASSERT PR_THREAD_LOCAL

%token COMILLA_SIMPLE

%token OP_ASIGNACION OP_COMPARATIVO OP_MENOR OP_MAYOR OP_MENOR_IGUAL OP_MAYOR_IGUAL
%token OP_NOES_IGUAL OP_SUMA OP_RESTA OP_MULTIPLICACION OP_DIVISION
%token OP_TERNARIO_IF OP_TERNARIO_ELSE OP_ASIGNACION_SUMA OP_ASIGNACION_RESTA
%token OP_ASIGNACION_MULTIP OP_ASIGNACION_DIV OP_AND OP_OR OP_NEGACION
%token OP_ASIGNACION_XOR OP_ASIGNACION_AND OP_ASIGNACION_OR
%token OP_ASIGNACION_INCREMENTAR OP_ASIGNACION_DISMINUIR OP_MODULO OP_ASIGNACION_MOD
%token OP_XOR OP_DIRECCION OP_MIEMBRO_PTR OP_IZQ OP_DER

%token SE_PUNTO 
%token SE_PUNTO_COMA 
%token SE_COMA
%token LLAVE_AP LLAVE_CE CORCHETE_AP CORCHETE_CE PARENTESIS_AP PARENTESIS_CE

%token SALTO_LINEA TAB ESPACIO SE_HASH

%token PR_INCLUDE PR_DEFINE

%token HEADER 
%token IDENTIFICADOR

%token LIT_INT LIT_FLOAT LIT_CHAR LIT_STRING INVALID_STRING

%token DESCONOCIDO

%start inicio

%%

inicio:
    directivas_preprocesador_op lista_declaraciones
    ;

directivas_preprocesador_op:
    /* vacío */
    | directivas_preprocesador_op directiva_preprocesador
    ;

directiva_preprocesador:
    PR_INCLUDE HEADER
    | PR_DEFINE IDENTIFICADOR LIT_INT
    ;

lista_declaraciones:
    declaracion
    | declaracion lista_declaraciones
    ;

declaracion:
    declaracion_variable
    | declaracion_funcion
    ;

declaracion_variable:
    tipo lista_identificadores SE_PUNTO_COMA
    | tipo asignacion SE_PUNTO_COMA
    ;

lista_identificadores:
    identificador_op
    | identificador_op SE_COMA lista_identificadores
    ;

identificador_op:
    IDENTIFICADOR
    | OP_MULTIPLICACION identificador_op
    ; 

declaracion_funcion:
    tipo identificador_op PARENTESIS_AP lista_parametros PARENTESIS_CE bloque
    ;

lista_parametros:
    /* No hay parametros */
    | parametro
    ;    

parametro:
    tipo identificador_op
    | tipo identificador_op SE_COMA parametro
    ;

lista_parametros_op:
    /* No hay parametros */
    | parametro_op
    ;

parametro_op:
    identificador_op
    | expresion;
    | identificador_op SE_COMA parametro_op
    ;


tipo:
    PR_INT
    | PR_SHORT
    | PR_LONG
    | PR_FLOAT
    | PR_DOUB
    | PR_BOOL_C99
    | PR_CHAR
    ;

bloque:
    LLAVE_AP lista_sentencias LLAVE_CE
    ;

lista_sentencias:
    /* No hay sentencias */
    | sentencia lista_sentencias
    ;

sentencia:
    declaracion_variable
    | asignacion SE_PUNTO_COMA
    | sentencia_if
    | sentencia_while
    | sentencia_return
    | sentencia_for
    | sentencia_switch
    | sentencia_funcion
    | PR_BREAK SE_PUNTO_COMA
    ;

asignacion:
    IDENTIFICADOR OP_ASIGNACION expresion 
    | IDENTIFICADOR OP_ASIGNACION_INCREMENTAR
    | IDENTIFICADOR OP_ASIGNACION_DISMINUIR
    | IDENTIFICADOR OP_MULTIPLICACION OP_ASIGNACION expresion
    | IDENTIFICADOR OP_ASIGNACION_SUMA expresion
    | IDENTIFICADOR OP_ASIGNACION_RESTA expresion
    | IDENTIFICADOR OP_ASIGNACION_DIV expresion
    | IDENTIFICADOR OP_ASIGNACION_MOD expresion
    | IDENTIFICADOR OP_ASIGNACION_AND expresion
    | IDENTIFICADOR OP_ASIGNACION_OR expresion
    | IDENTIFICADOR OP_ASIGNACION_XOR expresion
    ;

expresion:
    IDENTIFICADOR
    | LIT_INT
    | LIT_FLOAT
    | LIT_CHAR
    | LIT_STRING
    | expresion OP_SUMA expresion
    | expresion OP_RESTA expresion
    | expresion OP_MULTIPLICACION expresion
    | expresion OP_DIVISION expresion
    | PARENTESIS_AP expresion PARENTESIS_CE
    ;

condicion:
    expresion OP_COMPARATIVO expresion
    | expresion OP_MAYOR expresion
    | expresion OP_MENOR expresion
    | expresion OP_MAYOR_IGUAL expresion
    | expresion OP_MENOR_IGUAL expresion
    | expresion OP_NOES_IGUAL expresion
    | expresion OP_AND expresion
    | expresion OP_OR expresion
    | expresion OP_XOR expresion
    ;

sentencia_if:
    PR_IF PARENTESIS_AP condicion PARENTESIS_CE bloque
    | PR_IF PARENTESIS_AP condicion PARENTESIS_CE bloque PR_ELSE bloque
    ;

sentencia_while:
    PR_WHILE PARENTESIS_AP condicion PARENTESIS_CE bloque
    | PR_DO bloque PR_WHILE PARENTESIS_AP condicion PARENTESIS_CE SE_PUNTO_COMA
    ;

sentencia_return:
    PR_RETURN expresion SE_PUNTO_COMA
    ;

sentencia_for:
    PR_FOR PARENTESIS_AP asignacion SE_PUNTO_COMA condicion SE_PUNTO_COMA asignacion PARENTESIS_CE bloque
    | PR_FOR PARENTESIS_AP tipo asignacion SE_PUNTO_COMA condicion SE_PUNTO_COMA asignacion PARENTESIS_CE bloque
    ;

sentencia_switch:
    PR_SWITCH PARENTESIS_AP expresion PARENTESIS_CE bloque
    ;

sentencia_funcion:
    IDENTIFICADOR PARENTESIS_AP lista_parametros_op PARENTESIS_CE SE_PUNTO_COMA
%%

void yyerror(char *msg) {
    fprintf(stderr, "Error de sintaxis en la línea %d: %s\n", yylineno, msg);
}

int main(int argc, char **argv){
    if(argc > 1) {
        yyin = fopen(argv[1], "rt");
    }
    else {
        yyin = stdin;
    }
    yyparse();
    return 0;
}

