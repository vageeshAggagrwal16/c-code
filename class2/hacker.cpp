#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int sumEv = 0;
    int sumOd = 0;

    while (i < n)
    {
        if (arr[i] % 2 == 0)
        {
            sumEv += arr[i];
        }
        else
        {
            sumOd += arr[i];
        }
        i++;
    }
    if (sumEv % 4 == 0 || sumOd % 3 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    return 0;
}

/////////////////////////

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int x;
    int y;
    while (i < n)
    {
        cin >> x;
        cin >> y;
        // cout<<x<<y;
        if (x > y)
        {
            cout << "Aayush" << endl;
        }
        else if (y > x)
        {
            cout << "Harshit";
        }
        i++;
    }

    // if(x>y){
    // 	cout<<"Aayush"<<endl;
    // }
    // else if(y>x){
    // 	cout<<"Harshit";
    // }

    return 0;
}

/////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;

    int i = 0;
    while (i < n)
    {
        if (arr[i] == m)
        {
            cout << i;
        }
        else
        {
            cout << -1;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    return 0;
}
