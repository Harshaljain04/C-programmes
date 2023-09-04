#include<stdio.h>
int bubble_sort(int a[],int n)
{
    int temp;
    int swap=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap=1;                
            }
        }
    }
    if(swap==0)
    {
        printf("Already Sorted");
    }
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
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
    printf("\n");
    bubble_sort(a,n);
    printf("\n");
    print_array(a,n);
}