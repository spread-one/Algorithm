#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	string s;
	int count = 0;
	cin >> s;
	while (s.find("c=") != string::npos)
	{
		s.replace(s.find("c="), 2, " ");
		count += 1;
	}
	while (s.find("c-") != string::npos)
	{
		s.replace(s.find("c-"), 2, " ");
		count += 1;
	}
	while (s.find("dz=") != string::npos)
	{
		s.replace(s.find("dz="), 3, " ");
		count += 1;
	}
	while (s.find("lj") != string::npos)
	{
		s.replace(s.find("lj"), 2, " ");
		count += 1;
	}
	while (s.find("nj") != string::npos)
	{
		s.replace(s.find("nj"), 2, " ");
		count += 1;
	}
	while (s.find("s=") != string::npos)
	{
		s.replace(s.find("s="), 2, " ");
		count += 1;
	}
	while (s.find("z=") != string::npos)
	{
		s.replace(s.find("z="), 2, " ");
		count += 1;
	}
	while (s.find("d-") != string::npos)
	{
		s.replace(s.find("d-"), 2, " ");
		count += 1;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (int(s[i]) != 32)
		{
			count += 1;
		}
	}
	cout << count;
	return 0;
}