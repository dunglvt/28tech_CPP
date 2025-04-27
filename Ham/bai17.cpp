#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//constant
#define MOD 1000000007
#define PI 3.14

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) return false;
    }
    return true;
}

int sumDigit(int n){
    int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fastIO;
    
    //code here
    int a, b;
    cin >> a >> b;
    int check = 0;

    for (int i = a; i <= b; ++i)
    {
        if (isPrime(sumDigit(i)%10))
        {
            cout << i << " ";
            check = 1;
        }
    }
    if (check == 0)
    {
        cout << "NOT FOUND";
    }
    return 0;
}
