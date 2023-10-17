#include <iostream>
using namespace std;
int main()
{
	int m, n, min;
	
	int sum = 0;
	cin >> m >> n;
	for (int i = n; i >= m; i--)
	{
		int count = 0;
		if (i == 1)
		{
			continue;
		}
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				count = 1;
			}
		}
		if (count == 0)
		{
			min = i;
			sum += i;
		}
	}
	if (sum == 0)
	{
		cout << -1;
	}
	else
	{
		cout << sum << "\n" << min;
	}
	return 0;
}