%{
#include <stdio.h>
#include <string.h> // Para strcmp

// Definición de los tipos de token
// En una aplicación más grande, esto podría estar en un archivo .h separado
// y ser generado por Bison/Yacc si usas un parser.
enum TokenType {
    TOKEN_ERROR = 0, // Para errores o tokens no reconocidos

    // Directivas de Preprocesador
    TOKEN_PREPROC_INCLUDE,
    TOKEN_PREPROC_DEFINE,
    TOKEN_HASH, // El símbolo '#'

    // Palabras Clave
    TOKEN_KEYWORD_INT,
    TOKEN_KEYWORD_CHAR,
    TOKEN_KEYWORD_VOID, // Añadido para generalidad
    TOKEN_KEYWORD_STRUCT,
    TOKEN_KEYWORD_IF,
    TOKEN_KEYWORD_ELSE,
    TOKEN_KEYWORD_WHILE,
    TOKEN_KEYWORD_RETURN,

    // Identificadores
    TOKEN_IDENTIFIER,

    // Literales
    TOKEN_INTEGER_LITERAL,
    TOKEN_CHAR_LITERAL,
    TOKEN_STRING_LITERAL,

    // Operadores
    TOKEN_OPERATOR_PLUS,
    TOKEN_OPERATOR_ASSIGN,
    TOKEN_OPERATOR_GT,      // >
    TOKEN_OPERATOR_LT,      // <
    TOKEN_OPERATOR_MEMBER_ACCESS, // .

    // Puntuación
    TOKEN_LPAREN,    // (
    TOKEN_RPAREN,    // )
    TOKEN_LBRACE,    // {
    TOKEN_RBRACE,    // }
    TOKEN_SEMICOLON, // ;
    TOKEN_COMMA,     // ,

    // Otros
    TOKEN_HEADER_NAME, // Para nombres como <stdio.h>

    TOKEN_EOF // Fin de archivo
};

// Función auxiliar para imprimir el nombre del token (opcional, para mejor visualización)
const char* token_to_string(enum TokenType token) {
    switch (token) {
        case TOKEN_PREPROC_INCLUDE: return "PREPROC_INCLUDE";
        case TOKEN_PREPROC_DEFINE: return "PREPROC_DEFINE";
        case TOKEN_HASH: return "HASH";
        case TOKEN_KEYWORD_INT: return "KEYWORD_INT";
        case TOKEN_KEYWORD_CHAR: return "KEYWORD_CHAR";
        case TOKEN_KEYWORD_VOID: return "KEYWORD_VOID";
        case TOKEN_KEYWORD_STRUCT: return "KEYWORD_STRUCT";
        case TOKEN_KEYWORD_IF: return "KEYWORD_IF";
        case TOKEN_KEYWORD_ELSE: return "KEYWORD_ELSE";
        case TOKEN_KEYWORD_WHILE: return "KEYWORD_WHILE";
        case TOKEN_KEYWORD_RETURN: return "KEYWORD_RETURN";
        case TOKEN_IDENTIFIER: return "IDENTIFIER";
        case TOKEN_INTEGER_LITERAL: return "INTEGER_LITERAL";
        case TOKEN_CHAR_LITERAL: return "CHAR_LITERAL";
        case TOKEN_STRING_LITERAL: return "STRING_LITERAL";
        case TOKEN_OPERATOR_PLUS: return "OPERATOR_PLUS";
        case TOKEN_OPERATOR_ASSIGN: return "OPERATOR_ASSIGN";
        case TOKEN_OPERATOR_GT: return "OPERATOR_GT";
        case TOKEN_OPERATOR_LT: return "OPERATOR_LT";
        case TOKEN_OPERATOR_MEMBER_ACCESS: return "OPERATOR_MEMBER_ACCESS";
        case TOKEN_LPAREN: return "LPAREN";
        case TOKEN_RPAREN: return "RPAREN";
        case TOKEN_LBRACE: return "LBRACE";
        case TOKEN_RBRACE: return "RBRACE";
        case TOKEN_SEMICOLON: return "SEMICOLON";
        case TOKEN_COMMA: return "COMMA";
        case TOKEN_HEADER_NAME: return "HEADER_NAME";
        case TOKEN_EOF: return "EOF";
        default: return "ERROR/UNKNOWN";
    }
}

%}

/* Definiciones regulares */
DIGIT            [0-9]
LETTER           [a-zA-Z_] /* Permitimos guion bajo en identificadores */
IDENTIFIER_CHAR  [a-zA-Z0-9_]

/* Expresiones regulares para reconocer nombres de cabecera como <stdio.h> */
/* Esto es una simplificación. Un preprocesador real es más complejo. */
/* Estamos asumiendo que después de #include, el siguiente <...> es una cabecera. */
/* Para una mejor gestión, se usarían estados de inicio (start conditions). */
HEADER_NAME      "<"[^> \t\n]+">"

