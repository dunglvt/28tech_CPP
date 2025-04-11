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
    ll n, s;
    cin >> n >> s;
    if (s % n == 0)
    {
        cout << (s / n);
    }
    else
    {
        cout << (s / n) + 1;
    }

    return 0;
}