#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

bool cmp(pair<string, int> x, pair<string, int> y){
	if(x.second == y.second){
		return x.first < y.first;
	}
	return x.second > y.second;
}

int main(){
	string s;
	unordered_map<string, int> m;
	
	while(getline(cin, s)){
		stringstream ss(s);
		string tmp;

		while(getline(ss, tmp, '-')){
			if(tmp[0] == ' '){
				tmp = tmp.substr(1);
			}
			if(tmp[tmp.size()-1] == ' '){
				tmp.pop_back();
			}
			m[tmp]++;
		}
	}

	vector<pair<string, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), cmp);

	for(pair<string, int> x  : v){
		cout << x.first << ' ' << x.second << endl;
	}
	return 0;
}