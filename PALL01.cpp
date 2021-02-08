#include <iostream>
using namespace std;
int main()
{
    int rev = 0, num;
    int ttc;
    cin >> ttc;
    while (ttc--)
    {
        rev = 0;
        cin >> num;
        int tmp = num;
        while (num > 0)
        {
            rev = (rev * 10) + (num % 10);
            num /= 10;
        }
        if (tmp == rev)
            cout << "wins" << endl;
        else
            cout << "loses" << endl;
    }
    return 0;
}