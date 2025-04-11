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
        cout << "LOWER";
    }
    else if (isupper(c))
    {
        cout << "UPPER";
    }
    else if (isdigit(c))
    {
        cout << "DIGIT";
    }
    else
    {
        cout << "SPECIAL";
    }

    return 0;
}