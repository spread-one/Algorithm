#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == b && b == c && a == 0)
			break;
		else if (a + b <= c || a + c <= b || b + c <= a)
			cout << "Invalid";
		else if (a == b && b == c)
			cout << "Equilateral";
		else if (a == b || b == c || a == c)
			cout << "Isosceles";
		else
			cout << "Scalene";
		cout << endl;
	}
	return 0;
}