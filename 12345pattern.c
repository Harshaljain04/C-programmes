#include<stdio.h>
int main()
{
    int k=1,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}