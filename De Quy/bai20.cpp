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
    if (n == 1)
    {
        return 0;
    }

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    if (n % 2 == 0)
    {
        cnt1 = 1 + dem(n / 2);
    }
    else if (n % 3 == 0)
    {
        cnt2 = 1 + dem(n / 3);
    }
    else if (n > 1)
    {
        cnt3 = 1 + dem(--n);
    }

    return max(max(cnt1, cnt2), cnt3);
}

int main()
{
    fastIO;

    // code here
    int n;
    cin >> n;
    cout << dem(n);
    return 0;
}