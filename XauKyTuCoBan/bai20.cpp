#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

bool tn(string s){
	string tmp = s;
	reverse(s.begin(), s.end());
	return tmp == s;
}

int main(){
	string s; getline(cin, s);

	vector<string>v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		if(tn(tmp)){
			v.push_back(tmp);
		}
	}
	sort(v.begin(), v.end());
	for(string x : v){
		cout << x << ' ';
	}
	return 0;
}
