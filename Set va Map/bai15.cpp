#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> ms;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int k;
            cin >> k;
            ms.insert(k);
        }
        else if (x == 2)
        {
            int k;
            cin >> k;
            if (ms.find(k) != ms.end())
            {
                ms.erase(ms.find(k));
            }
        }
        else if (x == 3)
        {
            int k;
            cin >> k;
            multiset<int>::iterator it = ms.lower_bound(k);
            if (it != ms.end())
            {
                cout << *it << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (x == 4)
        {
            int k;
            cin >> k;
            multiset<int>::iterator it = ms.upper_bound(k);
            --it;
            if (it != ms.end())
            {
                cout << *it << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}