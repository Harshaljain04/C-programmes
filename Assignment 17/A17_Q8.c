#include<stdio.h>
int main()
{
    int n[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        if(n>0)
        {printf("Enter number ");
        scanf("%d",&n[i]);
        }
        else
        {
            continue;
        }
        sum=sum+n[i];
    }
    printf(" Sum is %d",sum);
}