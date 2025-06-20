#include <iostream>
#include <algorithm>

using namespace std;

int n, m; 
int a[502][502];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int dem = 0;

void loang(int x, int y){
	++dem;
	a[x][y] = 0;
	for(int i = 0; i < 4; i++){
		int tmp_dx = x + dx[i];
		int tmp_dy = y + dy[i];
		if(tmp_dx >= 1 && tmp_dy >= 1 && tmp_dx <= n && tmp_dy <= m && a[tmp_dx][tmp_dy] == 1){
			loang(tmp_dx, tmp_dy);
		}
	}
}

int main(){
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}

	int ans = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j]){
				dem = 0;
				loang(i, j);
				ans = max(ans, dem);
			}
		}
	}
	cout << ans;
	return 0;

}