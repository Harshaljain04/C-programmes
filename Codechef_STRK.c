#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],o[n],A=0,O=0,AM=0,OM=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=0)
            {
                A++;
                if(A>AM)
                {
                    AM=A;
                }
                
            }
            else
                {
                    A=0;
                }
        }
        for(int j=0;j<n;j++)
        {
            scanf("%d",&o[j]);
            if(o[j]!=0)
            {
                O++;
                if(O>OM)
                {
                    OM=O;
                }
            }
            else
                {
                    O=0;
                }
        }
        if(OM>AM) printf("Addy\n");
             else if(AM>OM) printf("Om\n");
             else printf("Draw\n");
        
    }
	// your code goes here
	return 0;
}
