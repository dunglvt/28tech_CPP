#include <iostream>

using namespace std;

#define MOD 1000000007

long long f[1001];

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	f[0] = f[1] = 1;
	for (int i = 2; i < 1001; i++) {
		for (int j = 0; j < i; j++) {
			f[i] += f[j] * f[i - j - 1];
			f[i] %= MOD;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << f[a[i]] << endl;
	}
	return 0;
}