#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)

ll chuSo(ll n)
{
    ll count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

ll tong(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    while (chuSo(n) > 1)
    {
        sum += tong(n);
        n = tong(n);
    }
    cout << n;
    return 0;
}