#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	int a[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(isPrime(a[i][i])){
			++cnt;
		} 
		if(i != n-i-1 && isPrime(a[i][n-i-1])){
			++cnt;
		} 
	}

	cout << cnt;
	return 0;
}