/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *              C E D A R
 *          S O L U T I O N S       "Software done right."
 *           S O F T W A R E
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Copyright (c) 2000-2004.2007,2013,2014 Kenneth J. Pronovici.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License,
 * Version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Copies of the GNU General Public License are available from
 * the Free Software Foundation website, http://www.gnu.org/.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Author   : Kenneth J. Pronovici <pronovic@ieee.org>
 * Language : ANSI C
 * Project  : banner
 * Revision : $Id: banner.c 387 2004-04-17 21:23:50Z pronovic $
 * Purpose  : Main routine and function definitions.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/********************
  File documentation
 ********************/

/** @file
  * @author Kenneth J. Pronovici
  * @brief  Main routine and function definitions.
  */


/***********************************
  Doxygen "main page" documentation 
 ***********************************/

/** @mainpage Banner Program
  *
  * I've used a lot of different UN*X systems, and all of them, as far as I can
  * tell, seem to provide a "banner" program that prints some short string in
  * large letters.  Except Linux.  When I wrote this, I couldn't seem to find
  * something like this anywhere (well, there is @c /usr/games/banner, but that's
  * different than a typical banner implementation).  So, since it was such a
  * simplistic thing to do, I wrote it myself.
  *
  * The 'banner' program prints a "banner" on the screen that corresponds to the
  * first X characters of a string entered on the command line. 
  *
  * Say we're printing "AB"... we make one call per character and build an array
  * of strings from the top down.  The first time through, we'll have this:
  *
    @verbatim

      banner[0] = "   #     "
      banner[1] = "  # #    "
      banner[2] = " #   #   "
      banner[3] = "#     #  "
      banner[4] = "#######  "
      banner[5] = "#     #  "
      banner[6] = "#     #  "
 
    @endverbatim
  *
  * the second time through, we'll have this:
  *
    @verbatim
      
      banner[0] = "   #     ######   "
      banner[1] = "  # #    #     #  "
      banner[2] = " #   #   #     #  "
      banner[3] = "#     #  ######   "
      banner[4] = "#######  #     #  "
      banner[5] = "#     #  #     #  "
      banner[6] = "#     #  ######   "

    @endverbatim
  *
  * i.e. the first line of the "B" array is concatenated onto the first line of
  * the "A" array, the second onto the second, etc.  to make the complete
  * banner, line by line from top to bottom.  The string is then printed top to
  * bottom.
  *
  * It's pretty configurable on a compile-time basis.  The letter definitions
  * can be changed by changing the array definitions in "letters.h".  The
  * defined letter height, the number of spaces after each letter, the max
  * width of a banner to be printed, etc. are all controlled from in there.
  * The only real restriction is that all of the letters have to be the same
  * height.  Note, however, that there is no facility for printing lower-case
  * letters - as far as I can remember, Solaris and AIX don't have that, and I
  * didn't feel like putting it in.  Adding it would be easy, if you want to
  * come up with letter definitions for the lower-case letters.
  *
  * I could have made the add_to_banner() function prettier if I wanted to just
  * key off of ASCII value rather than having hardcoded names for each
  * letter/character.  I decided that keying off ASCII values would not be
  * flexible enough.  If you want to optimize it, feel free, and then write me
  * and let me know.
  *
  * @author Kenneth J. Pronovici
  */


/****************
  Included files
 ****************/

#include "config.h"

#include <stdio.h>

#ifdef HAVE_STDLIB_H
   #include <stdlib.h>
#endif

#ifdef HAVE_STRING_H
   #include <string.h>
#endif

#include <termios.h>
#include <sys/ioctl.h>

#include "letters.h"


/******************
  Macro defintions
 *******************/

/** Initial size of banner arrays */
#define INITIAL_SIZE       (10)

/** Default print width (assumed terminal width) */
#define DEFAULT_PRINTWIDTH (80)

/** Normal exit status */
#define NORMAL_EXIT        (0)

