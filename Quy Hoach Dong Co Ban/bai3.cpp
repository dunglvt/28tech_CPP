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

ll f[1000003];

int main() {

	fastIO;

	//code here
	f[0] = 0;
	f[1] = 0;
	f[2] = 1;
	for (int i = 3; i <= 1000000; i++) {
		f[i] = f[i - 1] + f[i - 2] + f[i - 3];
		f[i] %= MOD;
	}
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}
