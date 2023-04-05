#include <stdio.h>
 
int main() {
 
    double A,B,C,x,y,z,i,j;
	scanf("%lf %lf %lf",&A,&B,&C);
	double p = 3.14159;
	x = (1/2.0)*A*C;
	y = p*C*C;
	z = (1/2.0)*C*(A+B);
	i = B*B;
	j = A*B;
	printf("TRIANGULO: %.3lf\n",x);
	printf("CIRCULO: %.3lf\n",y);
	printf("TRAPEZIO: %.3lf\n",z);
	printf("QUADRADO: %.3lf\n",i);
	printf("RETANGULO: %.3lf\n",j);
 
    return 0;
}
