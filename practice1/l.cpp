#include <iostream>
using namespace std;
int main()
{
    int goal;
    cin >> goal;
    int sum = 0;
    int i;
    for (i = 1; i < goal; i++)
    {
        cout << i;
        if (sum + i < goal)
        {
            sum = sum + i;
        }
        else
        {
            cout << i;
            break;
        }
    }
}

// 23
// int main()
// {
//     int x, y;
//     cin >> x;
//     cin >> y;
//     if (x <= 0 || y <= 0)
//     {
//         cout << 0;
//     }
//     else
//         (

//         )
// }

// 24

// int main()
// {
//     int x;
//     cin >> x;
//     int i;
//     for (i = 2; i < x; i++)
//     {
//         if (x % i != 0)
//         {
//             continue;

//         }

//     }

// }