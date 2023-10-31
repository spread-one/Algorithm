#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> stack;
	for (int i = 0; i < n; i++)
	{
		string order;
		int k = 0;
		cin >> order;
		if (order == "push_back")
		{	
			cin >> k;
			stack.push_back(k);
		}
		else if (order == "push_front")
		{
			cin >> k;
			stack.insert(stack.begin(), k);
		}
		else if (order == "pop_front")
		{
			if (!stack.empty())
			{
				cout << stack.front() << endl;
				stack.erase(stack.begin());
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (order == "pop_back")
		{
			if (!stack.empty())
			{
				cout << stack.back() << endl;
				stack.pop_back();
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (order == "size")
		{
			cout << stack.size() << endl;
		}
		else if (order == "empty")
		{
			if (!stack.empty())
			{
				cout << 0 << endl;
			}
			else
			{
				cout << 1 << endl;
			}
		}
		else if (order == "front")
		{
			if (!stack.empty())
			{
				cout << stack.front() << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (order == "back")
		{
			if (!stack.empty())
			{
				cout << stack.back() << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}
	return 0;
}

