#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool tn(string s){
	string tmp = s;

	reverse(s.begin(), s.end());
	return s == tmp;
}

bool cmp(string x, string y){
	return x.size() < y.size();
}

int main(){
	string s; 
	getline(cin ,s);

	vector<string> v;

	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		if(tn(tmp)){
			if(find(v.begin(), v.end(), tmp) == v.end()){
				v.push_back(tmp);
			}
		}
	}

	stable_sort(v.begin(), v.end(), cmp);

	for(string x : v){
		cout << x << ' ';
	}
	return 0;
}