#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> list;

	cin.ignore(1);

	for(int i = 0; i < n; i++){
		string s; 
		getline(cin, s);
		vector<string> v;

		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			for(char &x : tmp){
				x = tolower(x);
			}
			v.push_back(tmp);
		}

		string email = v[v.size()-2];
		for(int i = 0; i < v.size()-2; i++){
			email += v[i][0];
		}

		string password;
		stringstream p(v.back());
		while(getline(p, tmp, '/')){
			if(tmp[0] == '0'){
				password += tmp[1];
			} else {
				password += tmp;
			}
		}

		int cnt = 0;
		for(string x : list){
			if(x == email){
				++cnt;
			}
		}

		list.push_back(email);

		if(cnt > 0){
			email += to_string(cnt+1);
		}
				
		email += "@xyz.edu.vn";
		cout << email << endl << password << endl;
	}
	return 0;
}