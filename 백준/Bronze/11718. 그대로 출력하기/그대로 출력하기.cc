#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string s;
	for (int i = 0; i < 100; i++)
	{
		getline(cin, s);
		for (int j = 0; j < s.length(); j++)
		{
			cout << s[j];
		}
		cout << endl;
	}
	return 0;
}