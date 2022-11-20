#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Odd numbers are \n");
    for(i=0;i<=4;i++)
    {
        printf("%d\t\n",((2*i)+1));
        N=(2*i)+1;
        sum=sum+N;
    }
    printf("Sum of odd numbers is %d",sum);
}