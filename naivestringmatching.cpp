#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 9}, count = 0;
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);
    printf("\n%d\n%d\n", m, n);
    if (n > m)
    {
        cout << "Not Found " << endl;
        return 0;
    }

    for (int i = 0; i <= m - n; i++)
    {
        if (b[0] == a[i])
        {
            for (int j = i; j < m; j++)
            {
                if (b[j] == a[j])
                {
                    count++;
                }
            }
        }
    }
    if (count == n)
    {
        cout << "Matched" << endl;
    }
    else
        cout << "Unmatched" << endl;
}