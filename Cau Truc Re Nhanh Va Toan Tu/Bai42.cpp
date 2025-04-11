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
    double w, h;

    cin >> w >> h;
    h = h / 100;
    double bmi = 1.0 * w / (h * h);
    if (bmi < 18.5)
    {
        cout << "Under weight";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Normal";
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Over weight";
    }
    else if (bmi >= 30 && bmi < 35)
    {
        cout << "Obesity 1";
    }
    else if (bmi >= 35 && bmi < 40)
    {
        cout << "Obesity 2";
    }
    else
    {
        cout << "Extreme obesity";
    }

    return 0;
}