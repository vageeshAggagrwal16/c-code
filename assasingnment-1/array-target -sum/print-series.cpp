// //////////////   my attempt

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 100000;
//     int j = 10;
//     // cin>>j;
//     int arr[n];
//     int k = 4;

//     // cin>>k;

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = 3 * (i + 1) + 2;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int flag = i + 1;
//         if (arr[i] % k != 0 && flag <= j)
//         {
//             cout << arr[i] << endl;
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << arr[i] << endl;
//     // }

//     return 0;
// }

// //////////////////  right answer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1 = 10;
    int n2 = 4;
    // cin >> n1 >> n2;
    int count = 0;
    int i = 1;
    // cout<<1;
    while (count <= n1)
    {
        int x = (3 * i + 2);
        if (x % n2 != 0)
        {
            cout << x << endl;
            count++;
        }
        i++;
    }

    return 0;
}