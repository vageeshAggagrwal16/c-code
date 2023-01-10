// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {};
//     arr[3] = 90;
//     cout << arr[6] << endl; // print garbage value
//     ;
//     char vowels[] = {'a', 'e', 'i', 'o', 'u'};
//     cout << vowels[0];
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[10] = {};
int arrsize = sizeof arr / 4;
int main()
{
    arr[0] = 100;
    arr[arrsize - 1] = 1000;
    cout << arr[9];
    // cout << arrsize;
}
