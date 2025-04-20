#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}