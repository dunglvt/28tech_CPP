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

    int nam = n / 365;
    int tuan = (n - nam * 365) / 7;
    int ngay = (n - nam * 365 - tuan * 7);
    cout << nam << " " << tuan << " " << ngay;
    return 0;
}