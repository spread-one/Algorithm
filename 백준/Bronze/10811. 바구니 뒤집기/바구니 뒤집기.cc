#include<iostream>
using namespace std;

int main(void)
{
	int n, m, i, j, tmp;
	cin >> n >> m;
	int box[100];
	for (int p = 1; p <= n; p++)
	{
		box[p] = p;
	}
	for (int k = 0; k < m; k++)
	{
		cin >> i >> j;
		for (int t = 0; t <= j-i-1; t++)
		{
			if (i + t > j - t)
			{
				continue;
			}
			tmp = box[i+t];
			box[i+t] = box[j-t];
			box[j-t] = tmp;
		}
	}
	for (int p = 1; p <= n; p++)
	{
		cout << box[p]<<" ";
	}
	return 0;
}