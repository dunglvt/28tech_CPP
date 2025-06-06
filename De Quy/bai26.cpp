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

int findPos(int a[], int x, int l, int r, int n)
{
    if (l > r)
    {
        return n;
    }
    else
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            int res = findPos(a, x, l, mid - 1, n);
            return min(mid, res);
        }
        else
        {
            return findPos(a, x, mid + 1, r, n);
        }
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

    int x;
    cin >> x;

    cout << findPos(a, x, 0, n - 1, n);
    return 0;
}