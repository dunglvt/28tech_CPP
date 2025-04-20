#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += 1ll * i * i;
    }
    cout << sum;

    return 0;
}