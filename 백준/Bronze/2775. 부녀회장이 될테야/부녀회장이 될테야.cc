#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int apart[15][15]{};
	for (int i = 1; i < 15; i++)
	{
		apart[0][i] = i;
	}
	for (int i = 1; i < 15; i++)
	{
		for (int j = 1; j < 15; j++)
		{
			for (int k = 1; k <= j; k++)
			{
				apart[i][j] += apart[i - 1][k];
			}
		}
	}

	for (int i = 0; i < t; i++)
	{
		int k, n;
		cin >> k >> n;
		cout << apart[k][n]<<"\n";
	}
	return 0;
}
