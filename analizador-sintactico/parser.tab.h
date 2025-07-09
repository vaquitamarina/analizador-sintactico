
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PR_INT = 258,
     PR_SHORT = 259,
     PR_LONG = 260,
     PR_FLOAT = 261,
     PR_DOUB = 262,
     PR_BOOL_C99 = 263,
     PR_CHAR = 264,
     PR_SIGN = 265,
     PR_UNSIGN = 266,
     PR_VOID = 267,
     PR_ENUM = 268,
     PR_GOTO = 269,
     PR_INLINE = 270,
     PR_REGIS = 271,
     PR_RESTRICT = 272,
     PR_BREAK = 273,
     PR_SWITCH = 274,
     PR_RETURN = 275,
     PR_SIZEOF = 276,
     PR_WHILE = 277,
     PR_FOR = 278,
     PR_STATIC = 279,
     PR_DEFAULT = 280,
     PR_CONST = 281,
     PR_CASE = 282,
     PR_CONTIN = 283,
     PR_IF = 284,
     PR_ELSE = 285,
     PR_DO = 286,
     PR_AUTO = 287,
     PR_EXTERN = 288,
     PR_STRUCT = 289,
     PR_TYPEDEF = 290,
     PR_TYPEOF = 291,
     PR_UNION = 292,
     PR_TYPEUNQ = 293,
     PR_VOLATILE = 294,
     PR_ALIGNAS = 295,
     PR_ALIGNOF = 296,
     PR_ATOMIC = 297,
     PR_BOOL_CPP = 298,
     PR_COMPLEX = 299,
     PR_GENERIC = 300,
     PR_IMAGINARY = 301,
     PR_NORETURN = 302,
     PR_STATIC_ASSERT = 303,
     PR_THREAD_LOCAL = 304,
     COMILLA_SIMPLE = 305,
     OP_ASIGNACION = 306,
     OP_COMPARATIVO = 307,
     OP_MENOR = 308,
     OP_MAYOR = 309,
     OP_MENOR_IGUAL = 310,
     OP_MAYOR_IGUAL = 311,
     OP_NOES_IGUAL = 312,
     OP_SUMA = 313,
     OP_RESTA = 314,
     OP_MULTIPLICACION = 315,
     OP_DIVISION = 316,
     OP_TERNARIO_IF = 317,
     OP_TERNARIO_ELSE = 318,
     OP_ASIGNACION_SUMA = 319,
     OP_ASIGNACION_RESTA = 320,
     OP_ASIGNACION_MULTIP = 321,
     OP_ASIGNACION_DIV = 322,
     OP_AND = 323,
     OP_OR = 324,
     OP_NEGACION = 325,
     OP_ASIGNACION_XOR = 326,
     OP_ASIGNACION_AND = 327,
     OP_ASIGNACION_OR = 328,
     OP_ASIGNACION_INCREMENTAR = 329,
     OP_ASIGNACION_DISMINUIR = 330,
     OP_MODULO = 331,
     OP_ASIGNACION_MOD = 332,
     OP_XOR = 333,
     OP_DIRECCION = 334,
     OP_MIEMBRO_PTR = 335,
     SE_PUNTO = 336,
     SE_PUNTO_COMA = 337,
     SE_COMA = 338,
     LLAVE_AP = 339,
     LLAVE_CE = 340,
     CORCHETE_AP = 341,
     CORCHETE_CE = 342,
     PARENTESIS_AP = 343,
     PARENTESIS_CE = 344,
     SALTO_LINEA = 345,
     TAB = 346,
     ESPACIO = 347,
     SE_HASH = 348,
     PR_INCLUDE = 349,
     PR_DEFINE = 350,
     HEADER = 351,
     IDENTIFICADOR = 352,
     LIT_INT = 353,
     LIT_FLOAT = 354,
     LIT_CHAR = 355,
     LIT_STRING = 356,
     INVALID_STRING = 357,
     DESCONOCIDO = 358
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


