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

int x;

bool cmp1(int a, int b)
{
    int absa = abs(a - x);
    int absb = abs(b - x);
    if (absa == absb)
    {
        return a < b;
    }
    return absa < absb;
}

bool cmp2(int a, int b)
{
    bool evena = (a % 2 == 0);
    bool evenb = (b % 2 == 0);

    if (evena && evenb)
    {
        return a < b;
    }
    if (!evena && !evenb)
    {
        return a > b;
    }
    return evena > evenb;
}

int main()
{
    fastIO;

    // code here
    int n, i = 0;
    cin >> n >> x;
    int a[n], b[n];
    for (int &x : a)
    {
        cin >> x;
        b[i++] = x;
    }

    sort(a, a + n, cmp1);

    for (int x : a)
    {
        cout << x << ' ';
    }

    cout << endl;
    sort(b, b + n, cmp2);

    for (int x : b)
    {
        cout << x << ' ';
    }
    return 0;
}