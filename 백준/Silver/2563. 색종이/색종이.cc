#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int box[100][100]{};
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				box[j][k] = 1;
			}
		}
	}
	for (int j = 0; j < 100; j++)
	{
		for (int k = 0; k < 100; k++)
		{
			if (box[j][k] == 1)
			{
				count += 1;
			}
		}
	}
	cout << count;
	return 0;
}
