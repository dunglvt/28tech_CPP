#include <iostream>
#include <math.h>

using namespace std;

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)

int main()
{
    double x;
    cin >> x;

    cout << (int)floor(x) << endl;
    cout << (int)ceil(x) << endl;
    cout << (int)round(x);
    return 0;
}