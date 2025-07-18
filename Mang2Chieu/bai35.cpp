#include <iostream>

using namespace std;

int main(){
	int n, m; cin >> n >> m;

	int a[n][m], b[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> b[i][j];
		}
	}

	long long c[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			c[i][j] = 1ll * a[i][j] * b[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}