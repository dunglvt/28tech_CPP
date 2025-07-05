#include <iostream>
#include <algorithm>

using namespace std;

int n;
int f[100009][10];
int a[100009][10];

int main() {
	cin >> n;
	for (int i = 2; i <= n + 1; i++) {
		for (int j = 2; j <= 4; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 2; i <= n + 1; i++) {
		for (int j = 2; j <= 4; j++) {
			int a1 = a[i][j] + f[i - 1][j - 2];
			int a2 = a[i][j] + f[i - 1][j - 1];
			int a3 = a[i][j] + f[i - 1][j + 1];
			int a4 = a[i][j] + f[i - 1][j + 2];
			f[i][j] = max({a1, a2, a3, a4});
		}
	}
	int res = a[n + 1][2];
	for (int i = 2; i <= 4; i++) {
		res = max(f[n + 1][i], res);
	}

	cout << res;
	return 0;
}