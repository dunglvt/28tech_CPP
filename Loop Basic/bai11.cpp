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
    char c;
    cin >> n;
    int thuong = 0, hoa = 0, chuSo = 0, dacbiet = 0;
    while (n--)
    {
        cin >> c;
        if (islower(c))
        {
            ++thuong;
        }
        else if (isupper(c))
        {
            ++hoa;
        }
        else if (isdigit(c))
        {
            ++chuSo;
        }
        else
        {
            ++dacbiet;
        }
    }
    cout << thuong << " " << hoa << " " << chuSo << " " << dacbiet;
    return 0;
}