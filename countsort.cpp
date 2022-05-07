#include <iostream>
using namespace std;
int main()
{
    int a[] = {0, 1, 4, 2, 1, 7, 4, 2, 3, 1}, f[10] = {0}, i, j;
    int n = sizeof(a) / sizeof(int);
    int b[n];   
    for (i = 0; i <= n - 1; i++)
    {
        int x = a[i];
        f[x]++;
    }
    for (i = 0; i <= 9; i++)
        cout << f[i] << ",";
    cout << endl;
    for (i = 1; i <= 9; i++)
    {
        f[i] += f[i - 1];
    }
    cout << endl;
    for (i = 0; i <= 9; i++)
        cout << f[i] << ",";
    cout << endl;
    for (i = n - 1; i >= 0; i--)
    {
        int x = a[i];
        int pos = f[x];
        b[pos - 1] = x;
        f[x]--;
    }
    cout << endl;
    for (i = 0; i <= n - 1; i++)
        cout << b[i] << ",";
}
