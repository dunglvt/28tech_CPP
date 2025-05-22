#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	cout << *min_element(v.begin(), v.end()) << endl;;
	
	vector<int>::iterator it = max_element(v.begin(), v.end());
	cout << *it << endl;;
	
	cout << accumulate(v.begin(), v.end(), 0);
	return 0;
}
