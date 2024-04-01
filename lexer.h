#ifndef LEXER_H
#define LEXER_H

#include "main.h"

typedef enum {
  SEMI,
  OPEN_PAREN,
  CLOSE_PAREN,
} TypeSeparator;

typedef enum {
  EXIT,
} TypeKeyword;

typedef enum {
  INT, 
} TypeLiteral;

typedef struct {
  TypeSeparator type;
} TokenSeparator;

typedef struct {
  TypeKeyword type;
} TokenKeyword;

typedef struct {
  TypeLiteral type;
  int value;
} TokenLiteral;

void readFile(FILE *file);

#endif
