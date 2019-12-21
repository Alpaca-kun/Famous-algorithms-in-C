#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIST_NUM 100

int insertSort (int list[], int length) {
  int pos, ins, tmp;
  int n = 0;

  for (pos = 1; pos < length; pos++) {
    ins = pos;

    while (ins >= 1 && (list[ins - 1] > list[ins])) {
      tmp = list[ins - 1];
      list[ins - 1] = list[ins];
      list[ins] = tmp;
      ins--;
      n++;
    }
  }

  return n;
}

void showArray (int list[], int length) {
  int i;

  for (i = 0; i < length; i++) 
    printf("[%d] ", list[i]);

  printf("\n");
}

int main () {
  int list[LIST_NUM];
  int i, exectionTimes;

  srand((unsigned int) time(NULL));
  for (i = 0; i < LIST_NUM; i++)
    list[i] = rand() % LIST_NUM;

  exectionTimes = insertSort(list, LIST_NUM);

  showArray(list, LIST_NUM);

  printf("Total of executed times: %d\n", exectionTimes);
}
