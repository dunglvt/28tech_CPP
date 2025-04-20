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
    int check = 0;
    if (n == 0)
    {
        cout << "29tech";
        return 0;
    }

    while (n != 0)
    {
        if ((n % 10) % 2 == 0)
        {
            cout << "29tech";
            check = 1;
            return 0;
        }
        n /= 10;
    }
    if (check == 0)
    {
        cout << "28tech";
    }

    return 0;
}