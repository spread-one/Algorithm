#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		cout << n / 25 << " " << (n % 25) / 10 << " " << ((n % 25) % 10) / 5 << " " << ((n % 25) % 10) % 5 << endl;
	}

	return 0;
}
