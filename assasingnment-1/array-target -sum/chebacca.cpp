#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        int m = n[i] - '0';
        int t = 9 - m;
        if (t < m)
        {
            cout << t;
        }
        else if (t == 0)
        {
            cout << t;
        }
        else if (t == 9)
        {
            cout << 9;
        }
        else
        {
            cout << m;
        }
    }

    return 0;
}