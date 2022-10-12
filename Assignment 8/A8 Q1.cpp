#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int z;
	printf("Enter First Number ");
	scanf("%d",&a);
	printf("Enter Second Number ");
	scanf("%d",&b);
	printf("Enter Third Number ");
	scanf("%d",&c);
	
	if(a>b && a>c) {
		printf("Greatest Number = %d",a);
	}
	else if(b>c && b>a) {
		printf("Greatest Number = %d",b);
	}
	else if(c>a && c>b) {
		printf("Greatest Number = %d",c);
	}
	return 0;
}
