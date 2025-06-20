	#include <iostream>

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

		int u,v;
		cin >> u >> v;

		int j = 0;
		while(j < n){
			swap(a[u-1][j], a[v-1][j]);
			++j;
		}


		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << a[i][j]  << ' ';
			}
			cout << endl;
		}
		return 0;
	}