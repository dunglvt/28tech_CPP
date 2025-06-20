#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n; cin >> n;
	vector<vector<int>> v(n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int x; cin >> x;
			v[i].push_back(x);
		}
	}

	for(int i = 0; i < n; i++){
		sort(v[i].begin(), v[i].end());
		for(int x : v[i]){
			cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}