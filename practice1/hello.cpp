#include <iostream>
#include <string>
using namespace std;
int p()
{
    cout << "hello world  ";
    return 1;
}
int z()
{
    int mynum = 5;
    cout << mynum << endl;
}

// multiple variable

int a()
{
    int x = 5, y = 3, z = 2;
    cout << x + y + z;
}
// constant variable
int q()
{
    const int x = 10; // this will remain x=10

    cout << x;
}
int w()
{
    int x;
    cout << "type your no :";
    cin >> x;
    cout << "here is your no :" << x;
}
int m()
{
    string ok = "hello";
    cout << ok;
}

int y()
{
    int x = 2;
    int y = 9;
    cout << (x < y);
}

int l()
{
    string f1 = "ok ";
    string f2 = "fuck you ";
    cout << f1 + f2;
    cout << f1.append(f2);
}
int h()
{
    char f1 = 96;
    char f2 = 1;
    cout << f1 + f2;
}

//  STRING ACCESS
int t()
{
    string ol = "hello";
    cout << ol[4];
}

int name()
{
    string name1;
    cout << "first name :";
    getline(cin, name1);
    cout << " your name :" << name1;
}
// main will go first
int main()
{
    cout << p() << endl;
    cout << " \\ yo hello " << endl;
    z();
    a();
    q();
    cout << "  " << endl;
    // w();
    cout << "  " << endl;
    // ifyou cout true it will print 1
    cout << true;
    cout << "  " << endl;
    m();
    cout << "  " << endl;
    y();
    cout << "  " << endl;
    l();
    cout << "  " << endl;
    h();
    cout << "  " << endl;
    t();
    cout << "  " << endl;
    name(); // cin elements he input after space so we use getline
}

// this for comment
/* for multiple comment*/
