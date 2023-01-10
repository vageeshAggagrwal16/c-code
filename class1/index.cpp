#include <iostream>
using namespace std;
int main()
{
    // swap without swap function
    int a = 5;
    int b = 6;
    a += b;
    b = a - b;
    a = a - b;
    cout << a << endl
         << b;
}  
