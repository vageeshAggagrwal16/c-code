#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    // cin>>n;
    int arr[n] = {7, 1, 5, 3, 6, 4};
    // for(int i=0;i<n;i++){
    // 	cin>>arr[i];
    // }
    int by;
    int sell;
    int profit = 0;
    int m;

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            m = arr[k] - arr[j];
            if (m > profit)
            {
                profit = m;
            }
        }
    }
    cout << profit;

    return 0;
}