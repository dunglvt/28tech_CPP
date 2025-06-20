#include <iostream>
#include <map>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	map<int, int> ma;

	for(int i = 0; i<n+m; i++){
		int x; cin >> x;
		ma[x]++;
	}

	for(auto x : ma){
		cout << x.first << ' ';
	}

	cout << endl;

	for(auto x : ma){
		if(x.second > 1){
			cout << x.first << ' ';
		}
	}
	return 0;
}