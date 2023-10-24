#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int array[10001]{};
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		array[k] += 1;
	}
	for (int j = 1; j <= 10000; j++) 
	{
		if (array[j] != 0)
		{
			for (int t = 0; t < array[j]; t++)
			{
				cout << j << "\n";
			}
		}
	}
	return 0;
}
