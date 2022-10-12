#include<stdio.h>
void Rectangle()
{
	int l;
	int b;
	int Rarea;
	int Rperi;
	printf("Enter Length ");
	scanf("%d",&l);
	printf("Enter Breadth ");
	scanf("%d",&b);
	Rarea=l*b;
	Rperi=2*(l+b);
	printf("Perimeter of the Rectangle is %d\n",Rperi);
	printf("Area of the Rectangle is %d\n\n",Rarea);
}
void Square()
{
	int a;
	int Speri;
	int Sarea;
	printf("Side of the Square is ");
	scanf("%d",&a);
	Speri=4*a;
	Sarea=a*a;
	printf("Perimeter of the Sqaure is %d\n",Speri);
	printf("Area of the sqaure is %d\n\n",Sarea);
}
void Circle()
{
	int r;
	int Cperi;
	int Carea;
	printf("Radius of the circle is ");
	scanf("%d",&r);
	Cperi=2*3*r;
	Carea=3*r*r;
	printf("Circumference of the Circle is %d\n",Cperi);
	printf("Area of the Circle is %d\n\n",Carea);
}
void Triangle()
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
}

int main()
{
	Rectangle();
	Square();
	Circle();
	Triangle();
	return 0;
}
