#include <stdio.h>
#include <math.h>
 
int main() {
 
   long long int i= pow(10,9);
   long long int A,B,x,y,sum;
   scanf("%lld %lld",&A,&B);
   if(1 <= A && B<=i)
      {
   	  x = (B*(B+1))/2;
	  y = ((A-1)*A)/2;
   	  sum = x-y;
          printf("%lld\n",sum);
       }
   return 0;
}
