#include <stdio.h>

int main () {
  char input[8] = "ABCDEFG";
  int i = 0;

  while (input[i] != '\0') {
    printf("%c ", input[i]);
    i++;
  }

  printf("\n");
}
