#include <iostream>
using namespace std;
int fact(int n);
int main()
{
	int k, n;
	cin >> n >> k;
	int result;
	result = fact(n) / (fact(k) * fact(n - k));
	cout << result;
	return 0;
}

int fact(int n)
{
	int result;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		result = n * fact(n - 1);
	}
	return result;
}