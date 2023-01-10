#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "	";
        }
        int x = i;
        int l = i;
        vector<int> v;
        for (int j = x; l > 0; j++)
        {
            cout << j << "	";
            v.push_back(j);
            l--;
        }

        for (int j = v.size() - 2; j >= 0; j--)
        {
            cout << v[j] << "	";
        }

        cout << endl;
    }
}