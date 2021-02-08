#include <iostream>
using namespace std;

int array[1000001] = {0};

int main()
{
    int i, j;
    cin >> j;
    int x;
    for (i = 0; i < j; i++)
    {
        cin >> x;
        array[x]++;
    }

    for (i = 0; i < 1000001; i++)
    {
        while (array[i] > 0)
        {
            cout << i <<endl;
            array[i]--;
        }
    }

    return 0;
}