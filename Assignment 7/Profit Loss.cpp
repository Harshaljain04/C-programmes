#include<stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int perc;
	printf("Enter Cost Price ");
	scanf("%d",&x);
	printf("Enter Selling Price ");
	scanf("%d",&y);
	z=y-x;
	printf("Revenue is %d\n\n",z);
	perc=z*100/x;
	printf("Percentage is %d\n\n",perc);
	
	if (y>x)
	{
		printf("Profit");
	}
	
	if (y<x)
	{
		printf("Loss");
	}
	return 0;
}
