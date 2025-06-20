#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	
	for(int &i:a){
		cin >> i;
	}
	
	int res = -1;
	for(int i = 1; i < n ; i++){
		sort(a, a + i);
		if(binary_search(a,a + i, a[i])){
			res = a[i];
			break;
		}
	}
	cout << res;
	return 0;
}