/** Error exit status */
#define ERROR_EXIT         (-1)

/** URL of GNU's website */
#define GNU_URL            ("http://www.gnu.org/")

/** Copyright year range */
#define COPYRIGHT_DATE     ("2000-2004,2007,2013")

/** Name of author */
#define AUTHOR             ("Kenneth J. Pronovici")

/** Email address of author */
#define AUTHOR_EMAIL       ("pronovic@ieee.org")


/************************
  init_banner subroutine
 ************************/
/** Does initial memory allocation and clears banner buffer. 
  * Note: any memory previously allocated to this buffer will be lost (leaked).
  * @param banner    Banner buffer to be initialized.
  */

static void init_banner(char **banner)
{
   int i = 0;
 
   for(i=0; i<LETTER_HEIGHT; i++)
   {
      banner[i] = (char *)calloc(1, INITIAL_SIZE*sizeof(char));
   }
}


/************************
  free_banner subroutine
 ************************/
/** Frees memory allocated by init_banner().
  * The array itself is not freed, only the allocations for the individual elements.
  * @param banner    Banner buffer to be freed.
  */

static void free_banner(char **banner)
{
   int i = 0;
 
   for(i=0; i<LETTER_HEIGHT; i++)
   {
      if(banner[i] != NULL)
      {
         free(banner[i]);
         banner[i] = NULL;
      }
   }
}


/******************************
  convert_to_upper subroutine
 ******************************/
/** Destructively converts a string to all UPPER-CASE letters. 
  * @param string    String to be converted.
  */

static void convert_to_upper(char *string)
{
   int i = 0;
   
   for(i=0; i<strlen(string); i++)
   {
      string[i] = toupper(string[i]);
   }
}


/*******************************
  convert_whitespace subroutine
 *******************************/
/** Destructively converts all whitespace characters to space characters.
  * @param string    String to be converted.
  */

static void convert_whitespace(char *string)
{
   int i = 0;
   
   for(i=0; i<strlen(string); i++)
   {
      if(isspace(string[i]))
      {
         string[i] = ' ';
      }
   }
}


/**************************
  add_to_banner subroutine
 **************************/
/** Tacks a letter into a banner buffer.
  * @param banner    Banner buffer
  * @param height    Height of letters
  * @param space     Width (in characters) of space between letters
  * @param letter    Letter to be added to the banner buffer
  * @param maxwidth  Maximum width of any one banner line
  * @return Boolean true (1) if output was truncated, boolean false (0) otherwise.
  */

