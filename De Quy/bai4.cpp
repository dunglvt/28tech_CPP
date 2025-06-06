#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

ll tong(int n)
{
    if (n == 1)
    {
        return -1;
    }
    return pow(-1, n) * n + tong(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << tong(n);
    return 0;
}