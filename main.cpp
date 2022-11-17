#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int number;
	int i;
	srand(time(0));
	cin >> number;
	for (i = 1; i <=15; i++) {
		number = rand() % 1000;
		cout << number << "\t";
		
	}
	
}
