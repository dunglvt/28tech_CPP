#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}