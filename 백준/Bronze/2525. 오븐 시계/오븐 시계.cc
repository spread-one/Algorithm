#include<iostream>
using namespace std;

int main()
{
	int H, M, C;
	cin >> H >> M;
	cin >> C;

	if ((C + M) >= 60)
	{
		H += (C+M)/60;
		M = ((C + M) % 60);
	}
	else {
		M = C + M;
	}
	H = H % 24;
	cout << H << " " << M;
	return 0;
}