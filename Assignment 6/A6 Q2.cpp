#include<stdio.h>
void totalmarks()
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	int agg;
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
	printf("Aggregate Marks of the student are %d\n\n",agg);
}
void percentage()
{
	int perc;
	int agg;
	perc=agg*100/500;
	printf("Percentage of the student = %d\n\n",perc);
}
void Averagemarks()
{
	int avg;
	int agg;
	avg=agg/5;
	printf("Average Marks of the Student is %d\n",avg);
}
int main()
{
	totalmarks();
	percentage();
	Averagemarks();
	return 0;
}
