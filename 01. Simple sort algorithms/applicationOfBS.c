#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIST_SIZE 100
#define BUCKET_SIZE 11

int main () {
  int i;
  int list[LIST_SIZE], bucket[BUCKET_SIZE];

  srand((unsigned int) time(NULL));
  for (i = 0; i < LIST_SIZE; i++)
    list[i] = rand() % 101;

  for (i = 0; i < BUCKET_SIZE; i++)
    bucket[i] = 0;

  for (i = 0; i < LIST_SIZE; i++)
    bucket[list[i] / 10]++;

  printf("Initial points: ");
  for (i = 0; i < LIST_SIZE; i++)
    printf("[%d]", list[i]);
  printf("\n\n");

  printf("Distribuition of points: \n");
  for (i = 0; i < BUCKET_SIZE - 1; i++) {
    printf("%d - %d points: %d students\n", i * 10, i * 10 + 9, bucket[i]);
  }
  printf("%d points: %d students\n", i * 10, bucket[i]);
    
}
