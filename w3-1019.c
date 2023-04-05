#include <stdio.h>
 
int main() {
 
  int N,h=0,m=0,s=0;
	scanf("%d",&N);
	for(N;N>=3600;N-=3600,h++);
	for(N;N>=60;N-=60,m++);
	s+=N;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
