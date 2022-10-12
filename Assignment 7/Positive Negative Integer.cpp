#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number ");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("Positive");
	}
	
	else if(x<0)
	{
		printf("Negative");
	}
	return 0;
}
