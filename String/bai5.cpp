#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;

	map<char, int> m;

	for(char x : s1){
		m[x] = 1;
	}

	for(char x : s2){
		if(m[x] == 1){
			m[x] = 3;
		} else if(m[x] == 0){
			m[x] = 2;
		}
	}

	for(auto x : m){
		if(x.second == 3){
			cout << x.first;
		}
	}

	cout << endl;

	for(auto x : m){
		if(x.second){
			cout << x.first;
		}
	}

	return 0;
}