// #include <bits/stdc++.h>
// using namespace std;

// WRONG
// WRONG
// WRONG
// WRONG
// WRONG
// WRONG
// WRONG
// WRONG
// WRONG

// void swap(int &a, int &b)
// {
//     int c = a;
//     a = b;
//     b = c;
// }

// int main()
// {
//     srand(time(NULL));
//     int n = 16;
//     int a[16];
//     for (int i = 0; i < 16; i++)
//     {
//         a[i] = rand() % 20;
//         cout << a[i] << " ";
//     }

//     int b[16][5];
//     for (int i = 0; i < 16; i++)
//     {
//         b[i][0] = 1;
//     }

//     while (n > 1)
//     {
//         for (int i = 0; i < n / 2; i++)
//         {
//             if (a[i] > a[n - i - 1])
//             {
//                 max = i
//                 b[i][b[i][0]] = a[n - i - 1];
//                 b[i][0]++;
//             }
//             else
//             {
//                 b[n - i - 1][b[n - i - 1][0]] = a[i];
//                 b[n - i - 1][0]++;
//                 swap(a[i], a[n - i - 1]);
//             }
//         }
//         n = n / 2;
//     }

//     int max = a[0];
//     cout << endl
//          << "Maximum : " << max << endl;

//     int smax = b[a[0]][1];
//     for (int i = 2; i <= b[max][0]; i++)
//     {
//         if (smax < b[max][i])
//             smax = b[max][i];
//     }

//     cout << "Second Maximum : " << smax;
//     return 0;
// }