#include <iostream>
#include <map>

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

	for(pair<char, int> x : m){
		if(x.second == 1){
			cout << x.first;
		}
	}
	cout << endl;

	for(pair<char, int> x : m){
		if(x.second == 2){
			cout << x.first;
		}
	}
	return 0;
}