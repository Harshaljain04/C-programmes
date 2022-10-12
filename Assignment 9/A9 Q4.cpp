#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number = ");
	scanf("%d",&n);
	
	if(n>0)
	{ printf("Positive\n");
	if(n%10==0){
		printf("Number is Divisible by 10.");
	}
	else{
		printf("Number is not divisible by 10.");
	}
    }
    else if(n<0)
    {
    	printf("Negative.");
	}
	else if(n==0)
	{
		printf("Zero.");
	}
	
}
