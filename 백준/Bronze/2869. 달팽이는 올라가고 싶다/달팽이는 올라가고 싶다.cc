#include <iostream>
using namespace std;
int main()
{
	int a, b, v;
	cin >> a >> b >> v;
	int n;
	//도착하고 남는 경우 (a-b) * n-1 + a > v
	//딱 도착하는 경우 (a-b) * n-1 + a = v
	//v/(a-b)
	//v/(a-b)-a-1
	for (int i = (v/(a-b)-a-1); i <= (v / (a - b)) + 1; i++)
	{
		if (i < 0)
			continue;
		if (((a - b) * (i - 1) + a) >= v)
		{
			cout << i;
			break;
		}	
	}
	return 0;
}

