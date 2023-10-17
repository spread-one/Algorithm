#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int checker = n;
	int count = 1;
	int answer = -1;
	while (checker / 10 != 0)
	{
		checker = checker / 10;
		count += 1;
	}
	for (int i = n - count * 9; i <= n; i++)
	{
		int sum = i;
		for (int j = 1; j <= count; j++)
		{
			double dcutter1 = pow(10.0, static_cast<double>(j));
			double dcutter2 = pow(10.0, static_cast<double>(j - 1));
			int cutter1 = static_cast<int>(dcutter1);
			int cutter2 = static_cast<int>(dcutter2);
			sum += (i % cutter1) / cutter2;
		}
		if (n == sum)
		{
			answer = i;
			break;
		}
	}
	if (answer == -1)
	{
		cout << 0;
	}
	else
	{
		cout << answer;
	}
	return 0;
}