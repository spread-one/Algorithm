#include <iostream>

using namespace std;

int main()
{
	int n;
	long long result = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	cout << result;
	return 0;
}