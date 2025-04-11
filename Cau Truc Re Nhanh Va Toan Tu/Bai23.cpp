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
    int n, m;
    cin >> n >> m;
    int max = n;
    int min = 0;
    int check = 0;
    if (n % 2 == 0)
    {
        min = n / 2;
    }
    else
    {
        min = n / 2 + 1;
    }

    for (int i = min; i <= max; i++)
    {
        if (i % m == 0)
        {
            check = 1;
            cout << i;
            break;
        }
    }

    if (check == 0)
    {
        cout << -1;
    }

    return 0;
}