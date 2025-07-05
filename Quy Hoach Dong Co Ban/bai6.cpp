#include <iostream>
#include <cmath>

using namespace std;

#define MOD 1000000007

int p[1000001];
long long f[1000001];
void sang() {
	for (int i = 2; i <= 1000000; i++) {
		p[i] = 1;
	}

	for (int i = 2; i <= sqrt(1000000); i++) {
		if (p[i]) {
			for (int j = i * i; j <= 1000000; j += i) {
				p[j] = 0;
			}
		}
	}

}

int main() {
	sang();
	f[2] = 2;
	for (int i = 3; i < 1000001; ++i)
	{
		if (p[i]) {
			f[i] = i * f[i - 1];
			f[i] %= MOD;
		} else {
			f[i] = f[i - 1];
		}
	}

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}