#include <iostream>
#include <algorithm>

using namespace std;

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

	int i = 0;
	int j = n-1;
	while(i < n && j >= 0){
		if(i+j == n-1){
			swap(a[i][i], a[i][j]);
			++i;
			--j; 
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}