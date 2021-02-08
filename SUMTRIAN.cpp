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
// int fun(int num)
// {
//     for(int i=num-2; i>=0;i--)
//     {
//         for(int j=0;j<i;j++)
//         {

//         }
//     }
//     return num;
// }
int main()
{
    int ttc, num1, num2, tmp2 = 0;
    int arr[100][100];
    cin >> ttc;
    while (ttc--)
    {
        ll r;
        cin >> r;
        int arr[r][r];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = r - 2; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                arr[i][j] = arr[i][j] + max(arr[i + 1][j], arr[i + 1][j + 1]);
            }
        }
        cout << arr[0][0] << endl;
    }
    return 0;
}