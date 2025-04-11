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
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int q1 = d1 + d3 + d3 + d1;
    int q2 = d2 + d3 + d3 + d2;
    int q3 = d1 + d1 + d2 + d2;
    int q4 = d1 + d3 + d2;
    int min = fmin(fmin(fmin(q1, q2), q3), q4);
    cout << min;
    return 0;
}