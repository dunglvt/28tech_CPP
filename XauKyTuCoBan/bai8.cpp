#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	string temp = "28tech";

	bool check = false;
	for(char x : temp){
		while(s.find(x) != string::npos){
			int pos = s.find(x);
			s.erase(pos, 1);
			check = true;
		}
	}

	if(s.length() == 0){
		cout << "EMPTY";
		return 0;
	}

	if(check){
		cout << s;
	} else {
		cout << "EMPTY";
	}
	return 0;
}