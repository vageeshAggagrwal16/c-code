#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n = "acb";
    // cin>>n;
    for (int i = 0; i < n.length(); i++)
    {
        int m = int(n[i + 1]) - int(n[i]);
        cout << n[i] << m;
    }

    return 0;
}