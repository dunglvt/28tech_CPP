#include <iostream>
#include <math.h>

using namespace std;

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)

int main()
{
    ll x, y, z, t;
    cin >> x >> y >> z >> t;
    cout << y << "," << z << "," << x << "," << t << endl;
    cout << x + y + z + t << endl;
    cout << x - y + z * t << endl;
    return 0;
}