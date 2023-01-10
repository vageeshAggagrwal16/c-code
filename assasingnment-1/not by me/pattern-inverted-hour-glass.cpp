#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x = n;
        for (int j = 1; j <= i; j++)
        {
            cout << x << "	";
            x--;
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "	";
        }
        cout << "	";
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << "	";
        }

        int l = n - i + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << l << "	";
            l++;
        }

        cout << endl;
    }

    for (int i = n; i >= 0; i--)
    {
        cout << i << "	";
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << "	";
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int x = n;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << x << "	";
            x--;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "	";
        }

        for (int j = 1; j < i; j++)
        {
            cout << "	";
        }

        int h = n - i + 1;
        for (int j = i; h != 0; j++)
        {
            cout << j << "	";
            h--;
        }

        cout << endl;
    }
}