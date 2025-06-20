#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;

	int a[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	int i = 0;
	while(i < n){
		if(i % 2 == 0){
			for(int k = 0; k < n; k++){
				cout << a[i][k] << ' ';
			}
			cout << endl;
		} else {
			for(int k = n-1; k >= 0; k--){
				cout << a[i][k] << ' ';
			}
			cout << endl;
		}
		++i;
	}
	return 0;
}