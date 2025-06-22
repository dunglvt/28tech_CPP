#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		string s; cin >> s;

		bool check1 = false;
		bool check2 = true;
		bool check3 = true;

		string tmp[4] = {"@hotmail.com", "@yahoo.com", "@28tech.com.vn", "@gmail.com"};
		for(string x : tmp){
			if(s.find(x) != string::npos){
				check1 = true;
				break;
			}
		}

		for(char x : s){
			if(isdigit(x) || isalpha(x) || x == '@' || x == '.'|| x == '_'){
				continue;
			} else {
				check2 = false;
				break;
			}
		}

		int cnt = 0;
		for(char x : s){
			if(x == '@'){
				++cnt;
			}
		}
		if(cnt != 1){
			check3 = false;
		} 


		if(check1 && check2 && check3){
			cout << "YES" << endl;
		} else {
			cout << "NO " << endl;
		}
	}
	return 0;
}