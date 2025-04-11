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
    int a, b;
    cin >> a >> b;
    double thuong = 1.0 * a / b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << 1ll * a * b << endl;
    if (b == 0)
    {
        cout << "INVALID" << endl;
    }
    else
    {
        cout << fixed << setprecision(4) << thuong << endl;
    }

    return 0;
}