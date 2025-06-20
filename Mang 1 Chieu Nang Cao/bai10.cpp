#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <set>

using namespace std;

int cnt[10000005] = {0};

int main(){
	int n, m;
	cin >> n >> m;

	unordered_set<int> usa, usb;

	for(int i = 0; i< n; i++){
		int x; cin >> x;
		usa.insert(x);
	}

	for(int i = 0; i< m; i++){
		int x; cin >> x;
		usb.insert(x);
	}

	set<int> giao, hop;

	for(int i : usa){
		if(usb.count(i)){
			giao.insert(i);
		}
	}

	for(int i : usa){
		hop.insert(i);
	}
	for(int i : usb){
		hop.insert(i);
	}

	for(int i : giao){
		cout << i << ' ';
	}

	cout << endl;

	for(int i : hop){
		cout << i << ' ';
	}
	return 0;
}