static int add_to_banner(char **banner, int height, int space, char letter, int maxwidth)
{
   int i = 0;
   int j = 0;
   char *previous = NULL;
   char **working_char = NULL;
   int new_length = 0;

   switch(letter)
   {
   case 'A':
      working_char = char_a;
      break;
   case 'B':
      working_char = char_b;
      break;
   case 'C':
      working_char = char_c;
      break;
   case 'D':
      working_char = char_d;
      break;
   case 'E':
      working_char = char_e;
      break;
   case 'F':
      working_char = char_f;
      break;
   case 'G':
      working_char = char_g;
      break;
   case 'H':
      working_char = char_h;
      break;
   case 'I':
      working_char = char_i;
      break;
   case 'J':
      working_char = char_j;
      break;
   case 'K':
      working_char = char_k;
      break;
   case 'L':
      working_char = char_l;
      break;
   case 'M':
      working_char = char_m;
      break;
   case 'N':
      working_char = char_n;
      break;
   case 'O':
      working_char = char_o;
      break;
   case 'P':
      working_char = char_p;
      break;
   case 'Q':
      working_char = char_q;
      break;
   case 'R':
      working_char = char_r;
      break;
   case 'S':
      working_char = char_s;
      break;
   case 'T':
      working_char = char_t;
      break;
   case 'U':
      working_char = char_u;
      break;
   case 'V':
      working_char = char_v;
      break;
   case 'W':
      working_char = char_w;
      break;
   case 'X':
      working_char = char_x;
      break;
   case 'Y':
      working_char = char_y;
      break;
   case 'Z':
      working_char = char_z;
      break;
   case '0':
      working_char = char_0;
      break;
   case '1':
      working_char = char_1;
      break;
   case '2':
      working_char = char_2;
      break;
   case '3':
      working_char = char_3;
      break;
   case '4':
      working_char = char_4;
      break;
   case '5':
      working_char = char_5;
      break;
   case '6':
      working_char = char_6;
      break;
   case '7':
      working_char = char_7;
      break;
   case '8':
      working_char = char_8;
      break;
   case '9':
      working_char = char_9;
      break;
   case '#':
      working_char = char_hash;
      break;
   case '~':
      working_char = char_tild;
      break;
   case '!':
      working_char = char_excl;
      break;
   case '@':
      working_char = char_atsg;
      break;
   case '$':
      working_char = char_dolr;
      break;
   case '%':
      working_char = char_prct;
      break;
   case '^':
      working_char = char_crrt;
      break;
   case '&':
      working_char = char_ampr;
      break;
   case '*':
      working_char = char_star;
      break;
   case ')':
      working_char = char_rpar;
      break;
   case '(':
      working_char = char_lpar;
      break;
   case '_':
      working_char = char_undr;
      break;
   case '+':
      working_char = char_plus;
      break;
   case '=':
      working_char = char_equl;
      break;
   case '}':
      working_char = char_rbrc;
      break;
   case '{':
      working_char = char_lbrc;
      break;
   case ']':
      working_char = char_rbrk;
      break;
   case '[':
      working_char = char_lbrk;
      break;
   case '|':
      working_char = char_pipe;
      break;
   case '\\':
      working_char = char_lsls;
      break;
   case ':':
      working_char = char_coln;
      break;
   case ';':
      working_char = char_scln;
      break;
   case '\"':
      working_char = char_quot;
      break;
   case '\'':
      working_char = char_squt;
      break;
   case '`':
      working_char = char_btck;
      break;
   case '>':
      working_char = char_rarw;
      break;
   case '<':
      working_char = char_larw;
      break;
   case '.':
      working_char = char_perd;
      break;
   case ',':
      working_char = char_coma;
      break;
   case '?':
      working_char = char_ques;
      break;
   case '/':
      working_char = char_rsls;
      break;
   case '-':
      working_char = char_dash;
      break;
   case ' ':
      working_char = char_spac;
      break;
   default:
      /* If we don't know about it, we'll just ignore it. */
      return(0);
   }

   for(i=0; i<height; i++)
   {
      new_length = strlen(banner[i])*sizeof(char) +         /* current banner */
                   strlen(working_char[i])*sizeof(char) +   /* new character  */
                   space*sizeof(char) +                     /* the spaces     */
                   1;                                       /* \0 character   */
      
      if(new_length > maxwidth)
      {
         return(1);  /* banner was truncated */
      }

      previous = banner[i];
      banner[i] = (char *)realloc(banner[i], new_length);
      if(banner[i] == NULL)
      {
         banner[i] = previous;
         return(1);  /* act as if truncated */
      } 

      strcat(banner[i], working_char[i]);

      for(j=0; j<space; j++)
      {
         strcat(banner[i], " ");
      }
   }

   return(0);  /* banner was not truncated */
}


/************************
  fill_banner subroutine
 ************************/
/** Fills a banner buffer in based on a string.
  * @param banner    Banner buffer
  * @param string    String to be filled into banner buffer
  * @param maxwidth  Maximum width of any one banner line
  */

static void fill_banner(char **banner, char *string, int maxwidth)
{
   int j = 0;
   int truncated = 0;

   for(j=0; j<strlen(string); j++)
   {
      truncated = add_to_banner(banner, LETTER_HEIGHT, SPACE_WIDTH, string[j], maxwidth);
      if(truncated)
      {
         break;      /* stop looping; the string is too long */
      }
   }
}


