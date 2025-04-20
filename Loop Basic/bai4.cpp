#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)

int main()
{
    int n;
    cin >> n;
    int i = 3, j = 0;
    while (i <= n)
    {
        cout << i << " ";
        i += 3;
    }
    cout << endl;
    while (j < n)
    {
        cout << j << " ";
        j += 15;
    }
    cout << endl;
    for (int k = n;; k++)
    {
        if (k % 7 == 0)
        {
            cout << k << endl;
            break;
        }
    }
    for (int u = n; u >= 0; u--)
    {
        if (u % 9 == 0)
        {
            cout << u << endl;
            break;
        }
    }
    for (int t = 1; t <= 2 * n - 1; t += 2)
    {
        cout << t << " ";
    }

    return 0;
}