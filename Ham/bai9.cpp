#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool so6(int n)
{
    while (n)
    {
        if (n % 10 == 6)
            return true;
        n /= 10;
    }
    return false;
}

bool sumDigit(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

bool digit(int n)
{
    int even = 0, odd = 0;
    while (n)
    {
        if ((n % 10) % 2 == 0)
            ++even;
        else
            ++odd;
        n /= 10;
    }
    return odd > even;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (so6(i) && sumDigit(i) && digit(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
