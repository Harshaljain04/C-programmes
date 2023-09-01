#include<stdio.h>
int main()
{
    int i,j,flag=0;
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j || i==j+1 || j==i+1)
            {
                if(a[i][j]==0)
                {
                    flag=1;
                }
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag)
    {
        printf("Yes it is a tridiagnol Matrix");
    }
    else
    {
        printf("No it is not a tridiagnol matrix");
    }
    
}