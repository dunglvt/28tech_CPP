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

int maxx = -1e9;
int minn = 1e9;

void findMax(ll n)
{
    if (n == 0)
    {
        return;
    }
    findMax(n / 10);
    maxx = fmax(maxx, n % 10);
}

void findMin(ll n)
{
    if (n == 0)
    {
        return;
    }
    findMin(n / 10);
    minn = fmin(minn, n % 10);
}

int main()
{
    fastIO;

    // code here
    ll n;
    cin >> n;

    findMax(n);
    findMin(n);
    cout << maxx << ' ' << minn;
    return 0;
}