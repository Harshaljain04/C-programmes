#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter First Side of Triangle = ");
    scanf("%d",&a);
    printf("Enter Second Side of Triangle = ");
    scanf("%d",&b);
    printf("Enter Third Side of Triangle = ");
    scanf("%d",&c);
   
    if (a==b && b==c)
    {
        printf("Equilateral");
    }
    else if (a==b || b==c || c==a)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
    return 0;
    
}
