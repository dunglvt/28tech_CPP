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
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double diem = (a + b + 2 * c + 3 * d) / 7;
    if (diem >= 8)
    {
        cout << "GIOI";
    }
    else if (diem >= 6.5)
    {
        cout << "KHA";
    }
    else if (diem >= 5)
    {
        cout << "TRUNG BINH";
    }
    else
    {
        cout << "YEU";
    }

    return 0;
}