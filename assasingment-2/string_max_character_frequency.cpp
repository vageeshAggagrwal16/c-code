#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n = "aaabacb";
    // cin>>n;
    int count = 0;
    int y = INT_MIN;
    // int l = n.length();
    char ans;
    for (int i = 0; i < n.length(); i++)
    {
        for (int j = i + 1; j < n.length(); j++)
        {
            if (n[i] == n[j])
            {
                count++;
                // cout << n[i];
                if (count > y)
                {
                    ans = n[i];
                    // cout << n[i] << endl;
                    y = count;
                }
            }
        }
        count = 0;
    }
    cout << ans;
    // cout << y;

    return 0;
}