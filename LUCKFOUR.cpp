#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num, ttc, flag = 0;
    cin >> ttc;
    while (ttc--)
    {
        cin >> num;
        while (num > 0)
        {
            if (num % 10 == 4)
                flag++;
            num = num / 10;
        }
        cout << flag << endl;
        flag = 0;
    }
}
