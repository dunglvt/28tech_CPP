#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char, int> x, pair<char, int> y){
	if(x.second == y.second){
		return x.first < y.first;
	}
	return x.second < y.second;
}

int main(){
	string s; cin >> s;

	map<char, int> m;
	for(char x : s){
		m[x]++;
	}

	vector<pair<char, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), cmp);
	cout << v[v.size()-1].first << ' ' << v[v.size()-1].second << endl;
	
	int pos = 0;

	for(int i = 1; i < v.size(); i++){
		if(v[i].second == v[0].second){
			pos = i;
		} else {
			break;
		}
	}

	cout << v[pos].first << ' ' << v[pos].second << endl;
	return 0;
}
