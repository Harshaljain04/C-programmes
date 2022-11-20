#include<stdio.h>
int main()
{
    int i,a[10],b[10];
    for(i=0;i<10;i++)
    {
        printf("Enter your number ");
        scanf("%d",&a[i]);
    }
    printf("\nYour first array is:-\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nYour copied numbers of first array are:-\n");
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
        printf("%d\t",b[i]);
    }
}