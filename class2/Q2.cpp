#include <bits/stdc++.h>
using namespace std;
int main()
{
    string z = "acb";
    // cin>>z;
    int i = 0;
    int n = z.length();

    while (i < n)
    {
        cout << z[i];
        int a = (int)z[i + 1] - (int)z[i];
        if (i < n - 1)
        {
            cout << a;
        }
        i++;
    }

    return 0;
}