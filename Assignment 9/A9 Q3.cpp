#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number = ");
	scanf("%d",&n);
	
	if(n%2==0 && n%3==0)
	{
	printf("Number is Even and divisible by 2 and 3.");
    }
    else if(n%2==1 && n%5==0){
    	printf("Number is Odd and Divisible by 5.");
	}
}
