#include<iostream>
using namespace std;

int main()
{
	int X, N;
	cin >> X;
	cin >> N;
	int* list1 = new int[N];
	int* list2 = new int[N];
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> list1[i] >> list2[i];	
	}
	for (int i = 0; i < N; i++) 
	{
		sum += list1[i] * list2[i];
	}
	if (sum == X)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}