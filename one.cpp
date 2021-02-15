#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-2, 3,0,-4,-5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(arr[i]<0)
        i++;
        if(arr[j]>0)
        j--;
        else if(arr[i]>=0 and arr[j]<0 and i<=j)
        {
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
        
    }
    int k=0;
    while(i<n)
    {
        swap(arr[i],arr[k]);
        i++;
        k=k+2;
    }
    for(int k=0;k<n;k++)
    cout<<arr[k]<<" ";
    
}