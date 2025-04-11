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
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    cin >> n;
    int tongCup = a1 + a2 + a3;
    int tongHuyChuong = b1 + b2 + b3;
    int socup, sohuychuong;
    if (tongCup % 5 == 0)
    {
        socup = tongCup / 5;
    }
    else
    {
        socup = tongCup / 5 + 1;
    }

    if (tongHuyChuong % 10 == 0)
    {
        sohuychuong = tongHuyChuong / 10;
    }
    else
    {
        sohuychuong = tongHuyChuong / 10 + 1;
    }

    if (socup + sohuychuong > n)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}