#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = (n / 2) + 1;
    int y = (n / 2);

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            cout << "	";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << "	";
        }

        for (int j = 1; j <= i - 1; j++)
        {
            cout << "*"
                 << "	";
        }

        for (int j = x - 1; j > 0; j--)
        {
            cout << "	";
        }

        cout << endl;
    }

    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "	";
        }

        for (int j = 1; j <= y - i + 1; j++)
        {
            cout << "*"
                 << "	";
        }

        for (int j = 1; j <= y - i; j++)
        {
            cout << "*"
                 << "	";
        }

        cout << endl;
    }
}