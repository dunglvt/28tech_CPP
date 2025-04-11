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
    int n;
    cin >> n;
    if (n >= 1000)
    {
        cout << n * 4500 + 1200000;
    }
    else if (n < 1000 && n >= 800)
    {
        cout << n * 3900 + 900000;
    }
    else if (n < 800 && n >= 500)
    {
        cout << n * 3700 + 800000;
    }
    else
    {
        cout << n * 3300;
    }

    return 0;
}