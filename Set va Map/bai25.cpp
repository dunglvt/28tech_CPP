#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int, greater<int>> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;
    cout << *s.begin() << ' ' << *(s.rbegin()) << endl;
    cout << *(++s.begin()) << ' ' << *(++s.rbegin()) << endl;
    return 0;
}