#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n = "abC";
    // cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        int m = int(n[i]);
        int nw;
        if (m > 96)
        {
            nw = m - 32;
            cout << char(nw);
        }
        else if (91 > m > 64)
        {
            nw = m + 32;
            cout << char(nw);
        }
    }

    return 0;
}