#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FOR(i,l,r) for(auto i = l; i <= r; i++)
#define FORD(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

int main() {

	fastIO;

	//code here
	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i ++) {
		cin >> v[i];
	}

	vector<int> f(n, 1);
	vector<int> cnt(n, 1);
	int maxLen = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v[i] > v[j]) {
				if (f[j] + 1 > f[i]) {
					f[i] = f[j] + 1;
					cnt[i] = cnt[j];
				} else if (f[j] + 1 == f[i]) {
					cnt[i] += cnt[j];
				}
			}
		}
	}

	cout << *max_element(cnt.begin(), cnt.end());
	return 0;
}
