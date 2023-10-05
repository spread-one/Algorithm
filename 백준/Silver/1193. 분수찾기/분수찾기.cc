#include<iostream>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	int key = 0;
	int sum = 1;
	int i = -1;
	while (sum<=n)
	{
		i++;
		sum += key;
		key += 1;
	}
	int le = (n % (sum - key + 1))+1;
	if (i % 2 == 0)
	{
		i = i - le + 1;
		cout << le << "/" << i;
	}
	else
	{
		i = i - le + 1;
		cout << i << "/" << le;
	}
	return 0;
}