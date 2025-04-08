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
    int x;
    ll y;
    char c;
    float f;
    double d;
    cin >> x >> y >> c >> f >> d;

    cout << x << endl;
    cout << y << endl;
    cout << c << endl;
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(9) << d << endl;
    return 0;
}