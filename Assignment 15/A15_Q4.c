#include<stdio.h>
int natural(int);

int main()
{
    int n,num;
    num=natural(n);
}

int natural(int n)
{
    printf("Enter your number = ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("%d\t",n);
        n=n-1;
    }
}
