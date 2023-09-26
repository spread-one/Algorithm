#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b, c, result;
	int box[58]{};
	cin >> a >> b >> c;
	result = a * b * c;
	string newresult = to_string(result);
	for (int i = 0; i < newresult.length(); i++)
	{
		box[int(newresult[i])] += 1;
	}
	for (int j = 48; j <= 57; j++)
	{
		cout << box[j] << endl;
	}
	return 0;
}
