#include<stdio.h>
int main()
{    
	int l;
	int b;
	int Rperi;
	printf("Enter Length ");
	scanf("%d",&l);
	printf("Enter Breadth ");
	scanf("%d",&b);
	Rperi=2*(l+b);
	printf("Perimeter of the Rectangle is %d\n",Rperi);
}
