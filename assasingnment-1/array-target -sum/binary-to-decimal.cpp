#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int sum = 0;
    int remain;
    // int newn;
    while (n > 0)
    {
        remain = n % 10;

        sum += remain * pow(2, i);
        n = n / 10;
        i++;
    }
    cout << sum;

    return 0;
}