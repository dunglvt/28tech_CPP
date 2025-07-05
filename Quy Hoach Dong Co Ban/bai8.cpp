#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

// data type
#define ll long long
#define ull unsigned long long

// STL
#define FORL(i, l, r) for (auto i = l; i <= r; i++)
#define FORR(i, r, l) for (auto i = r; i >= l; i--)
#define fi first
#define se second

// constant
#define MOD 1000000007
#define PI 3.14

long long f[1000004];

int main()
{

	fastIO;

	// code here
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int &x : a)
	{
		cin >> x;
	}

	for (int i = 1; i < n; i++)
	{
		long long tmp = f[i - 1] + abs(a[i - 1] - a[i]);
		for (int j = 1; j <= k; j++)
		{
			if (i - j >= 0)
			{
				tmp = min(tmp, f[i - j] + abs(a[i] - a[i - j]));
			}
		}
		f[i] = tmp;
	}

	cout << f[n - 1];
	return 0;
}
