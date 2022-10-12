#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter First Number = ");
	scanf("%d",&n1);
	printf("Enter Second Number = ");
	scanf("%d",&n2);
	
	if(n1>n2 && n1>=500 && n1<=1000)
	{
		
		printf("Greater Number is %d",n1);
	}
	else if(n2>n1 && n2>=500 && n2<=1000)
	{
		printf("Greater Number is %d",n2);
	}
	
	return 0;
}
