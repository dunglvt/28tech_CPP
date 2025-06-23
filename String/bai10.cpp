#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	string s;
	getline(cin, s);

	map<string, int> m;
	vector<string> v;

	stringstream ss(s);
	string tmp;

	while(ss >> tmp){
		if(m[tmp] == 0){
			v.push_back(tmp);
		}
		m[tmp]++;
	}

	for(pair<string, int> x : m){
		cout << x.first << ' ';
	}
	cout << endl;

	for(auto x : v){
		if(m[x]){
			cout << x << ' ';
			m[x] = 0;
		}
	}
	return 0;
}