/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *              C E D A R
 *          S O L U T I O N S       "Software done right."
 *           S O F T W A R E
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Copyright (c) 2000-2004 Kenneth J. Pronovici.
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
 * Revision : $Id$
 * Purpose  : Definitions of printed banner letters.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/********************
  File documentation
 ********************/

/** @file
  * @author Kenneth J. Pronovici
  * @brief  Definitions of printed banner letters.
  *
  * This file defines the capital letters A-Z, numbers 0-9 and the characters
  * listed here.  
  * 
    @verbatim

            hash: '#'
            tild: '~'
            excl: '!'
            atsg: '@'
            dolr: '$'
            prct: '%'
            crrt: '^'
            ampr: '&'
            star: '*'
            rpar: ')'
            lpar: '('
            undr: '_'
            plus: '+'
            equl: '='
            rbrc: '}'
            lbrc: '{'
            rbrk: ']'
            lbrk: '['
            pipe: '|'
            lsls: '\'
            coln: ':'
            scln: ';'
            quot: '"'
            squt: '''
            btck: '`'
            rarw: '>'
            larw: '<'
            perd: '.'
            coma: ','
            ques: '?'
            rsls: '/'
            dash: '-'
            spac: ' '

    @endverbatim
  *
  * To redefine your own set, you just need to make sure that all of the
  * characters are used and that all of the characters have the same height, as
  * defined in @c LETTER_HEIGHT, below.
  */

#ifndef LETTERS_H
#define LETTERS_H
/*{*/

/** All letters MUST have this height.  They can vary in width. */
#define LETTER_HEIGHT     (7)

/** Spaces between letters will be this many, well, spaces. */
#define SPACE_WIDTH       (2)

/** For now, we'll  just only print this many characters of a banner. 
  * This depends on average character width, so that's why it's set here. 
  * Solaris banner only allows 10 characters, and that seems to work OK.
  */
#define MAX_PRINT_LETTERS (10)

/** Character 'A' */
char *char_a[] =   
{ "   #   ",
  "  # #  ",
  " #   # ",
  "#     #",
  "#######",
  "#     #",
  "#     #" };

/** Character 'B' */
char *char_b[] =
{ "###### ",
  "#     #",
  "#     #",
  "###### ",
  "#     #",
  "#     #",
  "###### " };
 
/** Character 'C' */
char *char_c[] =
{ " ##### ",
  "#     #",
  "#      ",
  "#      ",
  "#      ",
  "#     #",
  " ##### " };
 
/** Character 'D' */
char *char_d[] =
{ "###### ",
  "#     #",
  "#     #",
  "#     #",
  "#     #",
  "#     #",
  "###### " };
 
/** Character 'E' */
char *char_e[] =
{ "#######",
  "#      ",
  "#      ",
  "#####  ",
  "#      ",
  "#      ",
  "#######" };
 
/** Character 'F' */
char *char_f[] =
{ "#######",
  "#      ",
  "#      ",
  "#####  ",
  "#      ",
  "#      ",
  "#      " };

/** Character 'G' */
char *char_g[] =
{ " ##### ",
  "#     #",
  "#      ",
  "#  ####",
  "#     #",
  "#     #",
  " ##### " };
 
/** Character 'H' */
char *char_h[] =
{ "#     #",
  "#     #",
  "#     #",
  "#######",
  "#     #",
  "#     #",
  "#     #" };
 
/** Character 'I' */
char *char_i[] =
{ "###",
  " # ",
  " # ",
  " # ",
  " # ",
  " # ",
  "###" };
 
/** Character 'J' */
char *char_j[] =
{ "      #",
  "      #",
  "      #",
  "      #",
  "#     #",
  "#     #",
  " ##### " };
 
/** Character 'K' */
char *char_k[] =
{ "#    #",
  "#   # ",
  "#  #  ",
  "###   ",
  "#  #  ",
  "#   # ",
  "#    #" };
 
/** Character 'L' */
char *char_l[] =
{ "#      ",
  "#      ",
  "#      ",
  "#      ",
  "#      ",
  "#      ",
  "#######" };

/** Character 'M' */
char *char_m[] =
{ "#     #",
  "##   ##",
  "# # # #",
  "#  #  #",
  "#     #",
  "#     #",
  "#     #" };
 
/** Character 'N' */
char *char_n[] =
{ "#     #",
  "##    #",
  "# #   #",
  "#  #  #",
  "#   # #",
  "#    ##",
  "#     #" };
 
/** Character 'O' */
char *char_o[] =
{ "#######",
  "#     #",
  "#     #",
  "#     #",
  "#     #",
  "#     #",
  "#######" };
 
/** Character 'P' */
char *char_p[] =
{ "###### ",
  "#     #",
  "#     #",
  "###### ",
  "#      ",
  "#      ",
  "#      " };
 
/** Character 'Q' */
char *char_q[] =
{ " ##### ",
  "#     #",
  "#     #",
  "#     #",
  "#   # #",
  "#    # ",
  " #### #" };
 
