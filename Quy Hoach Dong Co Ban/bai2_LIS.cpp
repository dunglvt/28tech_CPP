#include <iostream>
#include <vector>

using namespace std;

int f[1003];
int a[1003];

int main() {
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		f[i] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}

	int maxValue = 0;
	for (int i = 0; i < n; i++) {
		maxValue = max(maxValue, f[i]);
	}
	cout << maxValue;
	return 0;
}