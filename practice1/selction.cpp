#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cout << "arrasize";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; i < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[n];
    }
}