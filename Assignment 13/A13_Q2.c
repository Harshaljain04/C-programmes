#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("Enter Two numbers = ");
    scanf("%d %d",&a,&b);
    printf("Select one of the following options:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit\n");
    printf("Enter choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            int add;
            add=a+b;
            printf("Addition is %d",add);
            break;
        }
        case 2:
        {
            int sub;
            sub=a-b;
            printf("Subtraction is %d",sub);
            break;
        }
        case 3:
        {
            int mul;
            mul=a*b;
            printf("Multiplication is %d",mul);
            break;
        }
        case 4:
        {
            int div;
            div=a*b;
            printf("Division is %d",div);
            break;
        }
        case 5:
        {
            printf("EXIT");
            return 0;
            break;
        }
        default:
        {
            printf("Enter choice between 1-5 only.");
        }
    }
}