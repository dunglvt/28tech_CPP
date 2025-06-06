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

void traiPhai(int a[], int l, int n)
{
    if (l > n - 1)
    {
        return;
    }
    if (l < n)
    {
        cout << a[l] << ' ';
    }
    traiPhai(a, l + 1, n);
}

void phaiTrai(int a[], int r)
{
    if (r < 0)
    {
        return;
    }
    if (r >= 0)
    {
        cout << a[r] << ' ';
    }
    phaiTrai(a, r - 1);
}

int main()
{
    fastIO;

    // code here
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
    {
        cin >> i;
    }

    traiPhai(a, 0, n);
    cout << endl;
    phaiTrai(a, n - 1);
    return 0;
}