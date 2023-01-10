#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n = "12345789";
    // cin>>n;

    for (int i = n.length() - 1; i >= 0; i--)
    {
        int m = (int)n[i] - (int)'0';
        cout << m;
    }

    return 0;
}