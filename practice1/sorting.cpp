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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int z = 0; z < n; z++)
    {
        cout << arr[z] << endl;
    }
}