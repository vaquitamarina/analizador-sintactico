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
     PR_STATIC = 278,
     PR_DEFAULT = 279,
     PR_CONST = 280,
     PR_CASE = 281,
     PR_CONTIN = 282,
     PR_IF = 283,
     PR_ELSE = 284,
     PR_DO = 285,
     PR_AUTO = 286,
     PR_EXTERN = 287,
     PR_STRUCT = 288,
     PR_TYPEDEF = 289,
     PR_TYPEOF = 290,
     PR_UNION = 291,
     PR_TYPEUNQ = 292,
     PR_VOLATILE = 293,
     PR_ALIGNAS = 294,
     PR_ALIGNOF = 295,
     PR_ATOMIC = 296,
     PR_BOOL_CPP = 297,
     PR_COMPLEX = 298,
     PR_GENERIC = 299,
     PR_IMAGINARY = 300,
     PR_NORETURN = 301,
     PR_STATIC_ASSERT = 302,
     PR_THREAD_LOCAL = 303,
     COMILLA_SIMPLE = 304,
     OP_ASIGNACION = 305,
     OP_COMPARATIVO = 306,
     OP_MENOR = 307,
     OP_MAYOR = 308,
     OP_MENOR_IGUAL = 309,
     OP_MAYOR_IGUAL = 310,
     OP_NOES_IGUAL = 311,
     OP_SUMA = 312,
     OP_RESTA = 313,
     OP_MULTIPLICACION = 314,
     OP_DIVISION = 315,
     OP_TERNARIO_IF = 316,
     OP_TERNARIO_ELSE = 317,
     OP_ASIGNACION_SUMA = 318,
     OP_ASIGNACION_RESTA = 319,
     OP_ASIGNACION_MULTIP = 320,
     OP_ASIGNACION_DIV = 321,
     OP_AND = 322,
     OP_OR = 323,
     OP_NEGACION = 324,
     OP_ASIGNACION_INCREMENTAR = 325,
     OP_ASIGNACION_DISMINUIR = 326,
     OP_MODULO = 327,
     OP_ASIGNACION_MOD = 328,
     OP_XOR = 329,
     OP_DIRECCION = 330,
     OP_MIEMBRO_PTR = 331,
     OP_IZQ = 332,
     OP_DER = 333,
     SE_PUNTO = 334,
     SE_PUNTO_COMA = 335,
     SE_COMA = 336,
     LLAVE_AP = 337,
     LLAVE_CE = 338,
     CORCHETE_AP = 339,
     CORCHETE_CE = 340,
     PARENTESIS_AP = 341,
     PARENTESIS_CE = 342,
     SALTO_LINEA = 343,
     TAB = 344,
     ESPACIO = 345,
     SE_HASH = 346,
     PR_INCLUDE = 347,
     PR_DEFINE = 348,
     HEADER = 349,
     IDENTIFICADOR = 350,
     LIT_INT = 351,
     LIT_FLOAT = 352,
     LIT_CHAR = 353,
     LIT_STRING = 354,
     INVALID_STRING = 355,
     DESCONOCIDO = 356
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
#define PR_STATIC 278
#define PR_DEFAULT 279
#define PR_CONST 280
#define PR_CASE 281
#define PR_CONTIN 282
#define PR_IF 283
#define PR_ELSE 284
#define PR_DO 285
#define PR_AUTO 286
#define PR_EXTERN 287
#define PR_STRUCT 288
#define PR_TYPEDEF 289
#define PR_TYPEOF 290
#define PR_UNION 291
#define PR_TYPEUNQ 292
#define PR_VOLATILE 293
#define PR_ALIGNAS 294
#define PR_ALIGNOF 295
#define PR_ATOMIC 296
#define PR_BOOL_CPP 297
#define PR_COMPLEX 298
#define PR_GENERIC 299
#define PR_IMAGINARY 300
#define PR_NORETURN 301
#define PR_STATIC_ASSERT 302
#define PR_THREAD_LOCAL 303
#define COMILLA_SIMPLE 304
#define OP_ASIGNACION 305
#define OP_COMPARATIVO 306
#define OP_MENOR 307
#define OP_MAYOR 308
#define OP_MENOR_IGUAL 309
#define OP_MAYOR_IGUAL 310
#define OP_NOES_IGUAL 311
#define OP_SUMA 312
#define OP_RESTA 313
#define OP_MULTIPLICACION 314
#define OP_DIVISION 315
#define OP_TERNARIO_IF 316
#define OP_TERNARIO_ELSE 317
#define OP_ASIGNACION_SUMA 318
#define OP_ASIGNACION_RESTA 319
#define OP_ASIGNACION_MULTIP 320
#define OP_ASIGNACION_DIV 321
#define OP_AND 322
#define OP_OR 323
#define OP_NEGACION 324
#define OP_ASIGNACION_INCREMENTAR 325
#define OP_ASIGNACION_DISMINUIR 326
#define OP_MODULO 327
#define OP_ASIGNACION_MOD 328
#define OP_XOR 329
#define OP_DIRECCION 330
#define OP_MIEMBRO_PTR 331
#define OP_IZQ 332
#define OP_DER 333
#define SE_PUNTO 334
#define SE_PUNTO_COMA 335
#define SE_COMA 336
#define LLAVE_AP 337
#define LLAVE_CE 338
#define CORCHETE_AP 339
#define CORCHETE_CE 340
#define PARENTESIS_AP 341
#define PARENTESIS_CE 342
#define SALTO_LINEA 343
#define TAB 344
#define ESPACIO 345
#define SE_HASH 346
#define PR_INCLUDE 347
#define PR_DEFINE 348
#define HEADER 349
#define IDENTIFICADOR 350
#define LIT_INT 351
#define LIT_FLOAT 352
#define LIT_CHAR 353
#define LIT_STRING 354
#define INVALID_STRING 355
#define DESCONOCIDO 356




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

