#include <iostream>
#include <math.h>
#include <algorithm>

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
    int max_digit = -1e9;
    int x = 0; // chu so dau tien
    while (n)
    {
        max_digit = fmax(max_digit, n % 10);
        x = n % 10;
        n /= 10;
    }
    if (x >= max_digit)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}