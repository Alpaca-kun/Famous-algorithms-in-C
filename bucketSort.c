#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIST_SIZE 100

int bucketSort (int list[], int bucket[], int length) {
  int i;

  for (i = 0; i < length; i++)
    bucket[list[i]]++;

  return length;
}

void showBucket (int bucket[], int length) {
  int i, j;

  for (i = 0; i < length; i++)
    if (bucket[i] > 0)
      for (j = 1; j <= bucket[i]; j++)
        printf("[%d] ", i);

  printf("\n");
}

int main () {
  int list[LIST_SIZE], bucket[LIST_SIZE];
  int i, exectionTimes;

  srand((unsigned int) time(NULL));
  for (i = 0; i < LIST_SIZE; i++) {
    list[i] = rand() % LIST_SIZE;
    bucket[i] = 0;
  }

  exectionTimes = bucketSort(list, bucket, LIST_SIZE);

  showBucket(bucket, LIST_SIZE);

  printf("Total of executed times: %d\n", exectionTimes);
}
