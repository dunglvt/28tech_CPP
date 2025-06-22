#include <iostream>
#include <map>

using namespace std;

int main(){
	map<string, int> m;

	string s;
	while(cin >> s){
		m[s]++;
	}

	for(auto x : m){
		cout << x.first << ' ' << x.second << endl;
	}
	return 0;
}