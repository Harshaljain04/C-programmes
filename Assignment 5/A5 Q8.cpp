#include<stdio.h>
int main()
{
	int s1;
	int s2;
	int s3;
	int sum;
	printf("Enter first side of the triangle ");
	scanf("%d",&s1);
	printf("Enter Second sde of the triangle ");
	scanf("%d",&s2);
	printf("Enter third side of the triangle ");
	scanf("%d",&s3);
	sum=s1+s2+s3;
	printf("Sum of all the sides of the trianlge is %d",sum);
	return 0;
}
