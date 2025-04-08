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
    int x, y, z, t;
    cin >> x >> y >> z >> t;
    cout << fmax(x, y) << endl;
    cout << fmin(z, t) << endl;
    cout << fmax(fmax(x, y), z) << endl;
    cout << fmin(fmin(fmin(x, y), z), t);
    return 0;
}