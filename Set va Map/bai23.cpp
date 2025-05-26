#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    for (pair<int, int> x : m)
    {
        if (x.second % 2 == 0)
        {
            cout << x.first << ' ' << x.second << endl;
        }
    }

    cout << endl;

    for (map<int, int>::reverse_iterator it = m.rbegin(); it != m.rend(); it++)
    {
        pair<int, int> x = *it;
        if (x.second % 2 == 0)
        {
            cout << x.first << ' ' << x.second << endl;
        }
    }
    return 0;
}