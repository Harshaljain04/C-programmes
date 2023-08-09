#include<stdio.h>
int main()
{
    int count=0,b,x,y,i;
    printf("Enter Number of Boys: \n");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        printf("Enter weight of student %d: \n",i+1);
        scanf("%d",&x);
        printf("Enter height of student %d: \n",i+1);
        scanf("%d",&y);
        if(x<=50 && y>170)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("The number of boys with weight less than 50 and height more than 170 are %d",count);
}