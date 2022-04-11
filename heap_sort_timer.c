#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
  
 void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    if (largest != i) {
      
      temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;
      heapify(arr, n, largest);
    }
  }
  
  void heapSort(int arr[], int n) {
    int i,temp;
    for( i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    
    for ( i = n - 1; i >= 0; i--) {
      temp = arr[i];
      arr[i] = arr[0];
      arr[0] = temp;
  
      heapify(arr, i, 0);
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
	
	// senaria
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
	heapSort(ar1,100);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 1o %f\n",time_taken);
	
	// 2os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar2,200);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 2o %f\n",time_taken);
	
	// 3os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar3,300);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 3o %f\n",time_taken);
	
	// 4os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar4,400);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 4o %f\n",time_taken);
	
	// 5os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar5,500);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 5o %f\n",time_taken);
	
	// 6os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar6,600);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 6o %f\n",time_taken);
	
	// 7os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar7,700);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 7o %f\n",time_taken);
	
	// 8os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar8,800);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 8o %f\n",time_taken);
	
	// 9os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar9,900);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 9o %f\n",time_taken);
	
	// 10os pinakas
	clock_gettime(CLOCK_MONOTONIC, &start);
	heapSort(ar10,1000);
	clock_gettime(CLOCK_MONOTONIC, &end); 
	time_taken = (end.tv_sec - start.tv_sec) * 1e9;
	time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9; 
	printf("xronos gia ton 10o %f\n",time_taken);
	
	
	
  }
