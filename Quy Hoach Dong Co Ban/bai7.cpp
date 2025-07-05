#include <iostream>
#include <cmath>
using namespace std;

int f[1000005];

int main() {
	int n; cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	f[0] = 0;
	f[1] = f[0] + abs(a[1] - a[0]);
	for (int i = 2 ; i < n; i++) {
		int res1 = f[i - 1] + abs(a[i] - a[i - 1]);
		int res2 = f[i - 2] + abs(a[i] - a[i - 2]);
		f[i] = min(res1, res2);
	}

	cout << f[n - 1];
	return 0;
}