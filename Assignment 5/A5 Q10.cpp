#include<stdio.h>
int main()
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int total = 500;
	int agg;
	int perc;
	printf("Enter English marks ");
	scanf("%d",&m1);
	printf("Enter Maths marks ");
	scanf("%d",&m2);
	printf("Enter Science marks ");
	scanf("%d",&m3);
	printf("Enter Social Science marks ");
	scanf("%d",&m4);
	printf("Enter Hindi marks ");
	scanf("%d",&m5);
	agg=m1+m2+m3+m4+m5;
	printf("Total Marks = %d\n",total);
	printf("Aggregate Marks obtained by the student are %d\n",agg);
	perc=agg*100/500;
	printf("Percentage of the student = %d",perc);
	return 0;
}
