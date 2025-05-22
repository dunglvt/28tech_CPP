#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	vector<vector<int>> v(n);
	
	for(vector<int> &x : v){
		x.resize(m);
		for(int &i : x){
			cin >> i;			
		}
		reverse(x.begin(), x.end());
		for(int i : x){
			cout << i << ' ';
		}
	}
	
	return 0;
}
