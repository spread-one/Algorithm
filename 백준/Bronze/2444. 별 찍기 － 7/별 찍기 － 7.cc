#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= 2*n; i+=2)
	{
		for (int j = n; j>i/2+1; j--)
		{
			cout << " ";
		}
		for (int p = 1; p <= 2*(i-1)+1; p+=2)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 2*(n-1)-1; i >= 1; i -= 2)
	{
		for (int j = n; j > i / 2+1; j--)
		{
			cout << " ";
		}
		for (int p = 1; p <= 2 * (i - 1) + 1; p += 2)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
