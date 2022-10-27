#include<stdio.h>
int main()
{
    int choice;
    printf("Food menu:\n 1. Burger  =   Rs.200\n 2. French Fries    =   Rs.50\n 3. Pizza    =   Rs.500\n 4. Sandwiches  =   Rs.150\n 5. Enter some valide choice\n\n");
    printf("Enter choice = ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        {
            int n;
            printf("Enter Quantity = ");
            scanf("%d",&n);
            printf("Total Amount = %d\n",200*n);
            return 0;
        }
        case 2:
        {
            int m;
            printf("Enter Quantity = ");
            scanf("%d",&m);
            printf("Total Amount = %d\n",50*m);
            return 0;
        }
        case 3:
        {
            int v;
            printf("Enter Quantity = ");
            scanf("%d",&v);
            printf("Total Amount = %d\n",500*v);
            return 0;
        }
        case 4:
        {
            int b;
            printf("Enter Quantity = ");
            scanf("%d",&b);
            printf("Total Amount = %d\n",150*b);
            return 0;
        }
        default:
        {
            printf("Enter Valid Choice.");
        }
    }

}