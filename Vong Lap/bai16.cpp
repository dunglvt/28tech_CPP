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

    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            ++count;
            n /= 10;
        }
    }
    cout << count;
    return 0;
}