#include <stdio.h>
int fib(double n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
 
int main()
{
    double n;
    scanf("%ld",&n);
    printf("%ld", fib(n));
    return 0;
}