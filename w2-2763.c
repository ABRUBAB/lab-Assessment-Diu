#include <stdio.h>
 
int main() {
    int x,y,z,d;
    scanf("%03d.%03d.%03d-%02d", &x, &y, &z,&d);

    printf("%03d\n%03d\n%03d\n%02d\n", x, y,z,d);
    return 0;

}
