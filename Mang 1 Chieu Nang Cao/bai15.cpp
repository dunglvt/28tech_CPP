#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];

	for(int &i : a){
		cin >> i;
	}

	sort(a, a+n);

	int cnt = 0;
	int w = 1e9;
	for(int i = 1;i<n; i++){
		w = min(w,abs(a[i] - a[i-1]));
	}

	for(int i = 1;i<n; i++){
		if(abs(a[i] - a[i-1]) == w){
			++cnt;
		}
	}

	cout << w << ' ' << cnt;
	return 0;
}