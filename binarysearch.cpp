#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[n]={2,3,4,6,7,8,10};
    int i,j,search=2,mid,left=0,right=n;
    for(i=left;i<=right;i++)
    {
        mid=(left+right)/2;
        if(search < arr[mid] )
        {
            right=mid-1;
            mid=(left+right)/2;
        }
        else if(search>arr[mid])
        {
            left=mid+1;
            mid=(left+right)/2;
        }
        else if(search==arr[mid])
        {
            cout<<"Found at "<<mid+1;
            return 0;
        }
       
    }
        if(search<arr[0])
        cout<<"-1";
    else if(arr[mid+1]>search)
       {
           cout<<mid;
       }

}