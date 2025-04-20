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
    ll n;
    cin >> n;
    int dau = 0;
    int cuoi = n % 10;
    if (n == 0)
    {
        cout << 0 << " " << 0;
        return 0;
    }
    while (n != 0)
    {
        dau = n % 10;
        n /= 10;
    }
    cout << dau << " " << cuoi;
    return 0;
}