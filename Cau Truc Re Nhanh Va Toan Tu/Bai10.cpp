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
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}