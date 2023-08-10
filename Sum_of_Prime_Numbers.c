#include<stdio.h>
int main()
{
    int i,big,small,flag=0,sum=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&small,&big);
    printf("Prime number between %d and %d are: ",small,big);
    while(small<big)
    {
        flag=0;
        if(small<=1)
        {
            ++small;
            continue;
        }
        for(i=2;i<=small/2;++i)
        {
            if(small%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",small);
            sum=sum+small;
        }
        ++small;
    }
    printf("\nThe sum of all prime numbers between the given intervals is %d",sum);
}

// #include <stdio.h>
// int main() {
//    int low, high, i, flag;
//    printf("Enter two numbers(intervals): ");
//    scanf("%d %d", &low, &high);
//    printf("Prime numbers between %d and %d are: ", low, high);
//    while (low < high) {
//       flag = 0;
//       if (low <= 1) {
//          ++low;
//          continue;
//       }
//       for (i = 2; i <= low / 2; ++i) {
//          if (low % i == 0) {
//             flag = 1;
//             break;
//          }
//       }
//       if (flag == 0)
//          printf("%d ", low);
//       ++low;
//    }
//    return 0;
// }