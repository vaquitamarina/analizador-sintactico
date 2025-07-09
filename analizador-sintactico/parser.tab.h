/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
/* Tokens.  */
#define PR_INT 258
#define PR_SHORT 259
#define PR_LONG 260
#define PR_FLOAT 261
#define PR_DOUB 262
#define PR_BOOL_C99 263
#define PR_CHAR 264
#define PR_SIGN 265
#define PR_UNSIGN 266
#define PR_VOID 267
#define PR_ENUM 268
#define PR_GOTO 269
#define PR_INLINE 270
#define PR_REGIS 271
#define PR_RESTRICT 272
#define PR_BREAK 273
#define PR_SWITCH 274
#define PR_RETURN 275
#define PR_SIZEOF 276
#define PR_WHILE 277
#define PR_FOR 278
#define PR_STATIC 279
#define PR_DEFAULT 280
#define PR_CONST 281
#define PR_CASE 282
#define PR_CONTIN 283
#define PR_IF 284
#define PR_ELSE 285
#define PR_DO 286
#define PR_AUTO 287
#define PR_EXTERN 288
#define PR_STRUCT 289
#define PR_TYPEDEF 290
#define PR_TYPEOF 291
#define PR_UNION 292
#define PR_TYPEUNQ 293
#define PR_VOLATILE 294
#define PR_ALIGNAS 295
#define PR_ALIGNOF 296
#define PR_ATOMIC 297
#define PR_BOOL_CPP 298
#define PR_COMPLEX 299
#define PR_GENERIC 300
#define PR_IMAGINARY 301
#define PR_NORETURN 302
#define PR_STATIC_ASSERT 303
#define PR_THREAD_LOCAL 304
#define COMILLA_SIMPLE 305
#define OP_ASIGNACION 306
#define OP_COMPARATIVO 307
#define OP_MENOR 308
#define OP_MAYOR 309
#define OP_MENOR_IGUAL 310
#define OP_MAYOR_IGUAL 311
#define OP_NOES_IGUAL 312
#define OP_SUMA 313
#define OP_RESTA 314
#define OP_MULTIPLICACION 315
#define OP_DIVISION 316
#define OP_TERNARIO_IF 317
#define OP_TERNARIO_ELSE 318
#define OP_ASIGNACION_SUMA 319
#define OP_ASIGNACION_RESTA 320
#define OP_ASIGNACION_MULTIP 321
#define OP_ASIGNACION_DIV 322
#define OP_AND 323
#define OP_OR 324
#define OP_NEGACION 325
#define OP_ASIGNACION_XOR 326
#define OP_ASIGNACION_AND 327
#define OP_ASIGNACION_OR 328
#define OP_ASIGNACION_INCREMENTAR 329
#define OP_ASIGNACION_DISMINUIR 330
#define OP_MODULO 331
#define OP_ASIGNACION_MOD 332
#define OP_XOR 333
#define OP_DIRECCION 334
#define OP_MIEMBRO_PTR 335
#define SE_PUNTO 336
#define SE_PUNTO_COMA 337
#define SE_COMA 338
#define LLAVE_AP 339
#define LLAVE_CE 340
#define CORCHETE_AP 341
#define CORCHETE_CE 342
#define PARENTESIS_AP 343
#define PARENTESIS_CE 344
#define SALTO_LINEA 345
#define TAB 346
#define ESPACIO 347
#define SE_HASH 348
#define PR_INCLUDE 349
#define PR_DEFINE 350
#define HEADER 351
#define IDENTIFICADOR 352
#define LIT_INT 353
#define LIT_FLOAT 354
#define LIT_CHAR 355
#define LIT_STRING 356
#define INVALID_STRING 357
#define DESCONOCIDO 358




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

