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

bool kt(int a[], int l, int n)
{
    if (l == n - 1)
    {
        return true;
    }
    if (a[l + 1] - a[l] > 0)
    {
        return kt(a, l + 1, n);
    }
    else
    {
        return false;
    }
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
    if (kt(a, 0, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}