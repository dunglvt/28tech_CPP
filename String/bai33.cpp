#include <iostream>
#include <algorithm>

using namespace std;

bool tn(string s){
	string tmp = s;
	reverse(s.begin(), s.end());

	bool check = false;
	for(char x : s){
		if(x == '6'){
			check = true;
			break;
		}
	}

	return check && (tmp == s);
}

int main(){
	string s;
	cin >> s;
	if(tn(s)){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}