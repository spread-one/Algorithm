#include<iostream>
using namespace std;

int main()
{
	int A, B, C, P;
	cin >> A >> B >> C;
	if (A == B && A == C)
	{
		P = 10000 + A * 1000;
	}
	else if (A == B || A == C || B == C)
	{
		if (A == B || B == C)
		{
			P = 1000 + B * 100;
		}
		else {
			P = 1000 + A * 100;
		}
	}
	else {
		if (A >= B && A >= C) 
		{
			P = A * 100;
		}
		else if (B >= A && B >= C)
		{
			P = B * 100;
		}
		else {
			P = C * 100;
		}
	}
	cout << P;
	return 0;
}