#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ++count;
        }
    }
    cout << count << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}