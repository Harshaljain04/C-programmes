#include<stdio.h>
int main()
{
    int counter;
    printf("Enter Number of times to print Hello World = ");
    scanf("%d",&counter);

    while(counter>0)
    {
        printf("Hello World.\n");
        counter=counter-1;
    }
    return 0;
}
