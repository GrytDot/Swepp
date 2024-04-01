#include "lexer.h"

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
      printf("FOUND DIGIT: %d\n", current - '0');
    }
    printf("%c", current);
    current = fgetc(file);
  }
}
