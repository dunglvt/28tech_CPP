#include <iostream>
#include <map>

using namespace std;

int main(){
	string s; cin >> s;
	map<char, int> m;
	for(char x : s){
		m[x]++;
	}

	for(auto x : m){
		cout << x.first << ' ' << x.second << endl;
	}
	cout << endl;

	for(auto x : s){
		if(m[x]){
			cout << x << ' ' << m[x] << endl;
			m[x] = 0;
		}
	}
	return 0;
}
