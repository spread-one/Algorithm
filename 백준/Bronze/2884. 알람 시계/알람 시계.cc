#include<iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;
	if (M < 45) {
		if (H == 0) {
			H = 23;
		}
		else {
			H = H - 1;
		}
		M = M - 45;
		cout << H << " " << 60 + M;
	}
	else {
		cout << H << " " << M - 45;
	}

	return 0;
}