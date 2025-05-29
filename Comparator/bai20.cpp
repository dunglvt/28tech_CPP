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

bool cmp(string a, string b)
{
    return a < b;
}

int main()
{
    fastIO;

    // code here
    int n;
    cin >> n;

    vector<string> v(n);

    for (string &i : v)
    {
        cin >> i;
    }

    sort(v.begin(), v.end(), cmp);

    for (string i : v)
    {
        cout << i << ' ';
    }

    cout << endl;

    sort(v.begin(), v.end(), greater<string>());

    for (string i : v)
    {
        cout << i << ' ';
    }
    return 0;
}