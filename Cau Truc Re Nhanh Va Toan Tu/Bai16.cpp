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
    char c;
    cin >> c;
    c = tolower(c);
    if (c == 'z')
    {
        cout << "a";
    }
    else
    {
        char t = ++c;
        cout << t;
    }

    return 0;
}