#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	if(s.size() == 1){
		if(s == "0"){
			cout << "YES";
		} else {
			cout << "NO";
		}
		return 0;
	}

	int c = s[s.size()-1] - '0';
	int b = s[s.size()-2] - '0';

	int sc = b * 10 + c;

	if((b==0 && c==0) || sc % 25 == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}