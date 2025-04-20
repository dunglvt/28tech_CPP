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
    int even = 0;
    int odd = 0;
    if (n == 0)
    {
        cout << "28tech";
        return 0;
    }

    while (n)
    {
        int tmp = n % 10;
        if (tmp & 1)
        {
            ++odd;
        }
        else
        {
            ++even;
        }
        n /= 10;
    }
    if (odd < even)
    {
        cout << "28tech";
    }
    else
    {
        cout << "29tech";
    }

    return 0;
}