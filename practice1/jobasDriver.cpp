#include <iostream>
#include <string>
using namespace std;
int main()
{

    int age;
    bool parent_consent;
    bool ssn;
    bool accidents;

    cout << " Age:" << endl;
    cin >> age;
    cout << "parent consent" << endl;
    cin >> parent_consent;
    cout << " social security no." << endl;
    cin >> ssn;
    cout << " accidents" << endl;
    cin >> accidents;

    if (age >= 18)
    {
        cout << " allowed";
    }
    else if (age > 15)
    {
        cout << "allowed";
    }
    else
    {
        cout << "not allowed";
    }
}