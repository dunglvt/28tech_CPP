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
    int n, m, a;
    int sh, sc;
    cin >> n >> m >> a;

    if (m % a == 0)
    {
        sh = m / a;
    }
    else
    {
        sh = m / a + 1;
    }
    if (n % a == 0)
    {
        sc = n / a;
    }
    else
    {
        sc = n / a + 1;
    }

    cout << 1ll * sh * sc;
    return 0;
}