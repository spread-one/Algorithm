#include <iostream>
using namespace std;
int main()
{
	int n;
	int rcount = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		int count = 0;
		if (a == 1)
		{
			count = 1;
		}
		for (int j = 2; j < a; j++)
		{
			if (a % j == 0)
			{
				count = 1;
			}
		}
		if (count == 0)
		{
			rcount += 1;
		}
	}
	cout << rcount;
	return 0;
}