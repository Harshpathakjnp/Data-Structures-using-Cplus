#include <iostream>
using namespace std;
int quickSort(int arr[], int left, int right);
int main()
{
    int arr[] = {5, 3, 7, 8, 1, 3, 6, 2}, i, pivot, fp = 0, n = 8, temp;

    quickSort(arr, 0, n - 1);
    for (i = 0; i <= n - 1; i++)
        cout << arr[i] << ",";
}

int quickSort(int arr[], int left, int right)
{
    if (left >= right)
        return 0;
    int pivot = arr[left], fp = left, temp, i;
    for (i = left + 1; i <= right; i++)
    {
        if (arr[i] >= pivot)
            continue;
        fp++;
        temp = arr[i];
        arr[i] = arr[fp];
        arr[fp] = temp;
    }

    temp = arr[left];
    arr[left] = arr[fp];
    arr[fp] = temp;
    quickSort(arr, left, fp - 1);
    quickSort(arr, fp + 1, right);
}
