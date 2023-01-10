#include <bits/stdc++.h>
using namespace std;

void sumArr(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = arr[i] + 1;
    }
}

int main()
{
    vector<int> arr;
    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i);
    }

    cout << arr.size() << endl;
    sumArr(arr);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}