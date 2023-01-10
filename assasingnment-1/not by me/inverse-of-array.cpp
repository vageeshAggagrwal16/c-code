#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int arr[n];

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}