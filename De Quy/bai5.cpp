#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

ll giaithua(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 1ll * n * giaithua(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << giaithua(n);
    return 0;
}