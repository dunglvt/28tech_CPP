#include <iostream>
#include <cmath>

using namespace std;

int tong(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return pow(n, 2) + tong(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << tong(n);
    return 0;
}