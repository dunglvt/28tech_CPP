#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int n; cin >> n;
	int k = 1;
	int a[n][n], b[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = i ; j < n; j++){
			swap(a[i][j], a[j][i]);
		}
	}

	cout << "Pattern " << k << ':' << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	++k;
	cout << "Pattern " << k << ':' << endl;

	for(int i = n-1; i >= 0; i--){
		for(int j = n-1; j >= 0; j--){
			cout << a[j][i] << ' ';
		}
		cout << endl;
	}

	++k;
	cout << "Pattern " << k << ':' << endl;

	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	++k;
	cout << "Pattern " << k << ':' << endl;

	for(int i = 0; i < n; i++){
		for(int j = n-1; j >= 0; j--){
			cout << a[j][i] << ' ';
		}
		cout << endl;
	}
	return 0;
}