%%

"/*"([^*]|(\*+[^*/]))*\*+"/"  { /* Ignorar comentario multilinea */ printf("TOKEN: COMMENT_MULTILINE, LEXEMA: %s\n", yytext); }
"//".* { /* Ignorar comentario de una linea */ printf("TOKEN: COMMENT_SINGLELINE, LEXEMA: %s\n", yytext); }

"#include"     { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_PREPROC_INCLUDE), yytext); return TOKEN_PREPROC_INCLUDE; }
"#define"      { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_PREPROC_DEFINE), yytext); return TOKEN_PREPROC_DEFINE; }
"#"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_HASH), yytext); return TOKEN_HASH; } /* Si '#' aparece solo */

"int"          { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_INT), yytext); return TOKEN_KEYWORD_INT; }
"char"         { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_CHAR), yytext); return TOKEN_KEYWORD_CHAR; }
"void"         { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_VOID), yytext); return TOKEN_KEYWORD_VOID; }
"struct"       { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_STRUCT), yytext); return TOKEN_KEYWORD_STRUCT; }
"if"           { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_IF), yytext); return TOKEN_KEYWORD_IF; }
"else"         { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_ELSE), yytext); return TOKEN_KEYWORD_ELSE; }
"while"        { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_WHILE), yytext); return TOKEN_KEYWORD_WHILE; }
"return"       { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_KEYWORD_RETURN), yytext); return TOKEN_KEYWORD_RETURN; }

{LETTER}{IDENTIFIER_CHAR}* { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_IDENTIFIER), yytext); return TOKEN_IDENTIFIER; }

{DIGIT}+       { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_INTEGER_LITERAL), yytext); return TOKEN_INTEGER_LITERAL; }
"'"(\\.|[^\\'])"'" { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_CHAR_LITERAL), yytext); return TOKEN_CHAR_LITERAL; }
"\""(\\.|[^\\"])*"\"" { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_STRING_LITERAL), yytext); return TOKEN_STRING_LITERAL; }

"+"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_OPERATOR_PLUS), yytext); return TOKEN_OPERATOR_PLUS; }
"="            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_OPERATOR_ASSIGN), yytext); return TOKEN_OPERATOR_ASSIGN; }
">"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_OPERATOR_GT), yytext); return TOKEN_OPERATOR_GT; }
"<"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_OPERATOR_LT), yytext); return TOKEN_OPERATOR_LT; }
"."            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_OPERATOR_MEMBER_ACCESS), yytext); return TOKEN_OPERATOR_MEMBER_ACCESS; }

"("            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_LPAREN), yytext); return TOKEN_LPAREN; }
")"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_RPAREN), yytext); return TOKEN_RPAREN; }
"{"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_LBRACE), yytext); return TOKEN_LBRACE; }
"}"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_RBRACE), yytext); return TOKEN_RBRACE; }
";"            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_SEMICOLON), yytext); return TOKEN_SEMICOLON; }
","            { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_COMMA), yytext); return TOKEN_COMMA; }

{HEADER_NAME}  { printf("TOKEN: %s, LEXEMA: %s\n", token_to_string(TOKEN_HEADER_NAME), yytext); return TOKEN_HEADER_NAME; }

[ \t\n\r]+     { /* Ignorar espacios en blanco, tabulaciones, saltos de linea */ }

.              { printf("Error léxico: Caracter no reconocido '%s'\n", yytext); return TOKEN_ERROR; }

%%

int yywrap(void) {
    return 1; // Indica que no hay más archivos de entrada
}

// Función main para probar el analizador léxico
int main(int argc, char *argv[]) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("Error al abrir el archivo");
            return 1;
        }
        yyin = file; // Flex leerá de este archivo
    }
    // Si no se proporciona un archivo, Flex leerá de stdin (entrada estándar)

    printf("Iniciando análisis léxico...\n");
    printf("------------------------------------\n");
    enum TokenType token_val;
    // yylex() devuelve 0 al final del archivo o cuando se retorna 0 explícitamente.
    // Aquí, estamos usando los valores del enum, así que continuaremos mientras no sea TOKEN_EOF
    // o un error que detenga el análisis. La forma tradicional es `while(yylex() != 0)`
    // si yylex retorna el token directamente como un int.
    while ((token_val = yylex())) {
        // La impresión del token ya se hace dentro de las reglas para este ejemplo.
        // Si no lo hicieras allí, lo harías aquí.
        // printf("Token: %s, Lexema: %s\n", token_to_string(token_val), yytext);
        if (token_val == TOKEN_ERROR) {
            // Podrías decidir detenerte en el primer error o continuar.
        }
    }
    printf("------------------------------------\n");
    printf("Análisis léxico completado.\n");

    if (yyin != stdin && yyin != NULL) { // Asegúrate de que yyin no es stdin antes de cerrarlo
        fclose(yyin);
    }
    return 0;
}
