#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number = ");
	scanf("%d",&n);
	
	if(n%3==0) {
		printf("Number is divisible by 3.");
	}
	else {
		printf("Number is not divisible by 3.");
	}
	if(n%7==0) {
		printf("Numbr is divisible by 7.");
	}
	else {
		printf("Number is not divisible by 7.");
	}
}
