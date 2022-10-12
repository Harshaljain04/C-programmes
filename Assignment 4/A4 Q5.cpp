#include<stdio.h>
int main()
{
	int salary;
	int DA = 40;
	int GS;
	printf(" Ramesh's Base Salary is ");
	scanf("%d",&salary);
	printf("Dearness Allowance given (in percent) = %d\n",DA);
	GS=0.4*salary+salary;
	printf("Ramesh's Gross Salary after dearness allowance is %d",GS);
	return 0;
	}
