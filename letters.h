/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                   *
 *            C  E  D  A  R                                          *
 *          S O L U T I O N S       "Software done right."           *
 *               I  N  C.                                            *
 *                                                                   *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                   *
 * Copyright (c) 2001 Cedar Solutions, Inc.                          *
 * All rights reserved.                                              *
 *                                                                   *
 * This program is free software; you can redistribute it and/or     *
 * modify it under the terms of the GNU General Public License,      *
 * Version 2, as published by the Free Software Foundation.          *
 *                                                                   *
 * This program is distributed in the hope that it will be useful,   *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.              *
 *                                                                   *
 * Copies of the GNU General Public License are available from       *
 * the Free Software Foundation website, http://www.gnu.org/.        *
 *                                                                   *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Author   : Kenneth J. Pronovici
 * Language : ANSI C
 * Project  : banner
 * Package  : N/A
 * Revision : $Revision: 1.2 $
 * Purpose  : Main routine and function definitions
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef LETTERS_H
#define LETTERS_H
/*{*/

/* All letters MUST have this height.  They can vary in width. */
#define BANNER_LETTER_HEIGHT     (7)

/* Spaces between letters will be this many, well, spaces. */
#define BANNER_SPACE_WIDTH       (2)

/* For now, we'll  just only print this many characters of a banner. 
   This depends on average character width, so that's why it's set here. 
   Solaris banner only allows 10 characters, and that seems to work OK. */
#define BANNER_MAX_PRINT_LETTERS (10)

/* This file defines the capital letters A-Z, numbers 0-9 and the characters 
   listed here.  To redefine your own set, you just need to make sure that 
   all of the characters are used and that all of the characters have the 
   same height, as defined in BANNER_LETTER_HEIGHT, above.

            hash: #
            tild: ~
            excl: !
            atsg: @
            dolr: $
            prct: %
            crrt: ^
            ampr: &
            star: *
            rpar: )
            lpar: (
            undr: _
            plus: +
            equl: =
            rbrc: }
            lbrc: {
            rbrk: ]
            lbrk: [
            pipe: |
            lsls: \
            coln: :
            scln: ;
            quot: "
            squt: '
            btck: `
            rarw: >
            larw: <
            perd: .
            coma: ,
            ques: ?
            rsls: /
            dash: -
*/

char *char_a[] =    { "   #   ",
                      "  # #  ",
                      " #   # ",
                      "#     #",
                      "#######",
                      "#     #",
                      "#     #" };

char *char_b[] =   { "###### ",
                     "#     #",
                     "#     #",
                     "###### ",
                     "#     #",
                     "#     #",
                     "###### " };
 
char *char_c[] =   { " ##### ",
                     "#     #",
                     "#      ",
                     "#      ",
                     "#      ",
                     "#     #",
                     " ##### " };
 
char *char_d[] =   { "###### ",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     "###### " };
 
char *char_e[] =   { "#######",
                     "#      ",
                     "#      ",
                     "#####  ",
                     "#      ",
                     "#      ",
                     "#######" };
 
char *char_f[] =   { "#######",
                     "#      ",
                     "#      ",
                     "#####  ",
                     "#      ",
                     "#      ",
                     "#      " };

char *char_g[] =   { " ##### ",
                     "#     #",
                     "#      ",
                     "#  ####",
                     "#     #",
                     "#     #",
                     " ##### " };
 
char *char_h[] =   { "#     #",
                     "#     #",
                     "#     #",
                     "#######",
                     "#     #",
                     "#     #",
                     "#     #" };
 
char *char_i[] =   { "###",
                     " # ",
                     " # ",
                     " # ",
                     " # ",
                     " # ",
                     "###" };
 
char *char_j[] =   { "      #",
                     "      #",
                     "      #",
                     "      #",
                     "#     #",
                     "#     #",
                     " ##### " };
 
char *char_k[] =   { "#    #",
                     "#   # ",
                     "#  #  ",
                     "###   ",
                     "#  #  ",
                     "#   # ",
                     "#    #" };
 
char *char_l[] =   { "#      ",
                     "#      ",
                     "#      ",
                     "#      ",
                     "#      ",
                     "#      ",
                     "#######" };

char *char_m[] =   { "#     #",
                     "##   ##",
                     "# # # #",
                     "#  #  #",
                     "#     #",
                     "#     #",
                     "#     #" };
 
