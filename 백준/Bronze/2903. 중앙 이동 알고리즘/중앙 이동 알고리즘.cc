#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int sum = 4;
	int bun = 4;
	int sagak = 1;
	int plus = 1;
	for (int i = 1; i <= t; i++)
	{
		sagak *= 4;
		plus *= 2;
		bun += plus;
		sum = sagak + bun;
	}
	cout << sum-1;
	
	return 0;
}
// 변의 수 + 사각형의 수 = 다음번에 추가되는 점의 수
//사각형의 개수는 4배가 되고 변의 개수는 
// 변수 2 (+1) 3 (+2) 5 (+4) 9 (+8) 17 .....
// 변수-1 * 변수 + 2 = 변의 수	