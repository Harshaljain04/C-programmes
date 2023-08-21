#include<stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t>=0)
    {
        int i;
        char s[9999],flag=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
            flag++;
            }
            else
            {
                flag=0;
            }
            if(flag>=3)
            {
                printf("Happy\n");
                break;
            }
        }
        if(flag<3)
        printf("Sad\n");
        t--;
    }
	// your code goes here
	return 0;
}

