#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s; cin >> s;
	bool check = true;

	for(int i = 1; i < s.length(); i++){
		int dis = abs((s[i] - '0') - (s[i-1] - '0'));
		if(dis != 1){
			check = false;
			break;
		}
	}
	if(check){
		cout << "YES"; 
	} else {
		cout << "NO";
	}
	return 0;
}