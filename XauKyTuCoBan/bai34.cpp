#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
	string s;

	unordered_map<string, int> m;
	vector<string> v;

	while(getline(cin, s)){
		m[s]++;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	for(string x : v){
		if(m[x]){
			cout << x << ' ' << m[x] << endl;
			m[x] = 0;
		}
	}
	return 0;
}