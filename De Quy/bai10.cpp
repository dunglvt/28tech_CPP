#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

#define MOD 1000000007

#define ll long long

using namespace std;

double sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 1.0 / n + sum(n - 1);
}
int main()
{
    int a;
    cin >> a;
    cout << fixed << setprecision(3) << sum(a);
    return 0;
}