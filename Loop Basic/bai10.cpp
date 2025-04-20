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
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        ++count;
        temp /= 10;
    }
    int tmp = 0;
    if (count & 1)
    {
        while (n != 0)
        {
            ++tmp;
            if (tmp == (count / 2 + 1))
            {
                cout << n % 10;
                return 0;
            }
            n /= 10;
        }
    }
    else
    {
        cout << "NOT FOUND";
    }

    return 0;
}