#include<stdio.h>
int main()
{
	int salary;
	int DA;
	int HR;
	int GS;
	printf("Aman's Base salary = ");
	scanf("%d",&salary);
	DA=0.5*salary;
	printf("Dearness allowance = %d\n",DA);
	HR=0.2*salary;
	printf("House Rent allowance = %d\n",HR);
	GS=DA+HR+salary;
	printf("Ramesh's Gross salary = %d",GS);
	return 0;
}
