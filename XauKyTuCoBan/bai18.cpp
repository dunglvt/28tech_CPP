#include <iostream>
#include <sstream>
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
	string s; getline(cin, s);

	stringstream ss(s);
	string tmp;
	vector<string> v;

	while(ss >> tmp){
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), cmp);

	for(string x : v){
		cout << x << ' ';
	}
	return 0;
}