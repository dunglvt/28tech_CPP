#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	for(int i = 0 ; i < n; i++){
		string s; cin >> s;
		bool check1 = false;
		bool check2 = true;
		bool check3 = true;

		if((((s[0]-'0')%2==1) && ((s[s.size()-1]-'0')%2==1)) || (((s[0]-'0')%2==0) && ((s[s.size()-1]-'0')%2==0))){
			check1 = true;
		}

		for(int i = 1; i < s.size(); i++){
			if(abs((s[i]-'0') - (s[i-1]-'0')) == 3){
				check2 = false;
				break;
			}
		}

		for(int i = 1; i < s.size(); i++){
			int s1 = s[i] - '0';
			int s2 = s[i-1] - '0';
			if((s1==2 && s2 == 8) || (s1==8 && s2 == 2)){
				check3 = false;
				break;
			}
		}

		if(check1 && check2 && check3){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
