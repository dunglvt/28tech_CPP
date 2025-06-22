#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;

	for(int i = 0; i < n; i++){
		string s; cin >> s;
		bool check = true;
		for(char x : s){
			if(!isdigit(x)){
				check = false;
				break;
			}
		}
		if((s.size() != 10 && s.size() != 11) || s[0] != '0'){
			check = false;
		}
		if(check){
			cout << "YES" << endl;
		} else  {
			cout << "NO" <<endl;
		}
	}
	return 0;
}
