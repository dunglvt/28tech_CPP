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
	string tmp(1, s[0]);
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] != s[i+1]){
			v.push_back(tmp);
			tmp = s[i];
		} else {
			tmp += s[i];
		}
	}

	v.push_back(tmp);

	sort(v.begin(), v.end(), cmp);

	cout << v.back();
	return 0;
}