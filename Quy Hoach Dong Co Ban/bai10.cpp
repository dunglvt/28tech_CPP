#include <iostream>

using namespace std;

#define MOD 1000000007

long long f[1000][1000];
char a[1000][1000];
int n, m;

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m ; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == '*') {
				if (i == 1 && j == 1) {
					f[1][1] = 1;
				} else {
					f[i][j] = f[i][j - 1] + f[i - 1][j];
					f[i][j] %= MOD;
				}
			}
		}
	}
	cout << f[n][m];
	return 0;
}