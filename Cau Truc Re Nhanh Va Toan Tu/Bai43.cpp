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
    int a, b;
    char x;
    cin >> a >> b >> x;
    switch (x)
    {
    case '+':
        cout << a << " " << x << " " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " " << x << " " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " " << x << " " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " " << x << " " << b << " = " << fixed << setprecision(2) << 1.0 * a / b;
        break;
    case '%':
        cout << a << " " << x << " " << b << " = " << fixed << setprecision(2) << a % b;
        break;
    }
    return 0;
}