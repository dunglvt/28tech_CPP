#include <iostream>
#include <cmath>

#define MOD 1000000007

#define ll long long

using namespace std;

ll luyThua(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    ll X = luyThua(a, n / 2); // a^(n/2)
    X %= MOD;
    if (n % 2 == 1)
    {
        return (X % MOD * X % MOD * a % MOD) % MOD;
    }
    else
    {
        return (X % MOD * X % MOD) % MOD;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << luyThua(a, b);
    return 0;
}