#include <iostream>

using namespace std;

int main(){
	string n, m;
	cin >> n >> m;
	
	if(n.size() > m.size()){
		cout << "28tech";
		return 0;
	} else if(n.size() < m.size()){
		cout << "29tech";
		return 0;
	} else {
		for(int i = 0; i < n.size(); i++){
			if((n[i] - '0') > (m[i] - '0')){
				cout << "28tech";
				break;
			} else if((n[i] - '0') < (m[i] - '0')){
				cout << "29tech"; 
				break;
			} else {
				cout << "30tech";
				break;
			}
		}
		return 0;
	}
	return 0;
}
