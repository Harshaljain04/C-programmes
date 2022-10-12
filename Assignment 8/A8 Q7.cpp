#include<stdio.h>
int main()
{
	int rup;
	int conv;
	printf("Enter Amount in INR ");
	scanf("%d",&rup);
	conv=rup/80;
	printf("Amount in USD is %d",conv);
	return 0;
}
