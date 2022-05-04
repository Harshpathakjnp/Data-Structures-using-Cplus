#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,1,2,7,8,0,9},i,j,pos,temp,n=8;
    for(i=0;i<=n-2;i++)
    {
        pos=i;
        for(j=i;j<=n-1;j++)
        {
            if(arr[pos]>arr[j])
            {
                temp=arr[pos];
                arr[pos]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<=n-1;i++)
    cout<<arr[i]<<",";
    
    
}