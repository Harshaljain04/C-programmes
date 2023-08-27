#include<stdio.h>
int gcd(int a,int b)
{
    int c=(a>b)?a:b;
    int d=(a<b)?a:b;
    if (d==0)
    {
        return c;
    }
    else
    {
        return gcd(d,(c%d));
    }
    
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int GCD=gcd(x,y);
    printf("%d",GCD);
}
