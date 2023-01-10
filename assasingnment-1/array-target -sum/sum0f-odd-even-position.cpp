#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n = "2635";
    // cin>> n;
    int sume = 0;
    int sumo = 0;
    for (int i = 0; i < n.length(); i++)
    {
        sumo += (int)n[i] - 48;
        sume += (int)n[i] - 48;
    }
    cout << sumo << endl;
    cout << sume;

    return 0;
}