#include<stdio.h>
int main()
{
	int temp;
	int f;
	printf("Enter Temperature in Farenheit = ");
	scanf("%d",&f);
	temp=(f-32)*0.5;
	printf("Temperature in Centigrade = %d",temp);
}