/** Character 'R' */
char *char_r[] =
{ "###### ",
  "#     #",
  "#     #",
  "###### ",
  "#   #  ",
  "#    # ",
  "#     #" };

/** Character 'S' */
char *char_s[] =
{ " ##### ",
  "#     #",
  "#      ",
  " ##### ",
  "      #",
  "#     #",
  " ##### " };
 
/** Character 'T' */
char *char_t[] =
{ "#######",
  "   #   ",
  "   #   ",
  "   #   ",
  "   #   ",
  "   #   ",
  "   #   " };
 
/** Character 'U' */
char *char_u[] =
{ "#     #",
  "#     #",
  "#     #",
  "#     #",
  "#     #",
  "#     #",
  " ##### " };
 
/** Character 'V' */
char *char_v[] =
{ "#     #",
  "#     #",
  "#     #",
  "#     #",
  " #   # ",
  "  # #  ",
  "   #   " };
 
/** Character 'W' */
char *char_w[] =
{ "#     #",
  "#  #  #",
  "#  #  #",
  "#  #  #",
  "#  #  #",
  "#  #  #",
  " ## ## " };
 
/** Character 'X' */
char *char_x[] =
{ "#     #",
  " #   # ",
  "  # #  ",
  "   #   ",
  "  # #  ",
  " #   # ",
  "#     #" };

/** Character 'Y' */
char *char_y[] =
{ "#     #",
  " #   # ",
  "  # #  ",
  "   #   ",
  "   #   ",
  "   #   ",
  "   #   " };
 
/** Character 'Z' */
char *char_z[] =
{ "#######",
  "     # ",
  "    #  ",
  "  #    ",
  " #     ",
  "#      ",
  "#######" };

/** Character '0' (zero) */
char *char_0[] =
{ " #### ",
  "#   ##",
  "#  # #",
  "# #  #",
  "##   #",
  "#    #",
  " #### " };

/** Character '1' */
char *char_1[] =
{ "  #  ",
  " ##  ",
  "# #  ",
  "  #  ",
  "  #  ",
  "  #  ",
  "#####" };

