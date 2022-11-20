#include<stdio.h>
int main()
{
    int count=1,n;
    while(count>0)
    {
        
        printf("Enter a Number ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else if(n%10==0)
        {
            continue;
        }
        printf("You entered %d\n\n",n);
        
    }
    
}