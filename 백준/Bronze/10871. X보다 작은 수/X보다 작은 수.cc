#include<iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n >>a;
	int box[10000];
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		box[i] = b;
	}
	for (int j = 0; j < n; j++)
	{
		if (box[j] < a)
		{
			cout << box[j]<<" ";
		}
	}
	return 0;
}