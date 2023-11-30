#include <stdio.h>
int main()
{
    int a[8]={4,5,10,12,6,8,11,15};
    int n=8;
    int l=0,h=n-1,m=(l+h)/2;
    merge(a,l,m,h);
    return 0;
}

void merge(int arr[],int low, int mid, int high)
{
    int i,j,k;
    int n1=mid-low+1,n2=high-mid;
    int x[n1],y[n2];
    for(i=0;i<n1;i++)
    {
        x[i]=arr[i];
    }
    for(i=n2;i<high;i++)
    {
        y[i-n2]=arr[i];
    }
    i=0,j=0,k=low;
    for(k=0;i<n1 && j<n2;k++)
    {
        
    }
}