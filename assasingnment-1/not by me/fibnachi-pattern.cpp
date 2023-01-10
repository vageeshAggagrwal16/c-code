#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[100];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < 100; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    /*for(int i=0;i<100;i++){
        cout << arr[i] << " ";
    }
    */
    int index = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << arr[index] << "	";
            index++;
        }
        cout << endl;
    }
}