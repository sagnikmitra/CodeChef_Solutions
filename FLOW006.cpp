#include <iostream>
using namespace std;
int main()
{
    int ttc, res = 0;
    cin >> ttc;
    int arr[ttc];
    for (int i = 0; i < ttc; i++)
        cin >> arr[i];

    for (int i = 0; i < ttc; i++)
    {
        while (arr[i] != 0)
        {
            res += arr[i] % 10;
            arr[i] = arr[i] / 10;
        }
        cout << res << endl;
        res = 0;
    }
    return 0;
}