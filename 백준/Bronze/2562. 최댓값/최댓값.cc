#include<iostream>
using namespace std;

int main(void)
{
	int numarr[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> numarr[i];
	}
	int max = numarr[0];
	int add = 1;
	for (int j = 1; j < 9; j++)
	{
		if (numarr[j] >= max) {
			max = numarr[j];
			add = j + 1;
		}
			
	}
	cout << max << endl;
	cout << add;
	return 0;
}