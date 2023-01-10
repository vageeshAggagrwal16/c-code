#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m = 5;
    cin >> m;
    // int i = 0;
    // int j = 1;
    int sum = 0;
    // while (i < n)
    // {
    //     while (j < n)
    //     {
    //         sum = arr[i] + arr[j];
    //         cout << sum;
    //         if (sum == m)
    //         {
    //             // cout << arr[i] << "and" << arr[j] << endl;
    //         }
    //         sum = 0;
    //         //
    //         // cout << i << j;
    //         j++;

    //         // cout << i << j;
    //     }
    //     i++;
    //     // cout << i << j;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            // cout << sum;
            if (sum == m)
            {
                cout << arr[i] << "and" << arr[j] << endl;
            }
            sum = 0;
        }
    }

    return 0;
}