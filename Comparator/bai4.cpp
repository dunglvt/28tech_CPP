#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    int kc1 = pow(x.first, 2) + pow(x.second, 2);
    int kc2 = pow(y.first, 2) + pow(y.second, 2);

    if (kc1 == kc2)
    {
        if (x.first == y.first)
        {
            return x.second < y.second;
        }
        else
        {
            return x.first < y.first;
        }
    }
    return kc1 < kc2;
}

int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];

    for (pair<int, int> &i : a)
    {
        cin >> i.first >> i.second;
    }

    sort(a, a + n, cmp);

    for (pair<int, int> x : a)
    {
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}