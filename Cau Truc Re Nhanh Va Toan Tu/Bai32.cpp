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
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int k256 = fmin(fmin(k2, k5), k6);
    if (k2 - k256 < k3)
    {
        cout << 1ll * 256 * k256 + 1ll * 32 * (k2 - k256);
    }
    else
    {
        cout << 1ll * 256 * k256 + 1ll * 32 * k3;
    }

    return 0;
}
