#include<stdio.h>
int main()
{
    int a;
    int num;
    printf("Enter number = ");
    scanf("%d",&a);
    num=a-(a%10);
    printf("New Number is = %d",num);
}