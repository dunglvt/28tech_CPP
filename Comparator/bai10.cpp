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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (abs(a.first - a.second) == abs(b.first - b.second))
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        else
        {
            return a.first < b.first;
        }
    }
    return abs(a.first - a.second) < abs(b.first - b.second);
}

int main()
{
    fastIO;

    // code heren
    int n;
    cin >> n;

    pair<int, int> a[n];

    for (pair<int, int> &x : a)
    {
        cin >> x.first >> x.second;
    }

    sort(a, a + n, cmp);

    for (pair<int, int> x : a)
    {
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}