#include<stdio.h>
int main()
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
	
	if(agg>33) {
		printf("Candidate PASSED the examination.");
	}
	else {
		printf("Candidate FAILED the examination.");
		printf("Candidate FAILED the examination.");
	}
}
