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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll min = fminl(fminl(fminl(a, b), c), d);
    ll max = fmaxl(fmaxl(fmaxl(a, b), c), d);
    cout << max << " " << min;
    return 0;
}