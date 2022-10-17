#include<stdio.h>
int main()
{
    int n;
    int a=1;
    int i;
    printf("Enter Number = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    a=a*i;
    printf("factorial is %d",a);
}