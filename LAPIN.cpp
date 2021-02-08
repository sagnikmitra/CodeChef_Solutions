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
    int num1 = 0, num2 = 0, tmp1, tmp2;
    cin >> ttc;
    while (ttc--)
    {
        counter = 0;
        string s;
        cin >> s;
        int arr_left[26] = {0};
        int arr_right[26] = {0};
        int length = s.length();
        for (int i = 0; i < length / 2; i++)
        {
            int index = s[i] - 'a';
            arr_left[index]++;
        }
        for (int i = (length + 1) / 2; i < length; i++)
        {
            int index = s[i] - 'a';
            arr_right[index]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr_left[i] != arr_right[i])
                counter++;
        }
        if (counter == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}