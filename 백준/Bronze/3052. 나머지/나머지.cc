#include<iostream>
using namespace std;

int main(void)
{
	int temp;
	int count = 0;
	int box[10];
	for (int p = 0; p < 10; p++)
	{
		box[p] = -1;
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		int tok = 1;
		for (int j = 0; j < 10; j++)
		{
			if (box[j] == (temp % 42))
			{
				tok = 0;
			}
		}
		if (tok == 1)
		{
			box[i] = temp % 42;
		}
	}

	for (int k = 0; k < 10; k++)
	{
		if (box[k] != -1)
		{
			count += 1;
		}
	}

	cout << count;
	return 0;
}