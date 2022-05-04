#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,2,3,4,5,6,7,8}, i, j, swap, n = 8,count,p=0;
    for (i = 0; i <= n - 2; i++)
    {
        count=0;
        p++;
        for (j = 0; j <= n - 2-i; j++)
        {
            
            
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                count=1;
            }
            
            
        }
        if(count==0)
            break;
    }


    for (i = 0; i <= n - 1; i++)
        cout << arr[i] << ",";
        cout<<endl<<p<<endl;


        for (i = 0; i <= n - 2; i++)
    {
        count=0;
        p++;
        for (j = 0; j <= n - 2-i; j++)
        {
            
            
            if (arr[j] < arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                count=1;
            }
            
            
        }
        if(count==0)
            break;
    }
    for (i = 0; i <= n - 1; i++)
        cout << arr[i] << ",";
        cout<<endl<<p;
}