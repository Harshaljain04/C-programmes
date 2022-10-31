#include<stdio.h>
int interest(int);

int main()
{
    int A,r,t,p,si;
    si=interest(A);
}

int interest(int A)
{
    int r,t,p;
    printf("Enter Principal Amount = ");
    scanf("%d",&p);
    printf("Enter rate of interest = ");
    scanf("%d",&r);
    printf("Enter Time duration = ");
    scanf("%d",&t);
    A=p*(1+(r*t));
    printf("Total amount will be %d",A);
}