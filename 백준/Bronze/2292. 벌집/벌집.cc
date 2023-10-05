#include<iostream>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	int sum = 7;
	int key = 12;
	int i = 3;
	while (1)
	{
		sum += key;
		key += 6;
		if (n <= sum)
			break;
		i += 1;
	}
	if (n == 1)
	{
		cout << 1;
	}
	else if (n <= 7)
	{
		cout << 2;
	}
	else 
	{
		cout << i;
	}
		
	return 0;
}