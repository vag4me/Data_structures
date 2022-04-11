#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
   
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
  
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
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
  

int main()
{
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
	
	// o 1os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar1, 0, 99);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 1o pinaka %f\n",time_taken);
	
	// o 2os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar2, 0, 199);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 2o pinaka %f\n",time_taken);
	
	// o 3os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar3, 0, 299);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 3o pinaka %f\n",time_taken);
	
	// o 4os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar4, 0, 399);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 4o pinaka %f\n",time_taken);
	
	// o 5os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar5, 0, 499);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 5o pinaka %f\n",time_taken);
	
	// o 6os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar6, 0, 599);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 6o pinaka %f\n",time_taken);
	
	// o 7os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar7, 0, 699);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 7o pinaka %f\n",time_taken);
	
	// o 8os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar8, 0, 799);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 8o pinaka %f\n",time_taken);
	
	// o 9os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar9, 0, 899);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 9o pinaka %f\n",time_taken);
	
	// o 10os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start); 
	mergeSort(ar10, 0, 999);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("O xronos tou 10o pinaka %f\n",time_taken);
	
	
}
