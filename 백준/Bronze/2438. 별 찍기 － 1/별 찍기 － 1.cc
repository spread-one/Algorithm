#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int n = i; n >= 1; n--)
		{
			cout << "*";
		}
		cout << "" << endl;
	}
	return 0;
}