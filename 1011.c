#include <stdio.h>
#include<math.h>
int main() {
 
    double x,R;
	scanf("%lf",&R);
	double p = 3.14159;
	R = pow(R,3);
	x = (4/3.0)*p*R;
	printf("VOLUME = %.3lf\n",x);
 
    return 0;
}
