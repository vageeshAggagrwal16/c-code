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

    int q;
    cin >> q;
    vector<pair<int, int>> v2;

    for (int i = 0; i < q; i++)
    {
        int value;
        int count;
        cin >> value >> count;
        v2.push_back(make_pair(value, count));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v2.size(); i++)
    {
        int x = v2[i].first;
        int y = v2[i].second;

        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] <= x && x % v[j] == 0)
            {
                count++;
            }
        }
        if (count >= y)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }
}
