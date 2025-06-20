#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];

	for(int &i : a){
		cin >> i;
		i = 1ll*i*i;
	}

	bool check = false;
	for(int i = 0;i < n-1; i++){
		for(int j = i + 1; j<n; j++){
			bool pos = binary_search(a+j+1, a+n, a[i] + a[j]);
			if(pos){
				check = true;
				break;
			}
		}
	}
	if(!check){
		cout << "NO";
	} else {
		cout << "YES";
	}
	return 0;
}