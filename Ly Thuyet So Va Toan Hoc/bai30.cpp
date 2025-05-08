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

int prime[10000001]; // N = 10^7

void sang(){
        //Bước 1 : Coi tất cả các số từ 0 tới N là số nguyên tố
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
        //Bước 2 : Sàng
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

bool kiemTra(int n){
	int maxDv = n % 10;
	while(n){
		if (n % 10 > maxDv)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}

int main(){
    
    fastIO;
    
    //code here
    int n;
    cin >> n;
    sang();
    int cnt = 0;
    FORL(i, 2, n){
    	if (prime[i] && kiemTra(i))
    	{
    		++cnt;
    		cout << i << ' ';
    	}
    }
    cout << '\n' << cnt;
    return 0;
}
