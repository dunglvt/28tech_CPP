#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool cmp(string x, string y){
	if(x.size() == y.size()){
		return x < y;
	}
	return x.size() < y.size();
}

int main(){
	string s;
	getline(cin, s);

	vector<string> v;
	stringstream ss(s);
	string tmp;

	while(ss >> tmp){
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());

	for(string x : v){
		cout << x << ' ';
	}

	cout << endl;
	sort(v.begin(), v.end(), cmp);

	for(string x : v){
		cout << x << ' ';
	}
	return 0;
}