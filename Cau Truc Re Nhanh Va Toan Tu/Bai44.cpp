#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)

int main()
{
    int n;
    cin >> n;
    cout << 1ll * (n + 1) * n / 2 << endl;
    cout << 1ll * n * (n + 1) * (2 * n + 1) / 6 << endl;
    int count = 0;
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            ++count;
            tong += i;
        }
    }
    cout << count << endl;
    cout << tong << endl;
    return 0;
}