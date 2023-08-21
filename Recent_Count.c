#include<stdio.h>
#include<string.h>
int main(void) {
    int n,t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        char s[20];
        scanf("%d",&n);
        int n1=0,n2=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s",s);
            if(strcmp(s,"START38")==0)
            {
                n1++;
            }
            else if(strcmp(s,"LTIME108")==0)
            {
                n2++;
            }
        }
        printf("%d %d\n",n1,n2);
    }
	// your code goes here
	return 0;
}

