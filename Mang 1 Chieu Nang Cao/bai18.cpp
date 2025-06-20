#include <iostream>
#include <algorithm>

using namespace std;

int cnt[1000005] = {0};

long long dem(int n){
	return 1ll * n * (n - 1)/2;
}

int main(){
	int n; cin >> n;
	int a[n];
	int maxValue = -1e9;
	for(int &i:a){
		cin >> i;
		++cnt[i];
		maxValue = max(maxValue, i);
	}

	long long res = 0;
	for(int i=0;i<=maxValue;i++){
		res += dem(cnt[i]);
	}
	cout << res;
	return 0;
}
