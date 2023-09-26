#include<iostream>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int h, w, n;
		cin >> h >> w >> n;
		int f = n % h;
		int r = n / h + 1;
		
		if (f == 0)
		{
			f = h;
			r -= 1;
		}
		cout << f * 100 + r << endl;
	}

	return 0;
}
