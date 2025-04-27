#include <bits/stdc++.h>

using namespace std;

bool latNguoc(int n)
{
	int  tmp = n;
    int res = 0;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == tmp;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // code here
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
    {
    	if (latNguoc(i))
    	{
    		cout << i << " ";
    	}
    }
    return 0;
}
