#include <iostream>
using namespace std;
int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}
int main()
{
    int ttc, res = 0;
    cin >> ttc;
    int arr[ttc];
    for (int i = 0; i < ttc; i++)
        cin >> arr[i];

    for (int i = 0; i < ttc; i++)
    {
        cout << fact(arr[i]) << endl;
    }
    return 0;
}