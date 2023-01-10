// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int m;

//     cin >> m;

//     int i = 0;
//     int flag;
//     while (i < n)
//     {
//         if (arr[i] == m)
//         {
//             flag = i;
//         }
//         else
//         {
//             flag = -1;
//         }

//         i++;
//     }

//     cout << flag;

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << arr[i] << " " << endl;
//     // }

//     return 0;
// }
// ///////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1;
    // cin>>n;
    int flag;
    int i = 2;
    while (i < n)
    {
        if (n == 1)
        {
            flag = 1;
        }
        else if (n % i == 0)
        {
            flag = 1;
            break;
        }

        else
        {
            flag = 0;
        }
        i++;
    }

    if (flag = 0)
    {
        cout << "Prime";
    }
    else if (flag = 1)
    {
        cout << "Not Prime";
    }
    return 0;
}
