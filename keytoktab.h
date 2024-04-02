#ifndef KEYTOKTAB_H
#define KEYTOKTAB_H


/**********************************************************************/
/* Include files                                                      */
/**********************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>


/**********************************************************************/
/* constants & public functions                                       */
/**********************************************************************/
/**********************************************************************/
/* constants                                                          */
/**********************************************************************/
#define nfound -1

typedef enum tvalues { 
  tstart=257,
  id,
  number,
  assign,
  predef,
  tempty,
  undef,
  error,
  typ,
  tend,
  kstart,
  program,
  input,
  output,
  var,
  begin,
  end,
  boolean,
  integer,
  real,
  kend 
} toktyp;


/**********************************************************************/
/*  PUBLIC METHODS for this OBJECT  (EXPORTED)                        */
/**********************************************************************/

void   p_toktab();                 /* display token/keyword tables    */
toktyp lex2tok(char * fplex);      /* convert a lexeme  to a token    */
toktyp key2tok(char * fplex);      /* convert a keyword to a token    */
char * tok2lex(toktyp ftok);       /* convert a token   to a lexeme   */


/**********************************************************************/
/* OBJECT ATTRIBUTES FOR THIS OBJECT                                  */
/**********************************************************************/
/**********************************************************************/
/* type definitions                                                   */
/**********************************************************************/
typedef struct tab {
	char 	* text;
	int 	token;
	} tab;
	
/**********************************************************************/
/* data objects (tables)                                              */
/**********************************************************************/
static tab tokentab[ ] = {
        {"id", 	        id},
	{"number", 	number},
	{":=", 	        assign},
	{"undef", 	undef},
	{"predef", 	predef},
	{"tempty", 	tempty},
	{"error",        error},
	{"type",         typ},
	{"$",            '$'},
	{"(",            '('},
	{")",            ')'},
	{"*",            '*'},
	{"+",            '+'},
	{",",            ','},
	{"-",            '-'},
	{".",            '.'},
	{"/",            '/'},
	{":",            ':'},
	{";",            ';'},
	{"=",            '='},
	{"TERROR", 	nfound}
        };


static tab keywordtab[ ] = {
	{"program", 	program},
	{"input", 	input},
	{"output", 	output},
	{"var", 	var},
	{"begin", 	begin},
	{"end", 	end},
	{"boolean", 	boolean},
	{"integer", 	integer},
	{"real", 	real},
	{"KERROR", 	nfound}
	} ;

#endif
/**********************************************************************/
/* end of definitions                                                 */
/**********************************************************************/
