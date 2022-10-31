#include<stdio.h>
int ar(int);

int main()
{
    int r,area;
    printf("Enter radius of circle = ");
    scanf("%d",&r);
    area=ar(r);
}

int ar(int r)
{
    int area;
    area=3*r*r;
    printf("Area of the circle is %d",area);
}