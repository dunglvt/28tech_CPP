#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(int n)
{
    return n % 10 == 8;
}

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
    ll n;
    cin >> n;
    if (check(sum_Digit(n)))
    {
        cout << "28tech";
    }
    else
    {
        cout << "29tech";
    }

    return 0;
}