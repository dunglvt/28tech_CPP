	#include <iostream>
	#include <vector>
	
	#define fi first
	#define se second
	
	using namespace std;
	
	int main(){
		int n; cin >> n;
		vector<pair<int, int>> v;
		
		for(int i = 0; i<n; i++){
			int x; cin >> x;
			int check = 0;
			
			for(auto &k : v){
				if(k.fi == x){
					check = 1;
					++k.second;
					break;
				}
			}
			if(!check){
				v.push_back(make_pair(x, 1));
			}
		}
		for(auto x : v){
			cout << x.fi << ' ' << x.se << endl;
		}	
		return 0;
	}
