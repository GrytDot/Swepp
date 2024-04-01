/**********************************************************************/
/* Swe++ - Driver OBJECT                                              */
/**********************************************************************/

/**********************************************************************/
/* Other OBJECT's METHODS (IMPORTED)                                  */
/**********************************************************************/
#include "keytoktab.h"


   
/**********************************************************************/
/*  PUBLIC METHODS for this OBJECT  (EXPORTED)                        */
/**********************************************************************/
/**********************************************************************/
/* Display the tables                                                 */
/**********************************************************************/
void p_toktab()
{  
  for(int i = 0; i < sizeof(tokentab); i++) {
    printf("Text:   %s,   Token:    %c\n", tokentab[i].text, tokentab[i].token);
  }

  for(int i = 0; i < sizeof(keywordtab); i++) {
    printf("Text:   %s,   Token:    %c\n", keywordtab[i].text, keywordtab[i].token);
  }
  //printf("\n *** TO BE DONE");
}

/**********************************************************************/
/* lex2tok - convert a lexeme to a token                              */
/**********************************************************************/
toktyp lex2tok(char * fplex)
{
  for (int i = 0; i < sizeof(tokentab); i++) {
    if(strcmp(fplex, tokentab[i].text)) {
      printf("Lexeme:   %s,   Token:    %c\n", fplex, tokentab[i].token);
      return tokentab[i].token;
    } else {
      return 0;
    }
  }
  //printf("\n *** TO BE DONE");  return 0;
}

/**********************************************************************/
/* key2tok - convert a keyword to a token                             */
/**********************************************************************/
toktyp key2tok(char * fplex)
{
  for(int i = 0; i < sizeof(keywordtab); i++) {
    if(strcmp(fplex, keywordtab[i].text)) {
      printf("Keyword:    %s,   Token:    %c\n", fplex, keywordtab[i].token);
      return keywordtab[i].token;
    } else {
      return 0;
    }
  }
  //printf("\n *** TO BE DONE");  return 0;
}

/**********************************************************************/
/* tok2lex - convert a token to a lexeme                              */
/**********************************************************************/
char * tok2lex(toktyp ftok)
{
  for(int i = 0; i < sizeof(tokentab); i++) {
    if(ftok == tokentab[i].token) {
      printf("Token:    %c,   Lexeme:   %s\n", ftok, tokentab[i].text);
      return tokentab[i].text;
    } else {
      return 0;
    }
  }
  //printf("\n *** TO BE DONE");  return 0;
}

/**********************************************************************/
/* End of code                                                        */
/**********************************************************************/
