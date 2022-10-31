#include<stdio.h>
int check(int);

int main()
{
    int number,n;
    number=check(n);
}

int check(int n)
{
    printf("Enter Number = ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("1");
    }

    else
    {
        printf("0");
    }
}