#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 5, 78, 8};
    int b[] = {58, 2, 94, 8};
    int n;
    n = 9;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = a[i];
    }
    int j = 0;
    for (int i = 5; i < 9;)
    {
        arr[i] = b[j];
        j++;
        i++;
        // for (int j = 0; j < 4; j++)
        // {
        //     arr[i]=b[j];
        // }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}