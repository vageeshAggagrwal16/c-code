#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, max_num;
    cin >> x >> y;
    if (x > y)
    {
        max_num = x;
    }
    else
    {
        max_num = y;
    }
    if (max_num % x == 0 && max_num % y == 0)
    {
        cout << max_num;
        // break;
    }
    else
    {
        max_num++;
    }

    return 0;
}