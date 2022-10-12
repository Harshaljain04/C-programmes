#include<stdio.h>
int main()
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int agg;
	printf("Enter English Marks = ");
	scanf("%d",&m1);
	printf("Enter Maths Marks = ");
	scanf("%d",&m2);
	printf("Enter Social Science Marks = ");
	scanf("%d",&m3);
	printf("Enter Science Marks = ");
	scanf("%d",&m4);
	printf("Enter Hindi Marks = \n");
	scanf("%d",&m5);
	agg=m1+m2+m3+m4+m5;
	printf("Marks Scored by student = %d\n\n",agg);
	
	if(agg>=33)
	{
		printf("Pass");
	}
	else if(agg<=100)
	{
		printf("Fail");
	}
	
}
