#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n = "abcg";
    // cin>>n;
    for (int i = 0; i < n.length(); i += 2)
    {
        char m = char(int(n[i]) + 1);
        char y = char(int(n[i + 1] - 1));
        swap(n[i], m);
        swap(n[i + 1], y);
    }
    cout << n;

    return 0;
}