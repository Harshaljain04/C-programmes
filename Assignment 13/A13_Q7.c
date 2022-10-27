#include<stdio.h>
int ly(int);

int main()
{
    int choice;
    int year;
    printf("Enter choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:{ly(year);
        break;}
        default:{printf("Enter valid choice.");}
    }
}

int ly(int year)
{
    printf("Enter year = ");
    scanf("%d",&year);
    
    if(year%4==0)
    {printf("It is a leap year.");}

    else
    {printf("It is not a leap year.");}
}
 