#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)
#define PI 3.14

int main()
{
    int r;
    cin >> r;
    double c = 2 * PI * r;
    double s = PI * r * r;
    cout << fixed << setprecision(4) << c << " ";
    cout << fixed << setprecision(4) << s;
    return 0;
}