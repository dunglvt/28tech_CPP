#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;
	for(int i = s.length() - 1; i >= 0; i--){
		cout << s[i];
	}
	cout << endl;

	for(char x : s){
		x = tolower(x);
		cout << x;
	}
	cout << endl;

	for(char x : s){
		x = toupper(x);
		cout << x;
	}
	return 0;
}