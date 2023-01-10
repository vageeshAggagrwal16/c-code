#include <iostream>
#include <string>
using namespace std;
int main()
{
    const double pricesmallroom = 25.0;
    const double pricelargeroom = 35.0;
    const double salestax = 0.06;

    cout << " welcome " << endl;

    int smallroom;
    cout << "small rooms cleaned \n";
    cin >> smallroom;

    int largeroom;
    cout << "large rooms cleaned \n";
    cin >> largeroom;

    cout << "====================================================" << endl;

    cout << " Estimate" << endl;
    cout << "no. of small rooms " << smallroom << endl;
    cout << "no. of large rooms " << largeroom << endl;
    int y = pricesmallroom * smallroom;
    int x = pricelargeroom * largeroom;
    double sum = x + y + salestax;
    cout << "total estimate " << sum;
}
