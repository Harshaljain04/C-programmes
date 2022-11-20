#include<stdio.h>
int main()
{
    int i,n;
    for(i=1;i<=10;i++)
    {
        printf("Enter number %d = ",i);
        scanf("%d",&n);
        if(n==10)
        {
            break;
        }
        printf("You entered %d\n",n);
    }
}