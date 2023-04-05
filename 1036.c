#include<stdio.h>
#include<math.h>
int main()
{
	double x1,x2,x,a,b,c,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	x = pow(b,2)-4*a*c;
	
    if(x>=0&&a!=0)
		{
		   x1 = (0-1)*(b-sqrt(x))/(2*a);
		   x2 = (0-1)*(b+sqrt(x))/(2*a);
		   printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
		}
	else
		printf("Impossivel calcular\n");
	return 0;
}
