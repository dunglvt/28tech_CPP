#include <iostream>

using namespace std;

int main(){
	int n, d; cin >> n >> d;
	int a[n];
	
	for(int &i:a){
		cin >> i;
	}
	
	long long cnt = 0;
	for(int i = 1;  i<n; i++){
		if(a[i] <= a[i-1]){
			cnt += (a[i-1] - a[i])/d + 1;
			a[i] += ((a[i-1] - a[i])/d + 1)* d;
		}
	}
	cout << cnt;
	return 0;
}
