#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int n;
	int sum = 0;
	string s, t;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		t = s[i];
		sum += stoi(t);
	}
	cout << sum;
	return 0;
}