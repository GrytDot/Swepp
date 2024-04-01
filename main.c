#include "main.h"

int main() {
  FILE *file;
  file = fopen("test.spp", "r");
  readFile(file);
}
