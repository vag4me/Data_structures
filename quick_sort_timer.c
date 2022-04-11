#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      while (i <= j) {

            while (arr[i] < pivot)
                  i++;

            while (arr[j] > pivot)
                  j--;

            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      
      if (left < j)
           quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
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
	
	// 1os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar1,0,100);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 1o %lf\n",time_taken);
	
	// 2os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar2,0,200);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 2o %lf\n",time_taken);
	
	// 3os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar3,0,300);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 3o %lf\n",time_taken);
	
	// 4os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar4,0,400);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 4o %lf\n",time_taken);
	
	// 5os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar5,0,500);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 5o %lf\n",time_taken);
	
	// 6os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar6,0,600);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 6o %lf\n",time_taken);
	
	// 7os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar7,0,700);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 7o %lf\n",time_taken);
	
	// 8os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar8,0,800);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 8o %lf\n",time_taken);
	
	// 9os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar9,0,900);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 9o %lf\n",time_taken);
	
	// 10os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	quickSort(ar10,0,1000);
	clock_gettime(CLOCK_MONOTONIC, &end);
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("o xronos gia ton 10o %lf\n",time_taken);
	

}
