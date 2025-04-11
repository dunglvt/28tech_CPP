#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)

int prime(int n)
{
    FORNB(i, 2, sqrt(n))
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int main()
{
    int n;
    cin >> n;
    ll tong = 1ll * (n + 1) * n / 2;
    if (prime(tong % 10))
    {
        cout << "28tech";
    }
    else
    {
        cout << "29tech";
    }

    return 0;
}