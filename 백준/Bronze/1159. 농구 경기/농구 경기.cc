#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string namebox[150];
    int namenum[26] = { 0 };

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> namebox[i];
        namenum[namebox[i][0] - 'a']++; 
    }

    bool isPredaja = true; 
    for (int i = 0; i < 26; i++) 
    {
        if (namenum[i] >= 5) 
        {
            cout << char('a' + i);
            isPredaja = false; 
        }
    }

    if (isPredaja) 
    {
        cout << "PREDAJA"; 
    }

    return 0;
}
