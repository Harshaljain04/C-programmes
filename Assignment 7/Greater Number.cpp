#include<stdio.h>
int main()
{
	int x;
	int y;
	printf("Enter First Number ");
	scanf("%d",&x);
	printf("Enter Second Number ");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("Greater Number is %d",x);
	}
	else (y>x);
	{
		printf("Greater Number is %d",y);
	}
	
	return 0;
}
