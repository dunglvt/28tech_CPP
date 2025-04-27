#include <bits/stdc++.h>

using namespace std;

bool kiemTra(int n){
	while(n >= 10) {
		int sau = (n / 10) % 10;
		int truoc = n%10;
	    if (truoc >= sau)
	    {
	    	return false;
	    }
	    n /= 10;
	}
	return true;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //code here
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
    {
    	if (kiemTra(i))
    	{
    		cout << i << " ";
    	}
    }
    return 0;
}
