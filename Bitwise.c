#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a=0,b=0,c=0;
  for(int i=1;i<=n;i++){
      for(int j=n;j>i;j--){
          int t = i&j;
          int r = i|j;
          int s = i^j;
          if(t<k&&a<t){
              a=t;
            }
          if(r<k&&b<r){
              b=r;
            }   
          if(s<k&&c<s){
              c=s;
            }       
        }
    }
    printf("%d\n%d\n%d",a,b,c);
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
