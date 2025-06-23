#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main(){
	string s1, s2; getline(cin, s1);
	getline(cin, s2);

	map<string, int> m;

	stringstream ss1(s1);
	string tmp;
	while(ss1 >> tmp){
		for(char &x : tmp){
			x = tolower(x);
		}
		m[tmp] = 1;
	}

	stringstream ss2(s2);
	while(ss2 >> tmp){
		for(char &x : tmp){
			x = tolower(x);
		}
		if(m[tmp] == 1){
			m[tmp] = 3;
		} else if(m[tmp] == 0){
			m[tmp] = 2;
		}
	}

	for(auto x : m){
		if(x.second == 3){
			cout << x.first << ' ';
		}
	}
	return 0;
}