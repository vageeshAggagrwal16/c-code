#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2;
    // cin>>n;
    int flag;
    int i = 2;
    while (i < n)
    {
        if (n == 1)
        {
            flag = 0;
        }
        else if (n % i == 0)
        {
            flag = 0;
            break;
        }

        else
        {
            flag = 1;
        }
        i++;
    }

    if (flag == 1)
    {
        cout << "Prime";
    }
    else if (flag == 0)
    {
        cout << "Not Prime";
    }
    return 0;
}
