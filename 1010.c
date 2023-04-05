#include <stdio.h>
 
int main() {
    float a,b,c,x,y,z,sum;

    scanf("%f %f %f",&a,&b,&c);
    scanf("%f %f %f",&x,&y,&z);

    sum = b * c + y * z;
    printf("VALOR A PAGAR: R$ %.2f\n",sum);
    return 0;
}
