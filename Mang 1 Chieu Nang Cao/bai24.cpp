#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, x; cin >> n >> x;
	int a[n];
	
	int firstPos = -1;
	int lastPos = -1;
	bool check1 = true;
	
	for(int i = 0; i<n; i++){
		cin >> a[i];
		if(a[i] == x){
			lastPos = i + 1;
			if(check1 && firstPos == -1){
				firstPos = i  + 1;
				check1 = false;
			}
		}
	}
	
	if(firstPos && lastPos){
		cout << firstPos << ' ' << lastPos;
	} else {
		cout << -1 << ' ' << -1;
	}
	return 0;
}
