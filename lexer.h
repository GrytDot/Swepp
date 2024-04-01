#ifndef LEXER_H
#define LEXER_H

#include "main.h"

#define BUFSIZE 1024
#define LEXSIZE 30
static char buffer[BUFSIZE];
static char lexbuf[LEXSIZE];
static int  pbuf  = 0;          /* current index program buffer */
static int  plex  = 0;          /* current index lexeme  buffer */

/**********************************************************************/
/*  PUBLIC METHODS for this OBJECT  (EXPORTED)                        */
/**********************************************************************/

int    get_token();
char * get_lexeme();

#endif
