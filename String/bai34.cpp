#include <iostream>
using namespace std;

bool soDep(string s) {
    if (s.length() == 1) return true;
    
    bool check1 = true;
    bool check2 = true;
    
    for (int i = 1; i < s.length(); i++) {
        if (s[i] < s[i-1]) check1 = false;
        if (s[i] > s[i-1]) check2 = false;
        
        if (!check1 && !check2) return false;
    }
    
    return check1 || check2;
}

int main() {
    string s;
    cin >> s;
    
    if (soDep(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}