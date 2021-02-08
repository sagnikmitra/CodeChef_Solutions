#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define foi(n) for (int i = 0; i < n; i++)
#define foj(n) for (int j = 0; j < n; j++)
#define fot for (i = 0; i <)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define wge(n) while (n >= 0)
#define wg(n) while (n > 0)
#define wle(n) while (n <= 0)
#define wl(n) while (n < 0)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define si2(x, y) scanf("%d%d", &x, &y)
#define sl2(x, y) scanf("%lld", &x, &y)
#define ss2(s) scanf("%s", s)
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
int fun(int num)
{

    return num;
}
int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
int main()
{
    int rem = 0, rev = 0, counter = 0, ttc;
    int num1 = 0, num2 = 0, tmp1, tmp2;
    cin >> ttc;
    while (ttc--)
    {
        cin >> num1;
        int arr1[num1];
        cin >> arr1[0] >> arr1[1];
        rem = gcd(arr1[0], arr1[1]);
        for (int i = 2; i < num1; i++)
        {
            cin >> arr1[i];
            rem = gcd(rem, arr1[i]);
        }
        foi(num1)
        {
            cout << arr1[i] / rem << " ";
        }
        cout << endl;
    }
    return 0;
}