#include <stdio.h>
#include <stdlib.h>

void selectionSort(int array[], int size) {
  int min_idx,temp,step,i;
   
  for(step = 0; step < size - 1; step++) {
    min_idx = step;
    for (i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    
    temp = array[min_idx];
    array[min_idx] = array[step];
    array[step] = temp;
    
  }
}
    

int main() {
}
