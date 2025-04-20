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
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = n; i >= 0; i--)
    {
        cout << i << " ";
    }

    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 97; i < 97 + n; i++)
    {
        cout << (char)i << " ";
    }
    cout << endl;
    for (int i = 122 - n + 1; i <= 122; i++)
    {
        cout << (char)i << " ";
    }

    return 0;
}