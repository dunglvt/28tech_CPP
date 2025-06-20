#include <iostream>

using namespace std;

long long sum[1000005] = {0};

int main(){
	int n, q; cin >> n >> q;

	int a[n];

	for(int &i:a){
		cin >> i;
	}

	sum[0] = a[0];
	for(int i = 1;i<n; i++){
		sum[i] = sum[i-1] + a[i]; 
	}

	while(q--){
		int l, r;
		cin >> l >> r;
		cout << sum[r-1] - sum[l-2] << endl;
	}
	return 0;
}