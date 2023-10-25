#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (1)
	{
		int n;
		int key = 0;
		cin >> n;
		if (n == 0)
			break;
		string strn = to_string(n);
		for (int i = 0; i < strn.length()/2+strn.length()%2; i++)
		{
			if (strn[i] == strn[strn.length() -1- i])
			{
				continue;
			}
			else {
				key = 1;
				break;
			}
		}
		if (key == 0)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	return 0;
}
