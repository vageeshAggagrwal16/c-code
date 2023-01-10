#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int heights[10000] = {0, 2, 1, 3, 0, 1, 2, 1, 2, 1};
    int n = 10; // nimber of building
    // int leftmax = 0;
    // int rightmax = 0;
    int water = 0;
    for (int i = 1; i < n; i++)
    {
        int leftmax = 0;
        int rightmax = 0;
        int j = i;
        while (j >= 0)
        {
            leftmax = max(leftmax, heights[j]);
            j--;
        }
        int k = i;
        while (k < n)
        {
            rightmax = max(rightmax, heights[k]);
            k++;
        }
        int curr = (min(leftmax, rightmax) - heights[i]);
        water += curr;
        }
    cout << water;
}