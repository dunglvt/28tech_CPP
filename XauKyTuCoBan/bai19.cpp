#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main(){
	string s; getline(cin, s);
	
	for(char &x : s){
		x = tolower(x);
	}

	stringstream ss(s);
	string tmp;
	set<string> st;

	while(ss >> tmp){
		st.insert(tmp);
	}
	cout << st.size();
	return 0;
}