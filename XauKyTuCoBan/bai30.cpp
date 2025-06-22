#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s, t; cin >> s >> t;

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	int i = 0;
	int j = 0;
	while(i < s.size() && j < t.size()){
		if(s[i] != s[j]){
			cout << "29tech";
			return 0;
		}
		++i; ++j;
	}
	if(i < s.size() || j < t.size()){
		cout << "29tech";
		return 0;
	}
	cout << "28tech";
	return 0;
}