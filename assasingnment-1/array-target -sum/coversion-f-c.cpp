#include <bits/stdc++.h>
using namespace std;
int main()
{
    int minf = 0;
    int maxf = 100;
    int step = 20;
    int c;
    while (minf < maxf)
    {
        // float c = (5 / 9) * (minf - 32);
        // minf = (c * 9.0) / 5.0 + 32;
        c = (minf - 32) / 1.8;
        cout << c << endl;
        // cout << minf << " " << c;
        minf += step;
    }

    return 0;
}