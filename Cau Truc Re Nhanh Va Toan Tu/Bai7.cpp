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

    for (int i = a; i >= 0; i--)
    {
        if (i % b == 0)
        {
            cout << i << " ";
            break;
        }
    }

    for (int i = a;; i++)
    {
        if (i % b == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}