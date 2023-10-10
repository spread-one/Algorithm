#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0)
		{
			break;
		}
		if (a > b && a > c)
		{
			if (a * a == (b * b + c * c))
			{
				cout << "right";
			}
			else
			{
				cout << "wrong";
			}
		}
		else if (b > a && b > c)
		{
			if(b * b == (a * a + c * c))
			{
				cout << "right";
			}
			else
			{
				cout << "wrong";
			}
		}
		else if (c > a && c > b)
		{
			if (c * c == (a * a + b * b))
			{
				cout << "right";
			}
			else
			{
				cout << "wrong";
			}
		}
		else
		{
			cout << "wrong";
		}
		cout << endl;

	}
	return 0;
}
