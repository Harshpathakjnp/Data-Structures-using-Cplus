#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {222, 333}, n1 = 2;
    int arr2[] = {11, 22, 24}, n2 = 3;
    int arr3[n1 + n2] = {0};
    int i = 0, j = 0, k = 0;

    while (i <= n1 && j <= n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else if(j==n2)
            {
                arr3[k]=arr1[i];
                i++;
            }
        else if(i==n1)
            {
                arr3[k]=arr2[j];
                j++;
            }

        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    for (i = 0; i <= n1 + n2 - 1; i++)
        cout << arr3[i] << ",";
}