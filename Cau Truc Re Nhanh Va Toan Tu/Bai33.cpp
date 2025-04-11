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
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int tong = a + b + c + n;
    if (tong % 3 == 0)
    {
        if (tong / 3 < a || tong / 3 < b || tong / 3 < c)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}