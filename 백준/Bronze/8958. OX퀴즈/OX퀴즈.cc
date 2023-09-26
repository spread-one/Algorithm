#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	int get = 1;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				sum += get;
				if (str[j + 1] == 'O')
				{
					get += 1;
				}
				else
				{
					get = 1;
				}
			}
		}
		cout << sum << "\n";
		get = 1;
		sum = 0;
	}

	return 0;
}
