#include<stdio.h>
int factorial(int);

int main()
{
    int a,i,n,fact;
    fact=factorial(i);
}

int factorial(int i)
{
    int a=1,n;
    printf("Enter Number = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {     a=a*i;    }
    printf("%d\t",a);

}