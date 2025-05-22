#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> m;

    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int k, f;
            cin >> k >> f;
            if (k <= (int)v.size() && k >= 0)
            {
                v.insert(v.begin() + k, f);
            }
        }
        else if (x == 2)
        {
            int k;
            cin >> k;
            if (k < (int)v.size() && k >= 0)
            {
                v.erase(v.begin() + k);
            }
        }
    }

    if (v.empty())
    {
        cout << "EMPTY";
    }
    else
    {
        for (auto x : v)
        {
            cout << x << ' ';
        }
    }
    return 0;
}

