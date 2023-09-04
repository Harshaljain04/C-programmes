#include<stdio.h>
void print_array(int* a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void selectionsort(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            min=j;
        }
        sort(a,i,min);
    }
    
}
void sort(int a[],int x,int y)
{
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    print_array(a,n);
    selectionsort(a,n);
    print_array(a,n);
}
