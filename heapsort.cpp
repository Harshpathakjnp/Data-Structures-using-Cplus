#include <iostream>
using namespace std;
int main()
{
    int i, a[] = {0, 68, -7, 45, 6, 57}, n = 6, t, k, l;
    int b[n + 1];
    int left, right, pos, j, parent;

    for (i = 0; i < 6; i++)
    {
        b[i + 1] = a[i];
        j = i + 1;
        while (1)
        {
            parent = j / 2;
            if (parent < 1)
                break;
            if (b[parent] >= b[j])
                break;
            t = b[parent];
            b[parent] = b[j];
            b[j] = t;
            j = parent;
        }
    }
    for (i = 1; i < 7; i++)
        cout << b[i] << ",";
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        a[n - i] = b[1];
        l = n - i + 1;
        b[1] = b[l];
        l--;
        j = 1;
        while (1)
        {
            left = 2 * j;
            right = 2 * j + 1;
            if (left > l)
                break;
            if (right > l)
            {
                if (b[j] > b[left])
                    break;
                t = b[j];
                b[j] = b[left];
                b[left] = t;
                break;
            }
            if (b[left] > b[right])
                pos = left;
            else
                pos = right;
            if (b[j] > b[pos])
                break;
            t = b[pos];
            b[pos] = b[j];
            b[j] = t;
            j = pos;
        }
    }

    for (i = 0; i < 6; i++)
        cout << a[i] << ",";
    cout << endl;

    /*Time complexity nlog(base 2)n*/
    /*For Quick and Merge too.*/
    return (0);
}