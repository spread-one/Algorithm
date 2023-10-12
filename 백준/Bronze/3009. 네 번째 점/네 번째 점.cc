#include <iostream>
using namespace std;
int main()
{
	int xt, yt, xbox[3], ybox[3];
	for (int i = 0; i < 3; i++)
	{
		int x, y;
		cin >> x >> y;
		xbox[i] = x;
		ybox[i] = y;
	}
	int xfirst = xbox[0];
	int yfirst = ybox[0];
	if (xfirst == xbox[1])
	{
		xt = xbox[2];
	}
	else if (xbox[1] == xbox[2])
	{
		xt = xfirst;
	}
	else {
		xt = xbox[1];
	}

	if (yfirst == ybox[1])
	{
		yt = ybox[2];
	}
	else if (ybox[1] == ybox[2])
	{
		yt = yfirst;
	}
	else {
		yt = ybox[1];
	}
	cout << xt << " " << yt;
	return 0;
}
