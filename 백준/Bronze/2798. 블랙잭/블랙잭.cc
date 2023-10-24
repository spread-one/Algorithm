#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	int* card = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}
	int target = 100000;
	int sum = 0;
	int min=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				sum = card[i] + card[j] + card[k];
				if (m-sum < target && sum <= m)
				{
					target = m - sum;
					min = sum;
				}
			}
		}
	}
	cout << min;
	return 0;
}
