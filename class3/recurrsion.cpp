#include <bits/stdc++.h>
using namespace std;
void printnum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printnum(n - 1);
}

// ////////////////////////////////////////

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int ans = n * fact(n - 1);
    return ans;
}

// ////////fibonachi
int fibna(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fibna(n - 1) + fibna(n - 2);
}

// ///////////  check if array is sorted

bool issorted(int arr[], int n)
{
    if (n == 0)
    {
        return true;
    }

    if (arr[n] > arr[n - 1])
    {
        return true;
    }
    else
    {
        return false;
    }
    issorted(arr, n - 1);
}

int itt(int x, int m)
{
    if (m == 0)
    {
        return 0;
    }
    int ass = x * itt(x , m-1);
    return ass;
}
int main()
{

    printnum(5);
    cout << fact(5) << endl;
    cout << fibna(10);
    cout << itt(2, 5);

    return 0;
}
