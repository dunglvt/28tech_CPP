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

int search(int a[], int x, int l, int r)
{
    if (l > r)
    {
        return 0;
    }
    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            return 1;
        }
        else if (a[mid] < x)
        {
            return search(a, x, l, mid - 1);
        }
        else
        {
            return search(a, x, mid + 1, r);
        }
    }
    return search(a, x, l, r);
}

int main()
{
    fastIO;

    // code here
    int n, x;
    cin >> n;
    int a[n];
    for (int &i : a)
    {
        cin >> i;
    }

    cin >> x;
    cout << search(a, x, 0, n - 1);
    return 0;
}