#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	string s; 
	getline(cin, s);

	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}

	cout << v.size();
	return 0;
}