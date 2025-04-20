#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    ll tong = 0;
    for (int i = 0; i <= n; i++)
    {
        tong += i;
    }
    cout << tong;
    return 0;
}