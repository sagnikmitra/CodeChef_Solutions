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
        while (arr[i] > 1)
        {
            arr[i] *= (arr[i] - 1);
        }
        cout << arr[i] << endl;
    }
    return 0;
}