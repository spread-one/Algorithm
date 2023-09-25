#include<iostream>
using namespace std;

int main(void)
{
	int temp;
	int box[30];
	for (int i = 1; i <= 30; i++)
	{
		box[i - 1] = i;
	}

	for (int j = 1; j <= 28; j++)
	{
		cin >> temp;
		for (int k = 1; k <= 30; k++)
		{
			if (temp == box[k - 1])
			{
				box[k - 1] = 0;
			}
		}
	}
	for (int p = 1; p <= 30; p++)
	{
		if (box[p - 1] != 0)
		{
			cout << box[p - 1]<<endl;
		}
	}
	return 0;
}