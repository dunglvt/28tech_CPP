#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

// data type
#define ll long long
#define ull unsigned long long

// STL
#define FORL(i, l, r) for (auto i = l; i <= r; i++)
#define FORR(i, r, l) for (auto i = r; i >= l; i--)
#define fi first
#define se second

// constant
#define MOD 1000000007
#define PI 3.14

int tong(ll n)
{
    if (n < 10)
    {
        return n;
    }
    return n % 10 + tong(n / 10);
}

int main()
{
    fastIO;

    // code here
    ll n;
    cin >> n;

    cout << tong(n);
    return 0;
}