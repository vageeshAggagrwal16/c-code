#include <bits/stdc++.h>
using namespace std;
int main()
{

    string n;
    cin >> n;
    char j;
    cin >> j;
    int flag = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == j)
        {
            flag++;
        }
    }
    cout << flag;

    // cout << int('5' - '0');

    return 0;
}