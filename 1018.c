#include <stdio.h>
 
int main() {
 
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,n;
	scanf("%d",&n);
	printf("%d\n",n);
	for(int i =n;n>=100;n-=100,a++);
	for(int i =n;n>=50;n-=50,b++);
	for(int i =n;n>=20;n-=20,c++);
	for(int i =n;n>=10;n-=10,d++);
	for(int i =n;n>=5;n-=5,e++);
	for(int i =n;n>=2;n-=2,f++);
	for(int i =n;n>=1;n-=1,g++);
	printf("%d nota(s) de R$ 100,00\n",a);
	printf("%d nota(s) de R$ 50,00\n",b);
	printf("%d nota(s) de R$ 20,00\n",c);
	printf("%d nota(s) de R$ 10,00\n",d);
	printf("%d nota(s) de R$ 5,00\n",e);
	printf("%d nota(s) de R$ 2,00\n",f);
	printf("%d nota(s) de R$ 1,00\n",g);
 
    return 0;
}
