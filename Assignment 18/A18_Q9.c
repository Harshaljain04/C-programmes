#include<stdio.h>
int main()
{
    int i,n[999],a;
    printf("Enter size of array ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("Enter your number ");
        scanf("%d",&n[i]);
    }
    printf("Your numbers in original order are:-\n");
    for(i=0;i<a;i++)
    {
        printf("%d\t",n[i]);
    }
    printf("\nYour numbers in reverse order are:-\n");
    for(i=a-1;i<a && i>=0;i--)
    {
        printf("%d\t",n[i]);
    }
}