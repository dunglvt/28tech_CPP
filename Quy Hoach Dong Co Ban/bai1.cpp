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

long long f[1000001] = {0};

int main() {

	fastIO;

	//code here
	f[0] = 1;
	for (int i = 1; i < 1000001; i++) {
		f[i] = f[i - 1] * i;
		f[i] %= MOD;
	}
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}
