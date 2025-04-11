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
    int a, b, c;
    cin >> a >> b >> c;
    if (fmax(fmax(a, b), c) < (a + b + c) / 2)
    {
        if (a == b && b == c)
        {
            cout << 1;
        }
        else if ((a == b && b != c) || (a == c && b != a) || (c == b && b != a))
        {
            cout << 2;
        }
        else if (a * a + b * b == c * c || a * a == b * b + c * c || a * a + c * c == b * b)
        {
            cout << 3;
        }
        else
        {
            cout << 4;
        }
    }
    else
    {
        cout << "INVALID";
    }

    return 0;
}