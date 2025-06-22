#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;
	if(s[1] == '/'){
		s = '0' + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}

	cout << s;
	return 0;
	
}