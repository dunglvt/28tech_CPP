#include <iostream>
#include <vector>

using namespace std;

int main(){
	string s; cin >> s;

	vector<string> v;
	string tmp;

	for(int i = 0; i < (int)s.size(); i++){
		if(isdigit(s[i])){
			tmp += s[i];
		} else {
			if(tmp.empty() != true){
				v.push_back(tmp);
				tmp.erase(0);
			}
		}
	}

	if(!tmp.empty()){
		v.push_back(tmp);
	}

	long long sum = 0;
	for(string x : v){
		sum += stoll(x);
	}
	cout << sum;
	return 0;
}	