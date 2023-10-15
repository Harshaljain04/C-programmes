#include<stdio.h>
#include<stdlib.h>
#define x 10

int f=-1 , r=-1;
int q[x];
int enqueue()
{
    if((f==0 && r==x-1) || f-1==r)
    {
        printf("Overflow!!!");
    }
    else
    {
        if(r==-1) {f++,r++;}
        else r=(r+1)%x;
        scanf("%d",&q[r]);
        printf("Item Enqueued -> %d",q[r]);
    }
}

void dequeue()
{
    if(f==-1) printf("Underflow!!");
    else f=(f+1)%x;
    if(f=r+1) f=r=-1;
    printf("Item Dequeued -> %d",q[f]);
}

void display()
{
    int i;
    if(f==-1) printf("Underflow!!");
    else
    {
        printf("Queue is -> \n");
        for(i=f;i!=r;i=(i+1)%x)
        {
            printf("%d ",q[i]);
        }
        printf("%d",q[r]);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid choice!!");
        }
    }
}