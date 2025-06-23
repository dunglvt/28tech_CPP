#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int m, s;
	cin >> m >> s;

	if(m == 1 && s == 0){
		cout << 0 << ' ' << 0;
		return 0;
	}

	if ((s == 0 && m >= 1) || s > 9 * m) {
		cout << "NOT FOUND";
		return 0;
	}

	string resMin, resMax;

	int ss = s;
	int h = 9;
	s -= 1;
	for(int i = 0; i < m; i++){
		if(s-h >= 0){
			s -= h;
			resMin += to_string(h);
		} else {
			while(s-h < 0){
				--h;
			}
			s -= h;
			resMin += to_string(h);
		}		
	}

	reverse(resMin.begin(), resMin.end());

	if(resMin[0] == '0'){
		resMin[0] = '1';
	} else {
		for(int i = resMin.size()-1; i >= 0; i--){
			if(resMin[i] >= '0' && resMin[i] < '9'){
				resMin[i]++;
			}
		}
	}

	int k = 9;
	for(int i = 0; i < m; i++){
		if(ss-k >= 0){
			ss -= k;
			resMax += to_string(k);
		} else {
			while(ss-k < 0){
				--k;
			}
			ss -= k;
			resMax += to_string(k);
		}		
	}

	cout << resMin << ' ' << resMax;
	return 0;
}