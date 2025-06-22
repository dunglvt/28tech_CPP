#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	map<string, int> m;
	vector<string> v;

	string s;
	while(cin >> s){
		if(find(v.begin(), v.end(), s) == v.end()){
			v.push_back(s);
		}
		m[s]++;
	}

	for(int i = 0 ; i < v.size(); i++){
		for(auto x : m){
			if(x.first == v[i]){
				cout << v[i] << ' ' << x.second << endl;
				break;
			}
		}
	}
	return 0;

}