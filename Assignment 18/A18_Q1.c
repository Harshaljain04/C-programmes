#include<stdio.h>
int main()
{
    int i,n[10],sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter your number ");
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    printf("Sum of the numbers is %d",sum);
}