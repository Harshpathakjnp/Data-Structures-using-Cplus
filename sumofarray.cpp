#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, sum = 0, x = 0, j = 0;
    int count = 3;
    int m = sizeof(a) / sizeof(int);
    for (int i = 0; i <= m - 1; i++)
    {
        x++;
        sum = sum + a[i];
        if (x >= count)
        {
            cout << sum << endl;
            sum = sum - a[j];
            j++;
        }
    }
}