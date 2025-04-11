#include <iostream>
#include <math.h>
#include <iomanip>

#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll gio = n / 3600;
    ll phut = (n % 3600) / 60;
    cout << gio << "h : " << phut << "m : " << n - gio * 3600 - phut * 60 << "s";
    return 0;
}