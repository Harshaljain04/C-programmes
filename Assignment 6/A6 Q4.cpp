#include<stdio.h>
int main()
{
	int km;
	int conv1;
	int conv2;
	int conv3;
	printf("Distance between two cities in kilometers is ");
	scanf("%d",&km);
	conv1=km*1000*100;
	printf("Distnace between two cities in centimeters is %d\n",conv1);
	conv2=conv1*10;
	printf("Distnace between two cities in millimeters is %d\n",conv2);
	conv3=km*39370;
	printf("Distance between two cities in inches is %d",conv3);
	return 0;
}
