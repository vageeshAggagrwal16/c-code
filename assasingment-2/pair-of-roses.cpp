#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int m;
        cin >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((arr[j] + arr[j + 1]) == m)
                {
                    cout << "Deepak should buy roses whose prices are" << arr[j] << "and" << arr[j + 1] << " 40." << endl;
                }
            }
        }
    }

    return 0;
}