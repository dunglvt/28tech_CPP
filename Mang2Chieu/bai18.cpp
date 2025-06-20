#include <iostream>

using namespace std;

int a[101][101];
int n, m;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


int main(){
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}

	int cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			bool check = true;
			for(int k = 0; k < 8; k++){
				int tmp_dx = i + dx[k];
				int tmp_dy = j + dy[k];
				if(a[tmp_dx][tmp_dy] >= a[i][j] && tmp_dx >= 1 && tmp_dy >= 1 && tmp_dx <=n && tmp_dy <= m){
					check = false;
					break;
				} 
			}
			if(check){
				++cnt;
			}
		}
	}
	cout << cnt;
	return 0;
}