#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<char ,int>> v;
	
	int cnt = 0;
	for(int i = 0; i < n; i ++){
		char x; cin >> x;
		
		bool check = false;
		for(auto &k : v){
			if(x == k.first){
				++k.second;
				check = true;
				break;
			}
		}
		if(!check){
			v.push_back(make_pair(x, 1));
			++cnt;
		}
	}
	
	cout << cnt << endl;
	
	for(auto x : v){
		cout << x.first << ' ' << x.second << endl;
	}
	return 0;
}
