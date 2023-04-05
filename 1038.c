#include <stdio.h>
 
int main() {
 
    int X,Y;
	float a=4,b=4.5,c=5,d=2,e=1.5;
	scanf("%d %d",&X,&Y);
	if(X==1)
		{
			printf("Total: R$ %.2f\n",a*Y);
		}
	else if(X==2)
		{
			printf("Total: R$ %.2f\n",b*Y);
			}
	else if(X==3)
		{
			printf("Total: R$ %.2f\n",c*Y);
		}
	else if(X==4)
		{
			printf("Total: R$ %.2f\n",d*Y);
		}
	else if(X==5)
		{
			printf("Total: R$ %.2f\n",e*Y);
		}
 
    return 0;
}
