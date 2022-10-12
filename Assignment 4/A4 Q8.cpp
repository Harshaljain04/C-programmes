#include<stdio.h>
int main()
{
	int km;
	int conversion;
	printf("Distance between two cities in kilometers is ");
	scanf("%d",&km);
	conversion=km*1000*100*10;
	printf("Distnace between two cities in millimeters is %d",conversion);
	return 0;
}
