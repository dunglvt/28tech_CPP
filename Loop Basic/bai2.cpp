#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i += 3)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= n;)
    {
        cout << i << " ";
        i *= 2;
    }
    cout << endl;

    for (int i = n;; i++)
    {
        if (i % 17 == 0)
        {
            cout << i << endl;
            break;
        }
    }

    for (int i = n - 1; i >= 1; i--)
    {
        if (i % 7 == 0)
        {
            cout << i << endl;
            break;
        }
    }

    int count = 1;
    for (int i = 1; i <= n;)
    {
        cout << i << " ";
        i += count;
        ++count;
    }

    return 0;
}