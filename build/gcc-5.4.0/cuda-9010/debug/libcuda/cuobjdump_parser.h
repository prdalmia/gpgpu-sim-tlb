/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_CUOBJDUMP_AFS_CS_WISC_EDU_U_P_R_PREYESH_PRIVATE_HETEROSYNC_HETEROSYNC_CUDA_SYNCPRIMS_GPGPU_SIM_OCT_2019_BUILD_GCC_5_4_0_CUDA_9010_DEBUG_LIBCUDA_CUOBJDUMP_PARSER_H_INCLUDED
# define YY_CUOBJDUMP_AFS_CS_WISC_EDU_U_P_R_PREYESH_PRIVATE_HETEROSYNC_HETEROSYNC_CUDA_SYNCPRIMS_GPGPU_SIM_OCT_2019_BUILD_GCC_5_4_0_CUDA_9010_DEBUG_LIBCUDA_CUOBJDUMP_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int cuobjdump_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    H_SEPARATOR = 258,
    H_ARCH = 259,
    H_CODEVERSION = 260,
    H_PRODUCER = 261,
    H_HOST = 262,
    H_COMPILESIZE = 263,
    H_IDENTIFIER = 264,
    H_UNKNOWN = 265,
    H_COMPRESSED = 266,
    CODEVERSION = 267,
    STRING = 268,
    FILENAME = 269,
    DECIMAL = 270,
    PTXHEADER = 271,
    ELFHEADER = 272,
    PTXLINE = 273,
    ELFLINE = 274,
    SASSLINE = 275,
    IDENTIFIER = 276,
    NEWLINE = 277
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "cuobjdump.y" /* yacc.c:1909  */

	char* string_value;

#line 81 "/afs/cs.wisc.edu/u/p/r/preyesh/private/Heterosync/heterosync/cuda/syncPrims/gpgpu-sim_Oct_2019/build/gcc-5.4.0/cuda-9010/debug/libcuda/cuobjdump_parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE cuobjdump_lval;

int cuobjdump_parse (void);

#endif /* !YY_CUOBJDUMP_AFS_CS_WISC_EDU_U_P_R_PREYESH_PRIVATE_HETEROSYNC_HETEROSYNC_CUDA_SYNCPRIMS_GPGPU_SIM_OCT_2019_BUILD_GCC_5_4_0_CUDA_9010_DEBUG_LIBCUDA_CUOBJDUMP_PARSER_H_INCLUDED  */
