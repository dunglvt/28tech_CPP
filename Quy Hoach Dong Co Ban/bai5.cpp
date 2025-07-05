#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FORL(i,l,r) for(auto i = l; i <= r; i++)
#define FORR(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

long long p[1000006];

void sang() {
	for (int i = 0; i <= 1000000; i++) {
		p[i] = 1;
	}
	p[0] = p[1] = 0;
	for (int i = 2; i <= sqrt(1000000); i++) {
		if (p[i]) {
			for (int j = i * i; j <= 1000000; j += i) {
				p[j] = 0;
			}
		}
	}
}

int f[1000001];

int main() {

	fastIO;

	//code here
	sang();
	for (int i = 0; i <= 1000000; i++) {
		if (p[i]) {
			f[i] = f[i - 1] + 1;
		} else {
			f[i] = f[i - 1];
		}
	}

	int t; cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		cout << f[r] - f[l - 1] << endl;
	}
	return 0;
}
