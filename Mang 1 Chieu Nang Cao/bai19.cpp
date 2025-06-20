#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	vector<int> v[n];
	
	for(int &i:a){
		cin >> i;
	}
	
	int j = 0;
	v[0].push_back(a[0]);
	for(int i = 1;i<n; i++){
		if(a[i]-a[i-1] != 0){
			v[j].push_back(a[i]);
		} else {
			++j;
			v[j].push_back(a[i]);
		}
	}
	
	int maxLen = -1;
	int maxsum  = 0;
	int pos = -1;
	for(int i = 0; i<n; i++){
		long long sum = 0;
		int len = v[i].size();
		for(int k : v[i]){
			sum += k;
		}
		if(maxLen < len){
			maxLen = len;
			pos = i;
		} else if(maxLen == len){
			if(maxsum < sum){
				maxsum = sum;
				pos = i;
			}
		}
	}
	cout << maxLen << endl;
	for(int k : v[pos]){
		cout << k << ' ';
	}
	return 0;
}
