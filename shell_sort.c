#include <stdio.h>
#include <stdlib.h>

void shellSort(int array[], int n) {
  int interval,i;
  for (interval = n / 2; interval > 0; interval /= 2) {
    for (i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

int main() {
	
	return 0;
}
