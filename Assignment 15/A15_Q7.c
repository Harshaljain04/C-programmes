#include<stdio.h>
int combination(int);

int main()
{
    int n,c,r,nCr,comb;
    comb=combination(nCr);
}

int combination(int nCr)
{
    int f=1,a,n,r;
    printf("Enter number = ");
    scanf("%d",&a);

    for(a=1;a>0;a--)
    f=f*a;
    printf("Factorial is %d",f);
}