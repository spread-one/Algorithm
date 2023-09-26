#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(void)
{
	int n = 20;
	double sum = 0;
	double hsum = 0;
	for (int i = 0; i < n; i++)
	{
		string s, g;
		double h,newgrade;
		cin >> s >> h >> g;
		if (g == "A+")
		{
			newgrade = 4.5;
		}
		else if(g =="A0")
		{
			newgrade = 4.0;
		}
		else if (g == "B+")
		{
			newgrade = 3.5;
		}
		else if (g == "B0")
		{
			newgrade = 3.0;
		}
		else if (g == "C+")
		{
			newgrade = 2.5;
		}
		else if (g == "C0")
		{
			newgrade = 2.0;
		}
		else if (g == "D+")
		{
			newgrade = 1.5;
		}
		else if (g == "D0")
		{
			newgrade = 1.0;
		}
		else if (g == "F")
		{
			newgrade = 0.0;
		}
		else if (g == "P")
		{
			newgrade = 1;
			h = 0;
		}
		sum += newgrade * h;
		hsum += h;
	}
	cout<<setprecision(7) << sum / hsum;
	return 0;
}
