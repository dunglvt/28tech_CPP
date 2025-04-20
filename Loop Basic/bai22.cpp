#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tong = 0;
    for (int i = 2; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    cout << tong;
    return 0;
}