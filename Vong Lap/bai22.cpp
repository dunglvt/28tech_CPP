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
    int n, x;
    cin >> n;
    int check = 0;
    while (n--)
    {
        cin >> x;
        if (x == 2022)
        {
            check = 1;
        }
    }
    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}