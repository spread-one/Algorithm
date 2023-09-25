#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s, s1;
	char tmp;
	cin >> s;
	s1 = s;
	for (int i = 0; i < s.length()/2; i++)
	{
		tmp = s[i];
		s[i] = s[s.length() - i - 1];
		s[s.length() - i - 1] = tmp;
	}
	if (s1 == s)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
