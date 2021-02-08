#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define foi(n) for (i = 0; i < n; i++)
#define foj(n) for (j = 0; j < n; j++)
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
int main()
{
    ll int rem = 0, rev = 0, counter = 0, ttc;
    float GrossSalary = 0, BasicSalary = 0, HRA = 0, DA = 0;
    cin >> ttc;
    while (ttc--)
    {
        cin >> BasicSalary;
        if (BasicSalary < 1500)
        {
            HRA = BasicSalary * 0.1;
            DA = BasicSalary * 0.9;
        }
        else
        {
            HRA = 500;
            DA = BasicSalary * 0.98;
        }
        GrossSalary = BasicSalary + HRA + DA;
        cout << fixed << setprecision(2) << GrossSalary << endl;
    }
    return 0;
}