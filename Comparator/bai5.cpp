#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool cmp(pair<pair<int, int>, int> x, pair<pair<int, int>, int> y)
{
    if (x.first.first == y.first.first)
    {
        if (x.first.second == y.first.second)
        {
            return x.second < y.second;
        }
        else
        {
            return x.first.second < y.first.second;
        }
    }
    return x.first.first < y.first.first;
}

int main()
{
    int n;
    cin >> n;

    pair<pair<int, int>, int> a[n];

    for (pair<pair<int, int>, int> &x : a)
    {
        cin >> x.first.first >> x.first.second >> x.second;
    }

    sort(a, a + n, cmp);

    for (pair<pair<int, int>, int> x : a)
    {
        cout << x.first.first << ' ' << x.first.second << ' ' << x.second << endl;
    }
    return 0;
}