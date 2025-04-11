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
    if (islower(c))
    {
        char tmp = toupper(c);
        cout << tmp;
    }
    else if (isupper(c))
    {
        char tmp = tolower(c);
        cout << tmp;
    }
    else
    {
        cout << c;
    }

    return 0;
}