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

int posfirst(int a[], int n, int l, int r, int x)
{
    int pos = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] >= x)
        {
            r = m - 1;
            pos = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return pos;
}

int posLast(int a[], int n, int l, int r, int x)
{
    int pos = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] > x)
        {
            r = m - 1;
            pos = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return pos;
}

int main()
{
    fastIO;

    // code here
    int n, x;
    cin >> n >> x;

    int a[n];
    for (int &i : a)
    {
        cin >> i;
    }

    sort(a, a + n);

    int fiPos = posfirst(a, n, 0, n - 1, x);
    int laPos = posLast(a, n, 0, n - 1, x);
    cout << fiPos << endl;
    cout << laPos << endl;
    if (a[fiPos] == x)
    {
        cout << fiPos << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    if (a[fiPos] == x)
    {
        cout << laPos - 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    cout << laPos - fiPos << endl;
    return 0;
}