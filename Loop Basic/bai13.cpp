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
    int sum = 0;
    if (n < 0)
    {
        cout << "NEGATIVE";
        return 0;
    }
    else
    {
        while (n != 0)
        {
            if (n % 2 == 0)
            {
                sum += n % 10;
            }

            n /= 10;
        }
    }
    cout << sum;

    return 0;
}