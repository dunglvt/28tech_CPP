#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n];
    int check1 = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 'C')
        {
            check1 = 1;
        }
        if (a[i] == '+')
        {
            ++count;
        }
    }
    if (check1 && count >= 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}