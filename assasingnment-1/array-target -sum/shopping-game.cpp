#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2;
    // cin>>n;
    int i = 0;
    int x = 9;
    int y = 3;
    int sumodd = 1;
    int sumev = 0;
    while (i < n)
    {
        // cin>>x;
        // cin>>y;
        while (sumev <= y)
        {
            sumev += 2;

            // cout << sumodd << endl;
        }
        while (sumodd <= x)
        {

            sumodd += 1;
            // sumev += 2;
            // cout << sumodd << endl;
        }
        // sumev += 2;
        // // cout<<x<<y;
        if (sumev > sumodd)
        {
            cout << "Ha" << endl;
        }
        else if (sumodd > sumev)
        {
            cout << "Auyush" << endl;
        }
        i++;
    }

    return 0;
}
