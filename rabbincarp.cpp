#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[] = {2, 3, 4};
    int divider = 11, modulo, count = 3, match;
    int sizea = sizeof(a) / sizeof(int), sum = 0, j = 0, x = 0;
    int sizeb = sizeof(b) / sizeof(int);
    for (int i = 0; i < sizeb; i++)
    {
        sum = sum + b[i];
    }
    match = sum % divider;
    sum = 0;
    for (int i = count; i < sizea; i++)
    {
        x++;
        sum = sum + a[i] - a[i - count];
        modulo = sum % divider;
        if (match == modulo)
        {

            cout << "matched at " << i - count << endl;
            return 0;
        }

        j++;
    }
}