#include <iostream>
using namespace std;

int main(){
	string s;
	getline(cin, s);

	for(char &x : s){
		x = toupper(x);
	}

	for(char x : s){
		cout << x;
	}

	cout << endl;

	for(char &x : s){
		x = tolower(x);
	}
	for(char x : s){
		cout << x;
	}
	return 0;
}