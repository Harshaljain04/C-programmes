#include<stdio.h>
int main()
{
    int a,b,cmndiv,i,LCM;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);

    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        cmndiv=i;
    }
    printf("HCF of the two numbers is %d",cmndiv);
}    