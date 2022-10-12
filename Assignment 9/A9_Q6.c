#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter First Side of Triangle = ");
    scanf("%d",&a);
    printf("Entre Second Side of Triangle = ");
    scanf("%d",&b);
    printf("Enter Third Side of Triangle = ");
    scanf("%d",&c);

    if(a+b>=c && b+c>a && c+a>b)
    {
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle.");
}
}
