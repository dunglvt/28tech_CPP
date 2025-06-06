#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int chap(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return chap(n - 1, k - 1) + chap(n - 1, k);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << chap(n, k);
    return 0;
}