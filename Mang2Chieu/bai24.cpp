#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
	int n; cin >> n;
	int cnt[100001] = {0};

	vector<set<int>> v(n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int x; cin >> x;
			v[i].insert(x);
		}
	}

	for(set<int> x : v){
		for(int i : x){
			cnt[i]++;
		}
	}

	bool check = false;
	for(int i = 0; i < 100001; i++){
		if(cnt[i] == n){
			check = true;
			cout << i << ' ';
		}
	}

	if(!check){
		cout << "NOT FOUND";
	}
	return 0;
}
