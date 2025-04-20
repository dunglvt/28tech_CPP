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
    int check = 0;
    cin >> a >> b;
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        {
            cout << i << " ";
            check = 1;
        }
    }
    if (check == 0)
    {
        cout << "28tech";
    }

    return 0;
}