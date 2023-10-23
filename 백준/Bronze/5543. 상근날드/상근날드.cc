#include <iostream>
using namespace std;

int main()
{
	int minbug = 2000;
	int minsoda = 2000;
	for (int i = 0; i < 3; i++)
	{
		int bug;
		cin >> bug;
		if (minbug > bug)
			minbug = bug;
	}
	for (int j = 0; j < 2; j++)
	{
		int soda;
		cin >> soda;
		if (minsoda > soda)
			minsoda = soda;
	}
	cout << minbug + minsoda - 50;
	return 0;
}
