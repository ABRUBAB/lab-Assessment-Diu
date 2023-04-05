#include <stdio.h>
 
int main() {
    int j;

    printf("---------------------------------------\n");

    printf("|  decimal  |  octal  |  Hexadecimal  |\n");


    printf("---------------------------------------\n");


    for(j=0; j<=15; j++)

    {



        printf("|     %2d    |   %2o    |       %X       |\n", j, j, j);

    }


    printf("---------------------------------------\n");
    return 0;
}
