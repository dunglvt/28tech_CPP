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

void traiphai(ll n)
{
    if (n < 10)
    {
        cout << n << ' ';
        return;
    }
    traiphai(n / 10);
    cout << n % 10 << ' ';
}

void phaitrai(ll n)
{
    cout << n % 10 << ' ';
    if (n < 10)
    {
        return;
    }
    phaitrai(n / 10);
}

int main()
{
    fastIO;

    // code here
    ll n;
    cin >> n;
    traiphai(n);
    cout << endl;
    phaitrai(n);
    return 0;
}