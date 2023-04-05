#include <stdio.h>
 
int main() {
    int s,v,t;
	float f;
	scanf("%d %d",&t,&v);
	s = v*t;
	f = s/12.0;
	printf("%.3f\n",f);
    return 0;
}
