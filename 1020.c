#include <stdio.h>
 
int main() {

	int N,y=0,m=0,d=0,x;
	scanf("%d",&N);
	for(N;N>=365;N-=365,y++);
	for(N;N>=30;N-=30,m++);
	d+=N;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
	return 0;
}
