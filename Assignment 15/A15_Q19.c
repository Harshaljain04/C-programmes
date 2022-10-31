#include<stdio.h>
int cube(int);

int main()
{
    int a,cb;
    cb=cube(a);

}

int cube(int a)
{
    printf("Enter Number = ");
    scanf("%d",&a);
    printf("Cube of the Number will be %d",a*a*a);
    
}