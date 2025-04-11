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
    int t100, t20, t10, t5, t1;
    t100 = n / 100;
    t20 = (n % 100) / 20;
    t10 = ((n % 100) % 20) / 10;
    t5 = (((n % 100) % 20) % 10) / 5;
    t1 = ((((n % 100) % 20) % 10) % 5) / 1;
    cout << t100 + t20 + t10 + t5 + t1;
    return 0;
}