#include <bits/stdc++.h>
using namespace std;
int ct(int t)
{
    int count = 0;
    while (t > 0)
    {
        t = t / 10;
        count++;
    }
    return count;
}

bool armstr(int n)
{

    // int arr[n] ;
    int sum = 0;
    int remain = n;
    int temp;
    // int count = 1;
    int t = ct(n);
    // cout << ct(3715);
    // int l= n.length();

    while (remain > 0)
    {
        temp = remain % 10;
        remain = remain / 10;

        sum += pow(temp, t);
    }
    if (sum == n)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

int main()
{
    armstr(371);

    return 0;
}
