#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(void)
{
	int n;
	int count = 0;
	string word;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> word;
		int box[123]{};
		for (int i = 0; i < word.length(); i++)
		{	
			if (box[int(word[i])] == 0)
			{
				if (word[i] != word[i + 1])
				{
					box[int(word[i])] = 1;
				}
			}
			else
			{
				count -= 1;
				break;
			}
		}
		count += 1;
	}
	cout << count;
	return 0;
}
