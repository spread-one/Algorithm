#include <iostream>

using namespace std;

int main()
{
	int suma = 0;
	int sumb = 0;
	for (int i = 0; i < 4; i++)
	{
		int score;
		cin >> score;
		suma += score;
	}
	for (int i = 0; i < 4; i++)
	{
		int score;
		cin >> score;
		sumb += score;
	}
	if (suma > sumb)
		cout << suma;
	else
		cout << sumb;
	return 0;
}