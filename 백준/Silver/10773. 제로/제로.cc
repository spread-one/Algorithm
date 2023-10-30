#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> stack;
	int sum = 0;
	int minus = 0;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		if (k == 0)
		{
			minus = stack.back();
			stack.pop_back();
			sum -= minus;
		}
		else 
		{
			stack.push_back(k);
			sum += k;
		}
	}
	cout << sum;
	return 0;
}

