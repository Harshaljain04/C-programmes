#include<stdio.h>
int main()
{
    int i,n[10],sum_even=0,sum_odd=0;
    for(i=0;i<10;i++)
    {
        printf("Enter your number ");
        scanf("%d",&n[i]);
        if(n[i]%2==0)
        {
            sum_even=sum_even+n[i];
        }
        else if(n[i]%2!=0)
        {
            sum_odd=sum_odd+n[i];
        }
    }
    printf("\nSum of all even numbers is %d",sum_even);
    printf("\nSum of all odd numbers is %d",sum_odd);
}