#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << (arr[i][0] + arr[i][1]) << endl;
    }
    return 0;
}