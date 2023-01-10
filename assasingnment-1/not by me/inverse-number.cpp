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
        v.push_back(n % 10);
        n = n / 10;
    }

    int arr[v.size() + 1];

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i]] = i + 1;
    }

    reverse(arr, arr + v.size() + 1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i];
    }
}
