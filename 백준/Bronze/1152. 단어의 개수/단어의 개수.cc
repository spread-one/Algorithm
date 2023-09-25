#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string s;
	int count = 1;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (int(s[i])==32 && i!=0 && i!=s.length()-1)
		{
			count += 1;
		}
	}
	if (s.length() == 1 && int(s[0]) == 32)
	{
		count -= 1;
	}
	cout << count;
	return 0;
}