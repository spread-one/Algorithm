#include<iostream>
using namespace std;

int main()
{
	int n, a, b;
	int c = 0;
	cin >> n;
	int box[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		box[i] = a;
	}
	cin >> b;
	for (int j = 0; j < n; j++)
	{
		if (box[j] == b)
		{
			c += 1;
		}
	}
	cout << c;
}