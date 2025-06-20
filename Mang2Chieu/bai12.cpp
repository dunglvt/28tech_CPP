#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	int a[n][n], b[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	vector<vector<int>> v(n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			v[i].push_back(a[j][i]);
		}
	}

	for(int i = 0; i < n; i++){
		int k = 0;
		sort(v[i].begin(), v[i].end());
		for(int x : v[i]){
			b[i][k++] = x;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << b[j][i]  << ' ';
		}
		cout << endl;
	}

	return 0;
}