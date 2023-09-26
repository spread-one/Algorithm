#include<iostream>
#include<string>
using namespace std;

int main()
{
	int ascending = 0;
	int descending = 0;
	int box[9];
	for (int i = 0; i < 8; i++)
	{
		cin >> box[i];
	}
	for (int j = 0; j < 7; j++)
	{
		if (box[j] < box[j + 1])
		{
			ascending += 1;
		}
		else if (box[j] > box[j + 1])
		{
			descending += 1;
		}
	}
	if (ascending == 0)
	{
		cout << "descending";
	}
	else if (descending == 0)
	{
		cout << "ascending";
	}
	else
	{
		cout << "mixed";
	}
	return 0;
}
