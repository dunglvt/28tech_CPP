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
    char a[n];
    int count = 0;
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (isdigit(a[i]))
        {
            tong += a[i] - '0';
        }
        if (isalpha(a[i]))
        {
            ++count;
        }
    }

    cout << count << endl;
    cout << tong;
    return 0;
}