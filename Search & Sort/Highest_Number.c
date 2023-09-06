#include<stdio.h>
void print_array(int* a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");                                                               
}
void bubble_sort(int *a,int n)
{
    int temp;
    int swap=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                sort(a,j,(j+1));
                swap=1;
            }
        }
    }
    if(swap==0)
    {
        printf("Already Sorted");
    }
}
void sort(int *a,int x,int y)
{
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}
int main()
{
    int a[6]={27,64,56,32,93,12};
    int N=sizeof(a)/sizeof(int);
    int arr[2*N];
    for(int j=0;j<N;j++)
    {
        arr[j]=a[j]%10;
        arr[j+6]=a[j]/10;
    }
    print_array(arr,2*N);
    bubble_sort(arr,2*N);
    print_array(arr,2*N);
}