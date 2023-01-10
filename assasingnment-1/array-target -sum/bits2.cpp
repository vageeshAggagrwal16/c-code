#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 1, 2, 2, 8, 3, 3, 4, 4, 5};
    for (int i = 0; i < 10; i++)
    {
        if (!(arr[i] ^ arr[i + 1]))
        {
            i++;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}