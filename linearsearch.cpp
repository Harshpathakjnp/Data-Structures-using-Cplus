/*        Linear Search             */

#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int search=4,i;
    for(i=0;i<=7;i++)
    {
        if(arr[i]==search)
        {
            cout<<"Found at "<<i+1<<endl;
        }
    }
    return 0;
}