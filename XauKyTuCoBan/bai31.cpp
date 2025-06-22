#include <iostream>
#include <map>

using namespace std;

int main(){
	string s; cin >> s;
	map<char, int> m;

	for(char x : s){
		m[x]++;
	}

	for(map<char, int>::iterator i = m.begin(); i != m.end(); i++){
		cout << (*i).first << ' '<<  (*i).second << endl;
	}
	return 0;
}