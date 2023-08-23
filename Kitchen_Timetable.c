#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],b[n],cnt=0,prev=0;
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&a[j]);
	    }
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&b[j]);
	        if(b[j]<=(a[j]-prev))
	        {
	            cnt++;
	        }
	        prev=a[j];
	    }
	    printf("%d\n",cnt);
	}
	return 0;
}
