include<stdio.h>
int main(){
int n,x=128;
    scanf("%d",&n);
    while(x)
    {
        if(n&x)
        printf("1");
        else
        printf("0");
        x=x>>1;
    }
}
