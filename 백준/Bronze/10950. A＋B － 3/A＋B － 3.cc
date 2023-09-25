#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* list1 = new int[n];
	int* list2 = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> list1[i] >> list2[i];	
	}
	for (int i = 0; i < n; i++) 
	{
		cout << list1[i] + list2[i] << endl;
	}
	return 0;
}