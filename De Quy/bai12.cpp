#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

#define MOD 1000000007

#define ll long long

using namespace std;

void hex(ll n)
{
    if (n >= 16)
    {
        hex(n / 16);
    }
    int k = n % 16;
    if (k > 9)
    {
        if (k == 10)
        {
            cout << 'A';
        }
        if (k == 11)
        {
            cout << 'B';
        }
        else if (k == 12)
        {
            cout << 'C';
        }
        else if (k == 13)
        {
            cout << 'D';
        }
        else if (k == 14)
        {
            cout << 'E';
        }
        else if (k == 15)
        {
            cout << 'F';
        }
    }
    else
    {
        cout << n % 16;
    }
}
int main()
{
    ll n;
    cin >> n;

    hex(n);
    return 0;
}