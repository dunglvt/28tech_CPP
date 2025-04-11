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
    int n;
    cin >> n;
    if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" < endl;
    }

    return 0;
}