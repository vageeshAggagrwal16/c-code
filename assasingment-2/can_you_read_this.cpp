#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (int(n[i]) > 96)
        {
            cout << n[i];
        }
        else if (int(n[i] < 97))
        {
            cout << endl;
            cout << n[i];
        }
    }

    return 0;
}