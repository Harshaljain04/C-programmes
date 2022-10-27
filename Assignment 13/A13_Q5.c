#include<stdio.h>
void et();
void it();
void st();

int main()
{
    int a,b,c,choice;
    printf("Enter choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: { et(a,b);
        break;}
        
        case 2: { it(a,b);
        break;}

        case 3: { st(a,b);
        break;}

        default:{printf("Enter choice between 1-3 only.");}
    }
}

void et()
{
    int a,b,c;
    printf("Enter sides of triangle PQR ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && a==c)
    {
        printf("It is Equilateral Triangle.");
    }
    
    else
    {
        printf("It is not an Equilateral Triangle.");
    }
}


void it()
{
    int a,b,c;
    printf("Enter sides of triangle PQR ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b || b==c || c==a)
    {
        printf("It is an Isoceles Triangle.");
    }

    else
    {
        printf("It is not an Isoceles Triangle.");
    }
}

void st()
{
    int a,b,c;
    printf("Enter sides of triangle PQR ");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c || b+c>a || c+a>b)
    {
        printf("It is a scalene triangle.");
    }

    else 
    {
        printf("It is not a scalene Triangle.");
    }
}