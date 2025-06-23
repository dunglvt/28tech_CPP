#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore(1);
	for(int i = 0; i < n; i++){
		string s;
		getline(cin ,s);

		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			for(char &x : tmp){
				x = tolower(x);
			}
			v.push_back(tmp);
		}

		string res1 = v[v.size()-2];
		for(int i = 0; i < v.size()-2; i++){
			res1 += v[i][0];
		}

		if(v[v.size()-1][0] == '0'){
			v[v.size()-1] = v[v.size()-1].substr(1);
		}
		
		stringstream ss1(v.back());
		string tmp1, res2;
		while(getline(ss1, tmp1, '/')){
			if(tmp1[0] == '0'){
				tmp1 = tmp1.substr(1);
			}
			res2 += tmp1;
		}

		cout << res1 + "@xyz.edu.vn" << endl;
		cout << res2 << endl;
	}
	return 0;
}