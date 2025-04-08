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
    int l, h;
    cin >> l >> h;
    cout << "Chu vi HCN la : " << (l + h) * 2 << endl;
    cout << "Dien tich HCN la : " << 1ll * l * h;
    return 0;
}