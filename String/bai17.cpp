#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	string s1, s2; 
	getline(cin, s1);
	getline(cin, s2);

	vector<string> v;
	stringstream ss1(s1);
	string tmp;
	while(ss1 >> tmp){
		for(char &x: tmp){
			x = tolower(x);
		}

		tmp[0] = toupper(tmp[0]);
		v.push_back(tmp);
	}

	vector<string> v1 = v;

	v[v.size()-2] = v[v.size()-2] + ',';

	for(char &x : v[v.size()-1]){
		x = toupper(x);
	}

	for(string x : v){
		cout << x << ' ';
	}	
	cout << endl;

	v1[v1.size()-1] = v1[v1.size()-1] + ',';

	for(char &x : v1[v1.size()-1]){
		x = toupper(x);
	}
	cout << v1[v1.size()-1] << ' ';
	for(int i = 0; i < v1.size()-1; i++){
		cout << v1[i] << ' ';
	}
	return 0;
}