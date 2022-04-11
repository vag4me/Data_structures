#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void senario_creator(int size,int ar[])
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		ar[i] = (rand() * rand()) % 1000001;
		printf("%d\n",ar[i]);
	}
}


int main() {
	int ar1[100],ar2[200],ar3[300],ar4[400],ar5[500],ar6[600];
	int ar7[700],ar8[800],ar9[900],ar10[1000];
	
	srand(time(0));
	
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
	
	
	return 0;
}
