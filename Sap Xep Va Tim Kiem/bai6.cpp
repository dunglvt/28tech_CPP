#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FORL(i,l,r) for(auto i = l; i <= r; i++)
#define FORR(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

void selectionSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int minPos = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[minPos]){
				minPos = j;
			}
		}
		int tmp = a[minPos];
		a[minPos] = a[i];
		a[i] = tmp;
		cout << "Buoc " << i+1 << ": ";
		for(int k = 0; k < n; k++){
			cout << a[k] << ' ';
		}
		cout << endl;
	}
}

int main(){
    
    fastIO;
    
    //code here
    int n;cin >> n;

    int a[n];
    for(int &i : a){
    	cin >> i;
    }

    selectionSort(a, n);
    return 0;
}
