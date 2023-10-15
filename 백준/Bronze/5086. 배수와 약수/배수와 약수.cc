#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0)
			break;
		else if (a % b == 0)
		{
			cout << "multiple";
		}
		else if (b % a == 0)
		{
			cout << "factor";
		}
		else
		{
			cout << "neither";
		}
		cout << "\n";
	}
	return 0;
}