/** Character '2' */
char *char_2[] =
{ " ### ",
  "#   #",
  "#   #",
  "   # ",
  "  #  ",
  " #   ",

/** Character '3' */
char *char_3[] =
{ " ### ",
  "#   #",
  "    #",
  " ### ",
  "    #",
  "#   #",
  " ### " };

/** Character '4' */
char *char_4[] =
{ "#   #",
  "#   #",
  "#   #",
  "#####",
  "    #",
  "    #",
  "    #" };

/** Character '5' */
char *char_5[] =
{ "#####",
  "#    ",
  "#    ",
  "#####",
  "    #",
  "    #",
  "#####" };

/** Character '6' */
char *char_6[] =
{ " ### ",
  "#   #",
  "#    ",
  "#### ",
  "#   #",
  "#   #",
  " ### " };

/** Character '7' */
char *char_7[] =
{ "#####",
  "    #",
  "   # ",
  "  #  ",
  " #   ",
  " #   ",
  " #   " };

/** Character '8' */
char *char_8[] =
{ " ### ",
  "#   #",
  "#   #",
  " ### ",
  "#   #",
  "#   #",
  " ### " };

/** Character '9' */
char *char_9[] =
{ " ### ",
  "#   #",
  "#   #",
  " ### ",
  "   # ",
  "  #  ",
  "#    " };

/** Character '-' (dash) */
char *char_hash[] =
{ "  # #  ",
  "  # #  ",
  "#######",
  "  # #  ",
  "#######",
  "  # #  ",
  "  # #  " };

/** Character '~' (tilde) */
char *char_tild[] =
{ " ##    ",
  "#  #  #",
  "    ## ",
  "       ",
  "       ",
  "       ",
  "       " };

/** Character '!' (exclamation point) */
char *char_excl[] =
{ " ### ",
  " ### ",
  " ### ",
  "  #  ",
  "     ",
  " ### ",
  " ### " };

/** Character '\@' (at sign) */
char *char_atsg[] =
{ " ##### ",
  "#     #",
  "# ### #",
  "# ### #",
  "# #### ",
  "#      ",
  " ##### " };

/** Character '$' (dollar sign) */
char *char_dolr[] =
{ " ##### ",
  "#  #  #",
  "#  #   ",
  " ##### ",
  "   #  #",
  "#  #  #",
  " ##### " };

/** Character '%' (dollar sign) */
char *char_prct[] =
{ "###   #",
  "# #  # ",
  "### #  ",
  "   #   ",
  "  # ###",
  " #  # #",
  "#   ###" };

/** Character '^' (caret) */
char *char_crrt[] =
{ "  #  ",
  " # # ",
  "#   #" 
  "     ",
  "     ",
  "     ",
  "     " };

/** Character '&' (ampersand) */
char *char_ampr[] =
{ "  ##   ",
  " #  #  ",
  "  ##   ",
  " ###   ",
  "#   # #",
  "#    # ",
  " ###  #" };

/** Character '*' (star) */
char *char_star[] =
{ "       ",
  " #   # ",
  "  # #  ",
  "#######",
  "  # #  ",
  " #   # ",
  "       " };

/** Character ')' (right parenthesis) */
char *char_rpar[] =
{ "##  ",
  "  # ",
  "   #",
  "   #",
  "   #",
  "  # ",
  "##  " };

/** Character '(' (left parenthesis) */
char *char_lpar[] =
{ "  ##",
  " #  ",
  "#   ",
  "#   ",
  "#   ",
  " #  ",
  "  ##" };

/** Character '_' (underscore) */
char *char_undr[] =
{ "     ",
  "     ",
  "     ",
  "     ",
  "     ",
  "     ",
  "#####" };
 
/** Character '+' (plus sign) */
char *char_plus[] =
{ "       ",
  "   #   ",
  "   #   ",
  " ##### ",
  "   #   ",
  "   #   ",
  "       ",
  "       " };
 
/** Character '+' (equals sign) */
char *char_equl[] =
{ "       ",
  "       ",
  " ##### ",
  "       ",
  " ##### ",
  "       ",
  "       ",
  "       " };
 
/** Character '}' (right brace) */
char *char_rbrc[] =
{ "###  ",
  "   # ",
  "   # ",
  "   ##",
  "   # ",
  "   # ",
  "###  " };

/** Character '{' (left brace) */
char *char_lbrc[] =
{ "  ###",
  " #   ",
  " #   ",
  "##   ",
  " #   ",
  " #   ",
  "  ###" };

/** Character ']' (right bracket) */
char *char_rbrk[] =
{ "#####",
  "    #",
  "    #",
  "    #",
  "    #",
  "    #",
  "#####" };

/** Character '[' (left bracket) */
char *char_lbrk[] =
{ "#####",
  "#    ",
  "#    ",
  "#    ",
  "#    ",
  "#    ",
  "#####" };

/** Character '|' (pipe) */
char *char_pipe[] =
{ " # ",
  " # ",
  " # ",
  "   ",
  " # ",
  " # ",
  " # " };

/** Character '\' (left slash) */
char *char_lsls[] =
{ "#      ",
  " #     ",
  "  #    ",
  "   #   ",
  "    #  ",
  "     # ",
  "      #" };

/** Character ':' (colon) */
char *char_coln[] =
{ " ### ",
  " ### ",
  " ### ",
  "     ",
  " ### ",
  " ### ",
  " ### " };

/** Character ';' (semicolon) */
char *char_scln[] =
{ " ### ",
  " ### ",
  "     ",
  " ### ",
  " ### ",
  "  #  ",
  " #   " };

/** Character '"' (double quote) */
char *char_quot[] =
{ " ### ### ",
  " ### ### ",
  "  #   #  ",
  "         ",
  "         ",
  "         ",
  "         " };

/** Character ''' (single quote) */
char *char_squt[] =
{ " ### ",
  " ### ",
  "  #  ",
  " #   ",
  "     ",
  "     ",
  "     " };

/** Character '`' (backtick) */
char *char_btck[] =
{ " ### ",
  " ### ",
  "  #  ",
  "   # ",
  "     ",
  "     ",
  "     " };

/** Character '>' (right arrow) */
char *char_rarw[] =
{ " #    ",
  "  #   ",
  "   #  ",
  "    # ",
  "   #  ",
  "  #   ",
  " #    " };

/** Character '<' (left arrow) */
char *char_larw[] =
{ "    # ",
  "   #  ",
  "  #   ",
  " #    ",
  "  #   ",
  "   #  ",
  "    # " };
 
/** Character '.' (period) */
char *char_perd[] =
{ "     ",
  "     ",
  "     ",
  "     ",
  " ### ",
  " ### ",
  " ### " };

/** Character ',' (comma) */
char *char_coma[] =
{ "     ",
  "     ",
  "     ",
  " ### ",
  " ### ",
  "  #  ",
  " #   " };
 
/** Character '?' (question mark) */
char *char_ques[] =
{ " ##### ",
  "#     #",
  "      #",
  "   ### ",
  "   #   ",
  "       ",
  "   #   " };

/** Character '/' (right slash) */
char *char_rsls[] =
{ "      #",
  "     # ",
  "    #  ",
  "   #   ",
  "  #    ",
  " #     ",
  "#      " };
 
/** Character '-' (dash) */
char *char_dash[] =
{ "       ",
  "       ",
  "       ",
  "#######",
  "       ",
  "       ",
  "       " };

/** Character ' ' (space) */
char *char_spac[] =
{ "    ",
  "    ",
  "    ",
  "    ",
  "    ",
  "    ",
  "    " };


/*}*/
#endif /* ifndef LETTERS_H */
