#include <iostream>
using namespace std;
int main()
{
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	int max = a[0];
	int index = 0;
	int sum = a[0];
	for (int i = 1; i < 3; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}	
		sum += a[i];
	}
	if (a[index] >= sum - a[index])
	{
		cout << (sum - a[index]) * 2 - 1;
	}
	else
	{
		cout << sum;
	}
	return 0;
}