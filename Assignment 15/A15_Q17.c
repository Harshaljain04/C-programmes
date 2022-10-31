#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter number of terms to display = ");
    scanf("%d",&n);

    c=a+b;

    printf("First two terms of Fibonacci series %d %d ",a,b);

    for(i=3;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}