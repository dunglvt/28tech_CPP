#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;
	int sum = 0;
	for( char x : s){
		sum += (x - '0');
	}
	int sc = (s[s.size()-1] - '0');
	if(sum % 3== 0 && (sc == 0 || sc == 5)){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}