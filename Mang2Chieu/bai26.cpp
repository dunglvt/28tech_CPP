#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[111][111];
long long f[111][111];

int main(){
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			f[i][j] = max({f[i-1][j-1], f[i-1][j], f[i-1][j+1]}) + a[i][j];
		}
	}
	long long maxValue = -1e9;
	for(int i = 1; i <= n; i++){
		maxValue = max(maxValue, f[n][i]);
	}
	cout << maxValue;
	return 0;
}
