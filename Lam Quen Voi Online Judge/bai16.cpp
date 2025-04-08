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
    cout << x << "  " << y << "  " << z << "  " << t << endl
         << endl;
    cout << y << "--" << z << "--" << x << "--" << t << endl
         << endl;
    cout << 2 * x << "," << 1ll * 3 * y << "," << 1ll * 4 * z << "," << 1ll * 5 * t << endl
         << endl;
    cout << "KET THUC !!";
    return 0;
}