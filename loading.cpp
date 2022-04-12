#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

struct elements
{
	int num;
	string string1;
	string string2;
	string string3;
};
struct elements one[100];


int main(int argc, char** argv) {
	string myText;
	int count=0,value,i=0;
	
	ifstream MyReadFile("elements.txt");
	
	getline(MyReadFile, myText);
	stringstream geek(myText);
	int x = 0;
    geek >> x;
    one[0].num = x;
    cout << one[0].num << endl;
    
	
	while (getline (MyReadFile, myText)) {
  		count++;
  		if(count == 1)
  		{
  			one[i].string1 = myText;
		}
		else if(count == 2)
		{
			one[i].string2 = myText;
		}
		else if(count == 3)
		{
			one[i].string3 = myText;
		}
		else if(count == 4)
		{
			stringstream geek(myText);
			int y = 0;
    		geek >> y;
    		one[i].num = y;
    		cout << one[i].num << endl;
			count=0;
			i++;
		}
		
}
		
	
	
	return 0;
}
