#include <stdio.h>
 
int main() {
  int a,b,c,d,e,t,f=0;
	scanf("%d",&t);
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a==t)
		{
			f+=1;
		}
	if(b==t)
		{
			f+=1;
		}
	if(c==t)
		{
			f+=1;
		}
	if(d==t)
		{
			f+=1;
		}
	if(e==t)
		{
			f+=1;
		}
	printf("%d\n",f);
 
  return 0;
}
