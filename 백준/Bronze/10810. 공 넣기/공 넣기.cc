#include<iostream>
using namespace std;

int main(void)
{
	int m, n, i, j, k;
	cin >> n >> m;
	int box[101];
	for (int p = 0; p <= n; p++)
	{
		box[p] = 0;
	}

	for (int q = 0; q < m; q++)
	{
		cin >> i >> j >> k;
		for (int t = i - 1; t < j; t++)
		{
			box[t] = k;
		}
	}

	for (int f = 0; f < n; f++)
	{
		cout << box[f] << " ";
	}
	return 0;
}