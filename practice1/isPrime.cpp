/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
bool checkprime(int n)
{
    bool is_prime;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            return is_prime;
        }
    }
    is_prime = true;
    return is_prime;
}
int main()
{
    int n;
    cin >> n;

    bool is_prime = true;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
        }
    }
    if (is_prime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    // if (checkprime(n))
    // {
    //     cout << "prime";
    // }
    // else
    // {
    //     cout << "not prime";
    // }
}
