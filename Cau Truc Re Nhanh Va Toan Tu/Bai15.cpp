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
    long long n;
    int a, b;
    scanf("%lld %d %d", &n, &a, &b);

    if (1.0 * a <= (1.0 * b / 2))
    {
        cout << 1ll * a * n;
    }
    else
    {
        if (n & 1)
        {
            cout << 1ll * n / 2 * 2 * b / 2 + a;
        }
        else
        {
            cout << 1ll * n * b / 2;
        }
    }
    return 0;
}