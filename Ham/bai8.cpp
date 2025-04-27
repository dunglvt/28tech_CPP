#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool soDep(int n)
{
    int even = 0;
    int odd = 0;
    while (n)
    {
        if ((n % 10) & 1)
        {
            ++odd;
        }
        else
        {
            ++even;
        }
        n /= 10;
    }
    return even == odd;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (soDep(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}