#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function
    // creating a clone value of a, so that we can use this value for the actual calculation without messing with the real value of a
    int temp = *a; 
    *a = temp + *b;
    *b = abs(temp - *b);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
