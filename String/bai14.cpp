#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> x, pair<string, int> y){
	if(x.second == y.second){
		return x.first < y.first;
	}
	return x.second < y.second;
}

int main(){
	string s;
	getline(cin, s);

	unordered_map<string, int> m;

	stringstream ss(s);
	string tmp;

	while(ss >> tmp){
		m[tmp]++;
	}

	vector<pair<string, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), cmp);

	int pos = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i].second == v[0].second){
			pos = i;
		} else {
			break;
		}
	}

	cout << v[v.size()-1].first << ' ' << v[v.size()-1].second << endl;
	cout << v[pos].first << ' ' << v[pos].second << endl;	
	return 0;
}