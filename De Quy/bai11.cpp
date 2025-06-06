#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

#define MOD 1000000007

#define ll long long

using namespace std;

void bin(ll n)
{
    if (n == 0)
    {
        cout << 0;
        return;
    }
    if (n > 1)
    {
        bin(n / 2);
    }
    cout << n % 2;
}

int main()
{
    ll n;
    cin >> n;

    bin(n);
    return 0;
}