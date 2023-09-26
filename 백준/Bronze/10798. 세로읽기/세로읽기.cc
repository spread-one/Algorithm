#include<iostream>
#include<string>
using namespace std;

int main()
{	
	string box[5][15]{};
	for (int i = 0; i < 5; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			box[i][j] = s[j];
		}
	}
	for (int k=0; k<15; k++)
	{
		for (int p = 0; p < 5; p++)
		{
			cout << box[p][k];
		}
	}
	
	
	return 0;
}
