#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	
	string s;
	int abcbox[123];
	cin >> s;
	for (int i = 97; i < 123; i++)
	{
		abcbox[i] = -1;
		for (int j = s.length()-1; j > -1; j--)
		{
			if (int(s[j]) == i)
			{
				abcbox[i] = j;
			}
		}
		cout << abcbox[i] << " ";
	}

	return 0;
}