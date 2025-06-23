#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string x, string y){
	if(x.size() == y.size()){
		return x < y;
	}
	return x.size() < y.size();
}

int main(){
	string s; cin >> s;

	vector<string> v;

	string tmp;
	for(int i = 0; i < (int)s.size(); i++){
		if(isdigit(s[i])){
			tmp += s[i];
		} else {
			if(tmp.empty() == false){
				v.push_back(tmp);
				tmp.erase(0);
			}
		}
	}

	if(!tmp.empty()){
		v.push_back(tmp);
	}

	for(string &x : v){
		while(x[0] == '0' && x.size() > 1){
			x = x.substr(1);
		}
	}

	sort(v.begin(), v.end(), cmp);

	cout << v.back();
	return 0;
}