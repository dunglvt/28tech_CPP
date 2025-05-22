#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

// data type
#define ll long long
#define ull unsigned long long

// STL
#define forl(i, l, r) for (auto i = l; i <= r; i++)
#define forr(i, r, l) for (auto i = r; i >= l; i--)
#define fi first
#define se second

// constant
#define MOD 1000000007
#define PI 3.14

int main()
{

    fastIO;

    // code here
    vector<int> v;
    int n;
    cin >> n;

    forl(i, 0, n - 1)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        if (x == 2)
        {
            if (!v.empty())
            {
                v.pop_back();
            }
        }
    }

    if (v.empty())
    {
        cout << "EMPTY";
    }
    else
    {
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        {
            cout << *it << ' ';
        }
    }
    return 0;
}

