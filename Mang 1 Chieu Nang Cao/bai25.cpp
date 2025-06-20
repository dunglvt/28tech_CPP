#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    
    for(int &i:a){
        cin >> i;
    }
    
    sort(a,a+n);
    for(int i:a){
        cout << i << ' ';
    }
    return 0;
}
