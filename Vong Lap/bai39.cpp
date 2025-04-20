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
    char c = 'a';
    for (int i = 0; i < n; i++)
    {
        char tmp = c;
        for (int j = 0; j < n; j++)
        {
            if ((tmp > 'z'))
            {
                tmp = 'a';
            }

            if (i % 2 == 0)
            {
                cout << (char)toupper(tmp);
            }
            else
            {
                cout << (char)tolower(tmp);
            }
            ++tmp;
        }
        c++;
        cout << endl;
    }

    return 0;
}