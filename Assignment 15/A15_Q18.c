#include<stdio.h>
int square(int);

int main()
{
    int a,sq;
    sq=square(a);

}

int square(int a)
{
    printf("Enter Number = ");
    scanf("%d",&a);
    printf("Square of the Number will be %d",a*a);
    
}