#include <bits/stdc++.h>
using namespace std;

void perm(string s, int i)
{
    if (s[i] == '\0')
    {
        cout << s << endl;
    }
    for (int j = i; s[j] != '\0'; j++)
    {
        swap(s[i], s[j]);
        perm(s, i + 1);
        swap(s[i], s[j]);
    }
}

// ///////////////////////////////////////
// ///////////////////////////////////////

string repla(string s)
{
    if (s.length() == 0)
    {
        return "\0";
    }

    string sub = s.substr(0, 2);
    if (sub == "pi")
    {
        return "3.14" + repla(s.substr(2));
    }
    else
    {
        return s.substr(0, 1) + repla(s.substr(1));
    }
}

int main()
{
    // int n = 3;
    // // cin>>n;
    // int arr[n] = {1, 2, 3};
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cin >> arr[i];
    // // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int temp;
    //         temp = arr[j];
    //         arr[j] = arr[i];
    //         arr[i] = temp;
    //         for (int i = 0; i < n; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    // }
    string s1 = "123";
    // cin >> s1;
    perm(s1, 0);
    cout << repla("aaajcnpicjddnpinccnpi");

    return 0;
}