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
    double n;
    cin >> n;
    if (n - (int)n < 0.5)
    {
        cout << (int)n;
    }
    else
    {
        cout << (int)n + 1;
    }

    return 0;
}