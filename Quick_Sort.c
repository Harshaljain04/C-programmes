#include <stdio.h>
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void quickSort()
{
    int *ptr1,*ptr2;
    
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
    // quickSort();
    print_array(a,n);
    return 0;
}
