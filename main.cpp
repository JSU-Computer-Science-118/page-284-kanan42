#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int number;
	int i;
	srand(time(0));
	int limit;
	cin >> limit;
	for (i = 1; i <= limit; i++) {
		number = rand() % 1000;
		cout << number << "\t";

	}

}
