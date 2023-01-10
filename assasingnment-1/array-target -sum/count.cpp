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

int main()
{
    cout << ct(5828);
}