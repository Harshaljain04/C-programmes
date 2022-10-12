#include<stdio.h>
int main()
{
	int z;
	printf("Enter Number = ");
	scanf("%d",&z);
	
	if(z>0)
	{
		printf("Number is Positive.");
	}
	else if(z<0)
	{
		printf("Number is negative.");
	}
	else if(z==0)
	{
		printf("Number is Zero.");
	}
}
