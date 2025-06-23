#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	int sum = 0;
	bool check = false;
	for(char x : s){
		sum += (x - '0');
	}

	if(s[s.size()-1] % 2 == 0){
		check = true;
	}
	if(sum % 3 == 0 && check){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}