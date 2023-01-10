#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a;
    // getline(cin, a);
    // int i = 0;
    // int j = size - i;
    // while (i<j){
    //     swap(a[i], a[j]);
    //     i++;
    //     j--;}
    string s1 = "abcddjj";
    string s2 = "dcf";

    // s1.append(s2);
    // s2 = s1.substr(2, 3);
    // s1.push_back('g');
    // s1.pop_back();
    // cout << s2;
    // cout << s1;

    string f = "hello";
    // char c = 'd';
    // cout << (int)f[1];

    string z = "acbs";
    // cin>>z;
    int i = 0;
    int n = z.length();

    while (i < n)
    {
        cout << z[i];
        int a = (int)z[i + 1] - (int)z[i];
        if (i < n - 1)
        {
            cout << a;
        }
        i++;
    }

    return 0;
}