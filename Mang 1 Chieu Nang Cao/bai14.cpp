	#include <iostream>
	#include <map>
	#include <vector>
	#include <algorithm>

	using namespace std;

	bool check(int n){
		int dv = n % 10;
		n /= 10;
		while(n){
			int tmp = n % 10;
			if(dv < tmp){
				return false;
			}
			dv = tmp;
			n /= 10;
		}
		return true	;
	}

	bool cmp(pair<int, int> x, pair<int, int> y){
		if(x.second == y.second){
			return x.first < y.first;
		}
		return x.second > y.second;
	}

	int main(){
		int n;
		map<int, int> m;

		while(cin >> n){
			if(check(n)){
				m[n]++;
			}
		}

		vector<pair<int, int>> ve;
		for(auto i : m){
			ve.push_back(i);
		}

		sort(ve.begin(), ve.end(), cmp);

		for(pair<int, int> x : ve){
			cout << x.first << ' '<< x.second << endl;
		}
		return 0;
	}