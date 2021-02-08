// #include <iostream>
// using namespace std;
// int main()
// {
//     int t, ld, fd;
//     cin >> t;
//     int arr[t], sum[t];
//     while (t--)
//     {
//         for (int i = 0; i < t; i++)
//         {
//             cin >> arr[i];
//             ld = arr[i] % 10;
//             arr[i] = arr[i] / 10;
//             while (arr[i] / 10 >= 1)
//                 arr[i] = arr[i] / 10;
//             fd = arr[i];
//             cout << ld + fd << endl;
//         }
//     }
// }

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char a[10];
    while (t--)
    {
        scanf("%s", a);
        printf("%ld\n", (a[0] - '0' + a[strlen(a) - 1] - '0'));
    }
}