/*************************
  print_banner subroutine
 *************************/
/** Prints a banner buffer.
  * @param banner    Banner buffer
  */

static void print_banner(char **banner)
{
   int j = 0;

   printf("\n");

   for(j=0; j<LETTER_HEIGHT; j++)
   {
      printf("%s\n", banner[j]);
   }

   printf("\n");
}


/******************
  usage subroutine
 ******************/
/** Provides usage information for the program.
  * @param program   Name program was invoked with.
  */

static void usage(char *program)
{
   printf("Usage: %s string\n"
          "\n"
          "This is a classic-style banner program similar to the one found in Solaris or\n"
          "AIX in the late 1990s.  It prints a short string to the console in very large\n"
          "letters.\n"
          "\n"
          "If $COLUMNS is exported in the environment, it is taken to be the width of the\n"
          "terminal. Otherwise, a terminal width of %d characters is assumed, and banners\n"
          "that do not fit will be truncated.\n"
          "\n"
          "This is %s %s.\n"
          "$LastChangedDate$.\n"
          "Copyright (c) %s %s <%s>.\n"
          "\n"
          "Distributed under the GNU General Public License.\n"
          "See %s for details on the GNU GPL.\n",
           program, DEFAULT_PRINTWIDTH,
           PACKAGE, VERSION, COPYRIGHT_DATE, 
           AUTHOR, AUTHOR_EMAIL, GNU_URL);
}


/**************
  Main routine
 **************/
/** Program main routine. 
  * 
  * Command-line arguments are handled simplistically: if there are no
  * arguments, then a usage statement is printed and an error code is returned.
  * If the first argument is "-h" or "--help", then a usage statement is
  * displayed.  If the first argument is "--", then it is ignored, which
  * provides a backwards-compatible way to print a banner containing "--help"
  * or "-h".  Finally, if we haven't errored out or printed the usage
  * statement, anything else left on the command-line is considered a word to
  * be printed as a banner.
  */

int main(int argc, char *argv[])
{

   /*****************
     Local variables
    *****************/

   int i = 0;
   int j = 0;

   int wordcount = 0;
   char **wordlist = NULL;

   char *columns = NULL;
   int printwidth = 0;

   int truncated = 0;
   char *banner[LETTER_HEIGHT];
   char *string = NULL;


   /******************
     Handle arguments
    ******************/

   if(argc < 2)
   {
      usage(argv[0]);
      exit(ERROR_EXIT);
   }

   if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
   {
      usage(argv[0]);
      exit(NORMAL_EXIT);   /* not an error */
   }
   
   if(strcmp(argv[1], "--") == 0)
   {
      wordcount = argc > 2 ? argc - 2 : 0;
      wordlist = argc > 2 ? argv + 2 : NULL;
   }
   else
   {
      wordcount = argc > 1 ? argc - 1 : 0;
      wordlist = argc > 1 ? argv + 1 : NULL;
   }

   if(wordcount < 1)
   {
      usage(argv[0]);
      exit(ERROR_EXIT);
   }


   /***********************
     Determine print width
    ***********************/

   columns = getenv("COLUMNS");
   if(columns == NULL)
   {
#ifdef TIOCGWINSZ
      struct winsize ws;
      ws.ws_col = 0;
      if (!ioctl(1, TIOCGWINSZ, &ws) && ws.ws_col > 0)
	printwidth = ws.ws_col;
      else
#endif
      printwidth = DEFAULT_PRINTWIDTH;
   }
   else
   {
      printwidth = atoi(columns);
   }


   /******************************
     Print a banner for each word
    ******************************/

   for(i=0; i<wordcount; i++)
   {
      string = wordlist[i];
      convert_to_upper(string);
      convert_whitespace(string);

      init_banner(banner);
      fill_banner(banner, string, printwidth);
      print_banner(banner);
      free_banner(banner);
   }


   /*****************
     Return normally
    *****************/

   return(0);

}

