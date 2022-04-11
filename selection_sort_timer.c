#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

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

void senario_creator(int size,int ar[])
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		ar[i] = (rand() * rand()) % 1000001;
		
	}
}
    
    
int main() {
	struct timespec start, end;
	double time_taken;
	int ar1[100],ar2[200],ar3[300],ar4[400],ar5[500],ar6[600];
	int ar7[700],ar8[800],ar9[900],ar10[1000];
	int i;
	
	srand(time(0));
	
	// ta senaria
	senario_creator(100,ar1);
	senario_creator(200,ar2);
	senario_creator(300,ar3);
	senario_creator(400,ar4);
	senario_creator(500,ar5);
	senario_creator(600,ar6);
	senario_creator(700,ar7);
	senario_creator(800,ar8);
	senario_creator(900,ar9);
	senario_creator(1000,ar10);
	
	// 1os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar1,100);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 1o pinaka %f\n" , time_taken);
	
	// 2os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar2,200);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 2o pinaka %f\n" , time_taken);
	
	// 3os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar3,300);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 3o pinaka %f\n" , time_taken);
	
	// 4os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar4,400);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 4o pinaka %f\n" , time_taken);
	
	// 5os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar5,500);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 5o pinaka %f\n" , time_taken);
	
	// 6os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar6,600);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 6o pinaka %f\n" , time_taken);
	
	// 7os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar7,700);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 7o pinaka %f\n" , time_taken);
	
	// 8os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar8,800);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 8o pinaka %f\n" , time_taken);
	
	// 9os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar9,900);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 9o pinaka %f\n" , time_taken);
	
	// 10os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	selectionSort(ar10,1000);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 10o pinaka %f\n" , time_taken);
	
	
}
