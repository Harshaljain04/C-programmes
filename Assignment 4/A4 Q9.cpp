#include<stdio.h>
int main()
{
	int height;
	int conv;
	printf("Height of the person in feet is ");
	scanf("%d",&height);
	conv=height*12;
	printf("Height of the person in inches is %d",conv);
	return 0;
}