char *char_n[] =   { "#     #",
                     "##    #",
                     "# #   #",
                     "#  #  #",
                     "#   # #",
                     "#    ##",
                     "#     #" };
 
char *char_o[] =   { "#######",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#######" };
 
char *char_p[] =   { "###### ",
                     "#     #",
                     "#     #",
                     "###### ",
                     "#      ",
                     "#      ",
                     "#      " };
 
char *char_q[] =   { " ##### ",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#   # #",
                     "#    # ",
                     " #### #" };
 
char *char_r[] =   { "###### ",
                     "#     #",
                     "#     #",
                     "###### ",
                     "#   #  ",
                     "#    # ",
                     "#     #" };

char *char_s[] =   { " ##### ",
                     "#     #",
                     "#      ",
                     " ##### ",
                     "      #",
                     "#     #",
                     " ##### " };
 
char *char_t[] =   { "#######",
                     "   #   ",
                     "   #   ",
                     "   #   ",
                     "   #   ",
                     "   #   ",
                     "   #   " };
 
char *char_u[] =   { "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     " ##### " };
 
char *char_v[] =   { "#     #",
                     "#     #",
                     "#     #",
                     "#     #",
                     " #   # ",
                     "  # #  ",
                     "   #   " };
 
char *char_w[] =   { "#     #",
                     "#  #  #",
                     "#  #  #",
                     "#  #  #",
                     "#  #  #",
                     "#  #  #",
                     " ## ## " };
 
char *char_x[] =   { "#     #",
                     " #   # ",
                     "  # #  ",
                     "   #   ",
                     "  # #  ",
                     " #   # ",
                     "#     #" };

char *char_y[] =   { "#     #",
                     " #   # ",
                     "  # #  ",
                     "   #   ",
                     "   #   ",
                     "   #   ",
                     "   #   " };
 
char *char_z[] =   { "#######",
                     "     # ",
                     "    #  ",
                     "  #    ",
                     " #     ",
                     "#      ",
                     "#######" };

char *char_0[] =   { " #### ",
                     "#   ##",
                     "#  # #",
                     "# #  #",
                     "##   #",
                     "#    #",
                     " #### " };

char *char_1[] =   { "  #  ",
                     " ##  ",
                     "# #  ",
                     "  #  ",
                     "  #  ",
                     "  #  ",
                     "#####" };

char *char_2[] =   { " ### ",
                     "#   #",
                     "#   #",
                     "   # ",
                     "  #  ",
                     " #   ",
                     "#####" };

char *char_3[] =   { " ### ",
                     "#   #",
                     "    #",
                     " ### ",
                     "    #",
                     "#   #",
                     " ### " };

char *char_4[] =   { "#   #",
                     "#   #",
                     "#   #",
                     "#####",
                     "    #",
                     "    #",
                     "    #" };

char *char_5[] =   { "#####",
                     "#    ",
                     "#    ",
                     "#####",
                     "    #",
                     "    #",
                     "#####" };

char *char_6[] =   { " ### ",
                     "#   #",
                     "#    ",
                     "#### ",
                     "#   #",
                     "#   #",
                     " ### " };

char *char_7[] =   { "#####",
                     "    #",
                     "   # ",
                     "  #  ",
                     " #   ",
                     " #   ",
                     " #   " };

char *char_8[] =   { " ### ",
                     "#   #",
                     "#   #",
                     " ### ",
                     "#   #",
                     "#   #",
                     " ### " };

char *char_9[] =   { " ### ",
                     "#   #",
                     "#   #",
                     " ### ",
                     "   # ",
                     "  #  ",
                     "#    " };

char *char_hash[] = { "  # #  ",
                      "  # #  ",
                      "#######",
                      "  # #  ",
                      "#######",
                      "  # #  ",
                      "  # #  " };

char *char_tild[] = { " ##    ",
                      "#  #  #",
                      "    ## ",
                      "       ",
                      "       ",
                      "       ",
                      "       " };

char *char_excl[] = { " ### ",
                      " ### ",
                      " ### ",
                      "  #  ",
                      "     ",
                      " ### ",
                      " ### " };

char *char_atsg[] = { " ##### ",
                      "#     #",
                      "# ### #",
                      "# ### #",
                      "# #### ",
                      "#      ",
                      " ##### " };

char *char_dolr[] = { " ##### ",
                      "#  #  #",
                      "#  #   ",
                      " ##### ",
                      "   #  #",
                      "#  #  #",
                      " ##### " };

char *char_prct[] = { "###   #",
                      "# #  # ",
                      "### #  ",
                      "   #   ",
                       "  # ###",
                      " #  # #",
                      "#   ###" };

char *char_crrt[] = { "  #  ",
                      " # # ",
                      "#   #" 
                      "     ",
                      "     ",
                      "     ",
                      "     " };

char *char_ampr[] = { "  ##   ",
                      " #  #  ",
                      "  ##   ",
                      " ###   ",
                      "#   # #",
                      "#    # ",
                      " ###  #" };

char *char_star[] = { "       ",
                      " #   # ",
                      "  # #  ",
                      "#######",
                      "  # #  ",
                      " #   # ",
                      "       " };

char *char_rpar[] = { "##  ",
                      "  # ",
                      "   #",
                      "   #",
                      "   #",
                      "  # ",
                      "##  " };

char *char_lpar[] = { "  ##",
                      " #  ",
                      "#   ",
                      "#   ",
                      "#   ",
                      " #  ",
                      "  ##" };

char *char_undr[] = { "     ",
                      "     ",
                      "     ",
                      "     ",
                      "     ",
                      "     ",
                      "#####" };
 
char *char_plus[] = { "       ",
                      "   #   ",
                      "   #   ",
                      " ##### ",
                      "   #   ",
                      "   #   ",
                      "       ",
                      "       " };
 
char *char_equl[] = { "       ",
                      "       ",
                      " ##### ",
                      "       ",
                      " ##### ",
                      "       ",
                      "       ",
                      "       " };
 
char *char_rbrc[] = { "###  ",
                      "   # ",
                      "   # ",
                      "   ##",
                      "   # ",
                      "   # ",
                      "###  " };

char *char_lbrc[] = { "  ###",
                      " #   ",
                      " #   ",
                      "##   ",
                      " #   ",
                      " #   ",
                      "  ###" };

char *char_rbrk[] = { "#####",
                      "    #",
                      "    #",
                      "    #",
                      "    #",
                      "    #",
                      "#####" };

char *char_lbrk[] = { "#####",
                      "#    ",
                      "#    ",
                      "#    ",
                      "#    ",
                      "#    ",
                      "#####" };

char *char_pipe[] = { " # ",
                      " # ",
                      " # ",
                      "   ",
                      " # ",
                      " # ",
                      " # " };

char *char_lsls[] = { "#      ",
                      " #     ",
                      "  #    ",
                      "   #   ",
                      "    #  ",
                      "     # ",
                      "      #" };

char *char_coln[] = { " ### ",
                      " ### ",
                      " ### ",
                      "     ",
                      " ### ",
                      " ### ",
                      " ### " };

char *char_scln[] = { " ### ",
                      " ### ",
                      "     ",
                      " ### ",
                      " ### ",
                      "  #  ",
                      " #   " };

char *char_quot[] = { " ### ### ",
                      " ### ### ",
                      "  #   #  ",
                      "         ",
                      "         ",
                      "         ",
                      "         " };

char *char_squt[] = { " ### ",
                      " ### ",
                      "  #  ",
                      " #   ",
                      "     ",
                      "     ",
                      "     " };

char *char_btck[] = { " ### ",
                      " ### ",
                      "  #  ",
                      "   # ",
                      "     ",
                      "     ",
                      "     " };

char *char_rarw[] = { " #    ",
                      "  #   ",
                      "   #  ",
                      "    # ",
                      "   #  ",
                      "  #   ",
                      " #    " };

char *char_larw[] = { "    # ",
                      "   #  ",
                      "  #   ",
                      " #    ",
                      "  #   ",
                      "   #  ",
                      "    # " };
 
char *char_perd[] = { "     ",
                      "     ",
                      "     ",
                      "     ",
                      " ### ",
                      " ### ",
                      " ### " };

char *char_coma[] = { "     ",
                      "     ",
                      "     ",
                      " ### ",
                      " ### ",
                      "  #  ",
                      " #   " };
 
char *char_ques[] = { " ##### ",
                      "#     #",
                      "      #",
                      "   ### ",
                      "   #   ",
                      "       ",
                      "   #   " };

char *char_rsls[] = { "      #",
                      "     # ",
                      "    #  ",
                      "   #   ",
                      "  #    ",
                      " #     ",
                      "#      " };
 
char *char_dash[] = { "       ",
                      "       ",
                      "       ",
                      "#######",
                      "       ",
                      "       ",
                      "       " };


/*}*/
#endif /* ifndef LETTERS_H */
