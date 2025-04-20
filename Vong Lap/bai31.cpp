#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long giaithua = 1;
    double tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += 1.0 / giaithua;
        giaithua *= i;
    }
    cout << fixed << setprecision(2) << tong << endl;
    return 0;
}