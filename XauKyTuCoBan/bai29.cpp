#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	string s1, s2; 
	cin >> s1 >> s2;

	vector<string> v1, v2;

	stringstream ss1(s1);
	stringstream ss2(s2);
	string tmp1, tmp2;

	while(getline(ss1, tmp1, '/')){
		if(tmp1 != ""){
			v1.push_back(tmp1);
		}
	}
	while(getline(ss2, tmp2, '/')){
		if(tmp2 != ""){
			v2.push_back(tmp2);
		}
	}

	int j = 0;
	if(v1[2] > v2[2]){
		cout << "29tech";
		return 0;
	} else if(v1[2] < v2[2]){
		cout << "28tech";
		return 0;
	} else {
		if(v1[1] > v2[1]){
			cout << "29tech";
			return 0;
		} else if(v1[1] < v2[1]){
			cout << "28tech";
			return 0;
		} else {
			if(v1[0] > v2[0]){
				cout << "29tech";
				return 0;
			} else if(v1[0] < v2[0]){
				cout << "28tech";
				return 0;
			} else {
				cout << "30tech";
				return 0;
			}
		}
	}
	return 0;
}