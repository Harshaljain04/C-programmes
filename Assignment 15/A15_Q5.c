#include<stdio.h>
int odd(int);

int main()
{
    int n,number;
    number=odd(n);
}

int odd(int n)
{
    int i,o;
    printf("Enter Number = ");
    scanf("%d",&n);

    
    for(i=1;i<=10;i++)
    {
        o=2*i-1;
        printf("%d\t",o);
    }
}