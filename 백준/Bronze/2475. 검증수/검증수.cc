#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	int num;
	int squaresum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		squaresum += num*num;
	}
	cout << squaresum % 10;
	return 0;
}
