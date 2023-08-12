#include<stdio.h>
int main()
{

int n;
scanf("%d", &n);
int r1;
r1 = n % 10;
int s1 = n/10;
int r2 = s1%10;
int s2 = s1/10;
int r3 = s2%10;
int s3 = s2/10;
int r4 = s3%10;
int s4 = s3/10;
printf ("%d", r1 +r2+r3+r4+s4);

    return 0;
}