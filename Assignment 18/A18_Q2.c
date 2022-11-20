#include<stdio.h>
int main()
{
     int i,n[10],sum=0;
     float f;
    for(i=0;i<10;i++)
    {
        printf("Enter your number ");
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    printf("Sum of the numbers is %d\n\n",sum);
    f=(float)sum/10;
    printf("Average of the numbers is %f",f);
}