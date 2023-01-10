#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;

    while (n > 0)
    {
        int rem = n % 10;
        v.push_back(rem);
        n = n / 10;
    }

    reverse(v.begin(), v.end());

    int even = 0;
    int odd = 0;

    int flag = 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (flag == 1)
        {
            odd += v[i];
            flag = 0;
        }
        else if (flag == 0)
        {
            even += v[i];
            flag = 1;
        }
    }
    cout << odd << endl;
    cout << even << endl;
}
