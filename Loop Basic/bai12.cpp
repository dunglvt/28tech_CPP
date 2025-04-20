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
    ll n;
    cin >> n;
    int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
    while (n != 0)
    {
        int dv = n % 10;
        if (dv == 2)
        {
            ++s2;
        }
        else if (dv == 3)
        {
            ++s3;
        }
        else if (dv == 5)
        {
            ++s5;
        }
        else if (dv == 7)
        {
            ++s7;
        }
        n /= 10;
    }

    if (s2 != 0)
    {
        cout << 2 << " " << s2 << endl;
    }
    if (s3 != 0)
    {
        cout << 3 << " " << s3 << endl;
    }
    if (s5 != 0)
    {
        cout << 5 << " " << s5 << endl;
    }
    if (s7 != 0)
    {
        cout << 7 << " " << s7 << endl;
    }

    return 0;
}