#include<stdio.h>
int main()
{
    int i,n,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter Number ");
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        sum=sum+n;
    }
    printf("Sum is %d",sum);
}