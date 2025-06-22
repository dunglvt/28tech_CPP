#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s; cin >> s;
	string tmp = s;
	reverse(s.begin(), s.end());

	if(tmp == s){
		cout << "true";
	} else {
		cout << "false";
	}
	return 0;
}