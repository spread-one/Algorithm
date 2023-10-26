#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n1, n2;
	int small;
	cin >> n1 >> n2;
	if (n1 > n2)
	{
		for (int i = n1; i > 0; i--)
		{
			if (n1 % i == 0 && n2 % i == 0)
			{
				cout << i << "\n";
				small = i;
				break;
			}
		}
	}
	else
	{
		for (int i = n2; i > 0; i--)
		{
			if (n1 % i == 0 && n2 % i == 0)
			{
				cout << i << "\n";
				small = i;
				break;
			}
		}
	}
	cout << n1 * n2 / small;
	

	return 0;
}
