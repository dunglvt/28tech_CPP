#include <bits/stdc++.h>

using namespace std;
long long latNguoc(long long n)
{
    long long res = 0;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // code here
    long long n;
    cin >> n;
    cout << latNguoc(n);
    return 0;
}
