#include<stdio.h>
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertsort(int a[],int n)
{
    int x,j,i;
    for(i=1;i<n;i++)
    {
        x=a[i];
        j=i-1;
        while(j>=0 && a[j]>x)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=x;
    }
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
    insertsort(a,n);
    print_array(a,n);
}
