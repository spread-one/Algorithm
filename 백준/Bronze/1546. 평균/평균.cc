#include<iostream>
using namespace std;

int main(void)
{
	int n;
	double test;
	double testbox[1000];
	double testmax = 0;
	double testsum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> test;
		testbox[i] = test;
		if (testmax < test)
		{
			testmax = test;
		}
	}
	for (int j = 0; j < n; j++)
	{
		testbox[j] = testbox[j] / testmax * 100;
		testsum += testbox[j];
	}
	cout.setf(ios::fixed);
	cout.precision(10);
	cout << testsum / n;
	return 0;
}