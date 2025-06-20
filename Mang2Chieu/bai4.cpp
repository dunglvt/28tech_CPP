#include <iostream>

using namespace std;

bool tn(int n){
	int tmp = n;
	int x = 0;
	while(n){
		x = x * 10 + n % 10;
		n /= 10;
	}
	return tmp == x;
}

int main(){

	int n; cin >> n;
	int a[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	long long cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i ; j++){
			if(tn(a[i][j])){
				++cnt;
			}
		}
	}
	cout << cnt;
	return 0;
}