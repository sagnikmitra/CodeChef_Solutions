#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int flag = 0, i, num;
    cin >> i >> num;
    int arr[i];
    for (int j = 0; j < i; j++)
    {
        cin >> arr[j];
        if ((arr[j] % num) == 0)
            flag++;
    }
    cout << flag;
    return 0;
}
