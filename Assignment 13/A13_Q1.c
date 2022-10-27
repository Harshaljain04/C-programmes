#include<stdio.h>
int mn(int);

int main()
{
    int choice,n;
    printf("Enter choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: {mn(n);
        break;}

        default: {printf("Enter valid month number.");}
    }
}

int mn(int n)
{
	printf("Enter Month Number = ");
	scanf("%d",&n);
	
	if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
	{
		printf("Month has 31 days.");
	}
	else if(n==2)
	{
		printf("Month has 28 days.");
	}
	else;
	{
		printf("Month has 30 days.");
	}
}