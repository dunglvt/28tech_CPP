#include <bits/stdc++.h>

using namespace std;

int sum_Digit(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool chanLe(int n)
{
	int even = 0;
	int odd = 0;
	while (n)
	{
		int r = n % 10;
		if (r & 1)
		{
			++odd;
		}
		else
		{
			++even;
		}
		n /= 10;
	}
	return even > odd;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// code here
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (chanLe(sum_Digit(i)))
		{
			cout << i << " ";
		}
	}
	return 0;
}
