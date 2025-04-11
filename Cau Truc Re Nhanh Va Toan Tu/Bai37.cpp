#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h, m, k;
    cin >> h >> m >> k;
    int tong = (h * 28 + m + k) % 784;
    cout << setw(2) << setfill('0') << tong / 28 << "h:";
    cout << setw(2) << setfill('0') << tong % 28 << "m";
}