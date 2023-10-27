#include <iostream>
using namespace std;
int main()
{
	int a, b, v;
	cin >> a >> b >> v;
	int n;
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

