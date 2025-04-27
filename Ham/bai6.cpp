#include <bits/stdc++.h>

using namespace std;

#define ll long long

int sum_Digit(ll n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ll n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        cout << sum_Digit(x) << " ";
    }

    return 0;
}