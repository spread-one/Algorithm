#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int t = 1;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2 * n  - 2 * t; j++)
        {
            cout << '*';
        }
        cout << '\n';
        t += 1;
    }
}
