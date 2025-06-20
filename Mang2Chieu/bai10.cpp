#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

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
	vector<int> v;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		if(isPrime(a[i][i])){
			int check = true;
			for(int k : v){
				if(k == a[i][i]){
					check = false;
				}
			}
			if(check){
				v.push_back(a[i][i]);
			}
		} 
		if(i != n-i-1 && isPrime(a[i][n-i-1])){
			int check = true;
			for(int k : v){
				if(k == a[i][n-i-1]){
					check = false;
				}
			}
			if(check){
				v.push_back(a[i][n-i-1]);
			}
		}
	}

	cout << v.size();
	return 0;
}