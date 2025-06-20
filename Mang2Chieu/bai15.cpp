#include <iostream>

using namespace std;

#define ll long long

ll f[92] = {0};

void fibo(){
	f[0] = 0, f[1] = 1;
	for(int i = 2; i < 92; i++){
		f[i] = f[i-1] + f[i-2];
	}
}

int main(){
	int n; cin >> n;
	ll a[n][n];

	fibo();

	int k = 0;
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = f[k++];
		}
		h1++;

		for(int i = h1; i <= h2; i++){
			a[i][c2] = f[k++];
		}
		--c2;

		for(int i = c2; i >= c1; i--){
			a[h2][i] = f[k++];
		}
		--h2;

		for(int i = h2; i >= h1; i--){
			a[i][c1] = f[k++];
		}
		++c1;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}
