#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < i; j++)
        {
            cout << "	";
        }

        for (int j = n - i + 1; j >= 0; j--)
        {
            cout << j << "	";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << "	";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "	";
    }
    cout << 0 << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "	";
        }

        for (int j = i; j >= 0; j--)
        {
            cout << j << "	";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << "	";
        }

        cout << endl;
    }
}
