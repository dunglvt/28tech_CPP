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

int dem(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int cnt = 0;
    while (n)
    {
        int dv = n % 10;
        if (dv == 0 || dv == 6 || dv == 8)
        {
            ++cnt;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b)
{
    if (dem(a) == dem(b))
    {
        return a < b;
    }
    return dem(a) > dem(b);
}

int main()
{
    fastIO;

    // code here
    int n;
    cin >> n;
    int a[n];

    for (int &x : a)
    {
        cin >> x;
    }

    sort(a, a + n, cmp);

    for (int x : a)
    {
        cout << x << ' ';
    }
    return 0;
}