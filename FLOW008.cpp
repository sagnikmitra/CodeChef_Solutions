#include <iostream>
using namespace std;
int main()
{
    int ttc;
    cin >> ttc;
    int num;
    while (ttc--)
    {
        cin >> num;
        if (num < 10)
            cout << "Thanks for helping Chef!" << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}