/*
 **********************************************************************

 BANNER - Main header file for 'banner' program

 **********************************************************************

 $GNU_Copyright-Start$

 Copyright (C) 2000 Kenneth J. Pronovici

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

 $GNU_Copyright-End$
 
 $Id: banner.h,v 1.1 2001/08/30 21:46:44 pronovic Exp $

 Modification History

 * $Log: banner.h,v $
 * Revision 1.1  2001/08/30 21:46:44  pronovic
 * Initial revision
 *
 * Revision 1.2  2000/06/12 03:30:57  pronovic
 * Cleanup before final check-in.
 *
 * Revision 1.1  2000/06/12 02:57:06  pronovic
 * Initial revision
 *

 **********************************************************************
 */


/***********************
  Included system files
 ***********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*********************
  Program-wide macros
 *********************/

#define BANNER_DEF_SIZE       10   /* Just need to initialize to SOMEthing...*/

#define BANNER_SPACE_STR      " "

#define BANNER_NORMAL_EXIT    0
#define BANNER_ERROR_EXIT     -1

#define BANNER_ARG_HELP_STR   "--help"
#define BANNER_ARG_IGNORE_STR "--"

#define BANNER_GNU_URL        "http://www.gnu.org/"
#define BANNER_COPYRIGHT_DATE "2000"
#define BANNER_AUTHOR         "Kenneth J. Pronovici"
#define BANNER_AUTHOR_EMAIL   "pronovic@ieee.org"


/**********************
  Included local files
 **********************/

#include "letters.h"               /* Def'n of 'font' and associated macros */


/**********************************
  Program-wide function prototypes
 **********************************/

void convert_to_upper(char *string);
void add_to_banner(char **banner, long height, long space, char letter);
void init_banner(char **banner, long height);
void print_banner(char **banner, long height);
void usage(char *program);

