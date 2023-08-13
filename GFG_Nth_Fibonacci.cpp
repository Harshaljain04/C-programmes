int nthFibonacci(int n){
        int a=0,b=1,c,i;
        if(n==0)
        {
            return a;
        }
        else
        {
            for(i=2;i<=n;i++)
            {
                c=(a+b)%1000000007;
                a=b;
                b=c;
            }
            return b;
        }
    }
    int main()
    {
        int n;
        scanf("%d",&n);
        cout << nthFibonacci(n);
        return 0;
    }
