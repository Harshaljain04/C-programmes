#include<stdio.h>
int main()
{
    int n;
    int a;
    int b;
    printf("Enter Number of pairs = ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("Enter first number ");
        scanf("%d",&a);
        printf("Enter Second Number ");
        scanf("%d",&b);
        printf("Sum is %d\n",a+b);
        n=n-1;
    }
}