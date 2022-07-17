#include <iostream>
using namespace std;
void mergesort(int a[], int left, int right);
int main()
{
    int a[] = {10, 11, 13, 12, 23, 13};
    int n = sizeof(a) / sizeof(int);
    int i;
    mergesort(a, 0, n - 1);
    for (i = 0; i <= n - 1; i++)
        cout << a[i] << ",";
        return 0;
}

void mergesort(int a[], int left, int right)
{
    int i, j, k, mid, c[100] = {0};
    if (left >= right)
        return;
    mid = (left + right) / 2;
    mergesort(a, left, mid);
    mergesort(a, mid + 1, right);
    i = left;
    j = mid + 1;
    k = 0;
    while (i <= mid && j <= right)
    {
        if (a[i] >= a[j])   
        {
            c[k] = a[j];
            j++;
            k++;
        }
        else
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
   if(i <= mid)
    {
        for(;i<=mid;i++)
            c[k] = a[i];
            
            k++;
            
    }
    else

    {
        for(;j<=right;j++)
        
            c[k] = a[j];
           
            k++;
    }
    for (i = left; i <= right; i++)
        a[i] = c[i - left];
}