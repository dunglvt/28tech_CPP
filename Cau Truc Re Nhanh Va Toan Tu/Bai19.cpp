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
    int m, n;
    cin >> m >> n;
    if (m & 1)
    {
        cout << 1ll * m / 2 * n + n / 2;
    }
    else
    {
        cout << 1ll * m / 2 * n;
    }

    return 0;
}