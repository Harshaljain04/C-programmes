#include<stdio.h>
int main()
{
    int var;
    printf("Enter Choice of Variable = ");
    scanf("%d",&var);

    switch(var)
    {
        case 1:{printf("Good.");break;}

        case 2:{printf("Better.");break;}

        case 3:{printf("Best.");break;}

        default:{printf("Invalid.");}
        //switch ends here.
    }
    return 0;
}