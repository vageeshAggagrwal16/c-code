#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool temp = 0;
        int a, b;
        cin >> a >> b;
        int num = 1;
        while (1)
        {
            if (temp == 0)
            {
                if (a == 0 || (a - num) < 0)
                {
                    cout << "Harshit\n";
                    break;
                }
                else
                {
                    a = a - num;
                    num++;
                    temp = 1;
                }
            }
            else
            {
                if (b == 0 || (b - num) < 0)
                {
                    cout << "Aayush\n";
                    break;
                }
                else
                {
                    b = b - num;
                    num++;
                    temp = 0;
                }
            }
        }
    }
    return 0;
}