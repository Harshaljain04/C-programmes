#include<stdio.h>
int prime(int);

int main()
{
    int n,pr;
    pr=prime(n);
}

int prime(int x)
{
    int i;
    printf("Enter Number = ");
    scanf("%d",&x);

    for(i=2;i<x-1;i++)
    {
        if(x%i==0)
        {
            break;
        }    
    }
    if(x%i==0)
    {
        printf("Prime Number.");
    }
    else
    {
        printf("Not Prime.");
    }
}