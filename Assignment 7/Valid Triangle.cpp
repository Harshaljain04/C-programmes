#include<stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int sum;
	printf("Enter First side of Triangle ");
	scanf("%d",&x);
	printf("Enter Second side of Triangle ");
	scanf("%d",&y);
	printf("Enetr Third side of Triangle ");
	scanf("%d",&z);
	sum=x+y;
	
	if(sum>=z)
	{
		printf("Your Triangle is Valid.");
	}
	
	else if(sum<z)
	{
	    printf("Your Triangle is Not Valid.");
	}
	return 0;
}
