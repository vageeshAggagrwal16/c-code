#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string v = "aeiou";
    int count = 0;
    for (int i = 0; i < n.length(); i++)
    {
        for (int j = 0; j < v.length(); j++)
        {
            if (n[i] == v[j])
            {
                count++;
                v[j] = ' ';
            }
        }
    }
    cout << count;
    return 0;
}