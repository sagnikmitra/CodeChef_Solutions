#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int ttc;
    int num;
    cin >> ttc;
    while (ttc--)
    {
        cin >> num;
        int fact_step = 2;
        int counter = 0;
        int length = 1;
        int carry = 0;
        int arr[100000] = {0};
        arr[0] = 1;
        while (fact_step <= num)
        {
            int counter = 0;
            int carry = 0;
            while (counter < length)
            {
                arr[counter] = (arr[counter] * fact_step) + carry;
                carry = arr[counter] / 10;
                arr[counter] = arr[counter] % 10;
                counter++;
            }
            while (carry != 0)
            {
                arr[length] = carry % 10;
                carry = carry / 10;
                length++;
            }
            fact_step++;
        }
        length--;
        while (length >= 0)
        {
            cout << arr[length];
            length--;
        }
        cout << endl;
    }
}
