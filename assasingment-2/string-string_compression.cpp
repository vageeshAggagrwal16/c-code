#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n = "aaabbccds";
    // cin>>n;
    int count = 1;

    int l = n.length();
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (n[i] == n[j])
            {
                count++;
            }
            else
            {
                cout << n[i];
                break;
            }
        }

        cout << count;

        i = count;
        cout << i;
        count = 1;
    }

    return 0;
}