#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string s; getline(cin, s);

	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for(string x : v){
		cout << x << ' ';
	}

	cout << endl;
	reverse(v.begin(), v.end());

	for(string x : v){
		cout << x << ' ';
	}
	return 0;
}