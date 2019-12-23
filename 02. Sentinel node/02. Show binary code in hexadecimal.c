#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  FILE *fp;
  int c, n;

  if ((fp = fopen(argv[1], "rb")) == NULL) {
    printf("File open error!\n");
    exit(1);
  }

  n = 0;
  while ((c = fgetc(fp)) != EOF) {
    printf("%02x ", c);
    n++;

    if (n % 16 == 0)
      printf("\n");
  }

  printf("\n");
  fclose(fp);
}
