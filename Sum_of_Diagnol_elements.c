#include<stdio.h>
int main()
{
    int i,j;
    int a[4][4];
    int sum1=0,sum2=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i][i]);
        sum1=sum1+a[i][i];
    }
    printf("\n");\
    printf("The diagnol elements starting from top left to bottom right:- \n");
    for(i=0;i<4;i++)
    {
        printf("%d\n",a[i][i]);
    }
    printf("\nSum1 = %d\n",sum1);
    for(i=0,j=3;i<4 && j<4;i++,j--)
    {
        scanf("%d",&a[i][j]);
        sum2=sum2+a[i][j];
    }
    printf("\nThe diagnol elements starting from top right to bottom left:- \n");
    for(i=0,j=3;i<4 && j<4;i++,j--)
    {
        printf("%d\n",a[i][j]);
    }
    printf("\nSum2= %d\n",sum2);
}