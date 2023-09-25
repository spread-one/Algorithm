#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string s;
	int count = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (int(s[i]) >= 65 && int(s[i]) <= 67)
		{
			count += 3;
		}
		else if (int(s[i]) >= 68 && int(s[i]) <= 70)
		{
			count += 4;
		}
		else if (int(s[i]) >= 71 && int(s[i]) <= 73)
		{
			count += 5;
		}
		else if (int(s[i]) >= 74 && int(s[i]) <= 76)
		{
			count += 6;
		}
		else if (int(s[i]) >= 77 && int(s[i]) <= 79)
		{
			count += 7;
		}
		else if (int(s[i]) >= 80 && int(s[i]) <= 83)
		{
			count += 8;
		}
		else if (int(s[i]) >= 84 && int(s[i]) <= 86)
		{
			count += 9;
		}
		else if (int(s[i]) >= 87 && int(s[i]) <= 90)
		{
			count += 10;
		}
	}

	cout << count;
	return 0;
}