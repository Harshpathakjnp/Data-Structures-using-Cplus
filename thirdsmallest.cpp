#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,7,6,5,4,3,2,1},i,j,pos,temp,n=8,k;
    cout<<"which smallest element  : ";
    cin>>k;
    if(k<n/2)
    {
    for(i=0;i<=k-1;i++)
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
    cout<<arr[k-1]<<endl;
    }
    else
    {
    for(i=0;i<=k-1;i++)
    {
        pos=i;
        for(j=i;j<=n-1;j++)
        {
            if(arr[pos]<arr[j])
            {
                temp=arr[pos];
                arr[pos]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<arr[n-k]<<endl;
    }
    
}