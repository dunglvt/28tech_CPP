#include <iostream>
#include <algorithm>

using namespace std;

void cutO(string &s){
	int cnt = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '0'){
			++cnt;
		}
	}

	s.erase(0, cnt);
	return;
}

int main(){
	string s; cin >> s;
	if(s == "0"){
		cout << 0;
		return 0;
	}

	sort(s.begin(), s.end());
	
	cutO(s);

	cout << s;
	return 0;
}