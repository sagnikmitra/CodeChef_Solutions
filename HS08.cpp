#include <iostream>
using namespace std;
float calbal(int amt, float bal)
{
    float ans;
    if (amt <= bal - 0.5)
    {
        if (amt % 5 == 0)
        {
            ans = bal - (amt + 0.5);
        }
        else
            ans = bal;
    }
    else
        ans = bal;
    return ans;
}
int main()
{
    int amt;
    float bal;
    cin >> amt >> bal;
    cout << calbal(amt, bal);
}