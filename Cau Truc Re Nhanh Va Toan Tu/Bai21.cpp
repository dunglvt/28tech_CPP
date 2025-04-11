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
    int a, b, k;
    cin >> a >> b >> k;
    if (k % 2 == 0)
    {
        cout << 1ll * k / 2 * (a - b);
    }
    else
    {
        cout << 1ll * k / 2 * (a - b) + a;
    }

    return 0;
}