#include<iostream>
using namespace std;

int main(void)
{
	int n, max, min;
	cin >> n;
	int box[1000000] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> box[i];
	}
	max = box[0];
	min = box[0];
	for (int j = 1; j < n; j++)
	{
		if (box[j] > max)
		{
			max = box[j];
		}
		else if (box[j] < min) 
		{
			min = box[j];
		}
	}
	cout << min << " " << max << endl;
	return 0;
}