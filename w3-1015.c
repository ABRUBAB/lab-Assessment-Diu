#include <stdio.h>
#include <math.h>
 
int main() {
  double x1,y1,x2,y2,a,b,c,d;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	a = x2-x1;
	b = y2-y1;
	a = pow(a,2);
	b = pow(b,2);
	d = a+b;
	c = sqrt(d);
	printf("%.4lf\n",c);
  return 0;
}
