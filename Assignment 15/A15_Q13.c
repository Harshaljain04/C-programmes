#include<stdio.h>
int prime(int);

int main()
{
    int n,pr;
    pr=prime(n);
}

int prime(int x)
{
    int n=0,i;
    printf("Enter Number = ");
    scanf("%d",&x);

    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        n=1;
        break;
    }
    if(n==0)
    {
        printf("Prime Number.");
    }
    else
    {
        printf("Not Prime.");
    }
}