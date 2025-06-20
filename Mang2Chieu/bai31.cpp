#include <iostream>

using namespace std;

#define MOD 1000000007;

long long c[1001][1001];

void toHop(){
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || i == j){
				c[i][j] = 1;
			} else {
				c[i][j] = c[i-1][j-1] + c[i-1][j];
				c[i][j] %= MOD;
			}
		}
	}
}

int main(){
	int n; cin >> n;
	toHop();

	while(n--){
		int x, y;
		cin >> x >> y;
		cout << c[x][y] << endl;
	}
	return 0;
}