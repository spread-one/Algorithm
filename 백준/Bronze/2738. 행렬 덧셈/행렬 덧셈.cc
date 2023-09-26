#include<iostream>
using namespace std;

int main()
{	
	int n, m;
	cin >> n >> m;
	int array[100][100]{};
	for (int k = 0; k < 2; k++)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int a;
				cin >> a;
				array[j][i] += a;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			if (j == n - 1)
			{
				cout << array[j][i];
			}
			else
			{
				cout << array[j][i] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
