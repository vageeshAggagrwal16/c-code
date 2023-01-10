#include <iostream>
#include <string>
using namespace std;
int main()
{

    int n;
    int arr[n];
    cout << "size of array" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int z = 0; z < n; z++)
    {
        cout << arr[z] << endl;
    }
}