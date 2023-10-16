#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int n;
		int a[100]{};
		int count = 0;
		int sum = 0;
		cin >> n;
		if (n == -1)
		{
			break;
		}
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				count += 1;
				a[count] = i;
				sum += i;
			}
		}
		if (sum == n)
		{
			cout << n << " = ";
			for (int j = 1; j < count; j++)
			{
				cout << a[j] << " + ";
			}
			cout << a[count];
		}
		else
		{
			cout << n << " is NOT perfect.";
		}
		cout << endl;
	}
	return 0;
}