// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int l = 0;
//     // string m;
//     string k;
//     while (l < n)
//     {
//         // cin>>m;
//         cin >> k;
//         l++;
//     }

//     int i = 0;
//     int sumEv = 0;
//     int sumOd = 0;

//     while (i < n)
//     {
//         if (% 2 == 0)
//         {
//             sumEv += arr[i];
//         }
//         else
//         {
//             sumOd += arr[i];
//         }
//         i++;
//     }
//     if (sumEv % 4 == 0 || sumOd % 3 == 0)
//     {
//         cout << "Yes";
//     }
//     else
//     {
//         cout << "No";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    // cin >> n;
    int j = 0;
    // int arr[n];
    while (j < n)
    {
        string x = "12134";
        // cin >> x;

        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i]<<endl;
        // }

        int i = 0;
        int sumEv = 0;
        int sumOd = 0;

        while (i < x.length())
        {
            int m = (int)x[i] - 48;
            if (m % 2 == 0)
            {
                sumEv += m;
            }
            else
            {
                sumOd += m;
            }
            i++;
        }
        if (sumEv % 4 == 0 || sumOd % 3 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " " << endl;
        // }
        j++;
    }
    return 0;
}