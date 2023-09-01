#include<stdio.h>
int main()
{
    int i,j,u=0,l=0;
    int a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if((i<j) && a[i][j]!=0)
            {
                u=1;
            }
            else if((i>j)&& a[i][j]!=0)
            {
                l=1;
            }
        }
    }
    if(l==0 || u==0)
    printf("Yes\n");
    else
    printf("No\n");
}