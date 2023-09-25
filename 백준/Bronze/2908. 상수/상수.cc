#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string s1, s2;
	
	cin >> s1 >> s2;
	int tmp;
	for (int i = 0; i < 3; i++)
	{
		tmp = s1[i];
		s1[i] = s2[2-i];
		s2[2-i] = tmp;
	}
	if (stoi(s1) > stoi(s2))
	{
		cout << s1;
	}
	else 
	{
		cout << s2;
	}
	return 0;
}