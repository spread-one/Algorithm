#include<iostream>
using namespace std;

int main(void)
{
	int m, n, i, j, temp;
	cin >> n >> m;
	int box[101];
	for (int p = 0; p <= n; p++)
	{
		box[p] = p+1;
	}

	for (int q = 0; q < m; q++)
	{
		cin >> i >> j;
		temp = box[i - 1];
		box[i - 1] = box[j - 1];
		box[j - 1] = temp;
		
	}

	for (int f = 0; f < n; f++)
	{
		cout << box[f] << " ";
	}
	return 0;
}