#include<stdio.h>
int main()
{
    int N;
    printf("Enter your number = ");
    scanf("%d",&N);

    while(N>0)
    {
        printf("%d\t",N);
        N=N-1;
    }
    return 0;
}
