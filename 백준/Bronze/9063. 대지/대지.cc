#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int xmax = -10000;
	int xmin = 10000;
	int ymax = -10000;
	int ymin = 10000;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x > xmax)
		{
			xmax = x;
		}
		if (x < xmin)
		{
			xmin = x;
		}
		if (y > ymax)
		{
			ymax = y;
		}
		if (y < ymin)
		{
			ymin = y;
		}
	}
	cout << (ymax - ymin) * (xmax - xmin);
	return 0;
}
