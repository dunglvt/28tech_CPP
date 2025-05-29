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

int sumEven(int n)
{
    int cnt = 0;
    if (n == 0)
    {
        return 1;
    }
    while (n)
    {
        if (!((n % 10) & 1))
        {
            ++cnt;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp_Even(int x, int y)
{
    int evenx = sumEven(x);
    int eveny = sumEven(y);
    if (evenx == eveny)
    {
        return x < y;
    }
    return evenx < eveny;
}

int sumOdd(int n)
{
    int cnt = 0;
    if (n == 0)
    {
        return 1;
    }
    while (n)
    {
        if ((n % 10) & 1)
        {
            ++cnt;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp_Odd(int x, int y)
{
    int oddx = sumOdd(x);
    int oddy = sumOdd(y);
    return oddx < oddy;
}

int main()
{
    fastIO;

    // code here
    int n, i = 0;
    cin >> n;
    int a[n], b[n];

    for (int &x : a)
    {
        cin >> x;
        b[i++] = x;
    }

    sort(a, a + n, cmp_Even);
    stable_sort(b, b + n, cmp_Odd);
    for (int x : a)
    {
        cout << x << ' ';
    }

    cout << endl;

    for (int x : b)
    {
        cout << x << ' ';
    }
    return 0;
}