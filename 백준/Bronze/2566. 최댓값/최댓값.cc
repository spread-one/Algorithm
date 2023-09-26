#include<iostream>
using namespace std;

int main()
{	
	int max = 0;
	int index_x = 1;
	int index_y = 1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++) 
		{
			int n;
			cin >> n;
			if (max < n)
			{
				max = n;
				index_x = j;
				index_y = i;
			}
		}
	}
	cout << max << "\n" << index_y << " " << index_x;
	return 0;
}
