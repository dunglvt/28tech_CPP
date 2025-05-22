#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, q; cin >> n  >> q;
	
	vector<vector<int>> v(n);
	
	for(int i = 0; i<n; i++){
		int m; cin >> m;
		v[i].resize(m);
		for(int j = 0; j < m; j++){
			cin >> v[i][j];
		}
	}
	
	while(q--){
		int x, y;
		cin >> x >> y;
		cout << v[x-1][y-1] << endl;
	}
	return 0;
}
