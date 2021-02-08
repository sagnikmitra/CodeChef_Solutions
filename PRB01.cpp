#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int ttc, num, flag = 0;
    cin >> ttc;
    while (ttc--)
    {
        flag = 0;
        cin >> num;
        if (num == 0 || num == 1)
            flag++;
        for (int i = 2; i < sqrt(num); i++)
        {
            if (num % i == 0)
            {
                flag++;
                break;
            }
        }
        if (flag > 0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}