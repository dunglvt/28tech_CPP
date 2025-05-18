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

void dem(ll n, int b[])
{
    if (n == 0)
    {
        b[0]++;
        return;
    }
    while (n)
    {
        int dv = n % 10;
        b[dv]++;
        n /= 10;
    }
    return;
}

int main()
{

    fastIO;

    // code here
    int n;
    cin >> n;
    ll a[n];
    int b[100] = {0};
    FORL(i, 0, n - 1)
    {
        cin >> a[i];
        dem(a[i], b);
    }

    FORL(i, 0, 9)
    {
        if (b[i] != 0)
        {
            cout << i << ' ' << b[i] << endl;
        }
    }
    return 0;
}
