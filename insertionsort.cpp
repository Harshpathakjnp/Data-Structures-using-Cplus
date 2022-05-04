#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 8, 7, 8}, i, j, t, n = 8;
    for (i = n-2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
            continue;
        t = arr[i + 1];
        j = i + 1;
        while (j >= 1 && arr[j - 1] > t)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = t;
    }
    for (i = 0; i <= n - 1; i++)
        cout << arr[i] << ",";
}