#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	getline(cin, s);

	map<string, int> m;
	vector<string> v;
	stringstream ss(s);
	string tmp;

	while(ss >> tmp){
		if(m[tmp] != 0){
			m[tmp]++;
		} else {
			v.push_back(tmp);
			m[tmp]++;
		}
	}

	for(auto x : m){
		cout << x.first << ' ' << x.second << endl;
	}
	cout << endl;
	for(string x : v){
		if(m[x]){
			cout << x << ' ' << m[x] << endl;
			m[x] = 0;
		}
	}
	return 0;
}