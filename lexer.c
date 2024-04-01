#include "lexer.h"

TokenLiteral lit2tok(char current, FILE *file) {
  TokenLiteral token;
  token.type = INT;
  int value = 0;
  while(isdigit(current) && current != EOF) {
    value += (int) current - '0';
    printf("%c", current);
    current = fgetc(file);
  }
  printf("\n");
  token.value = value;
  return token;
}

void readFile(FILE *file) {
  char current = fgetc(file);

  while(current != EOF) {
    if(current == ';') {
      printf("FOUND SEMICOLON\n");
    } else if(current == '(') {
      printf("FOUND OPEN PAREN\n");
    } else if(current == ')') {
      printf("FOUND CLOSE PAREN\n");
    } else if(isdigit(current)) {
      lit2tok(current, file);
      //printf("FOUND DIGIT: %d\n", current - '0');
    } else if(isalpha(current)) {
      printf("FOUND CHARACTER: %c\n", current);
    }
    current = fgetc(file);
  }
}
