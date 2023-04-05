#include <stdio.h>
int main()
{
    printf("       A\n");
    char x = 'B';
    int space_between = 1;
    for (int i = 1; i <= 4; i++) // number  of rows printing
    {
        for (int j = 1; j <= 7 - i; j++)
        {
            printf(" ");
        }
        printf("%c", x);
        for (int k = 1; k <= space_between; k++)
        {
            printf(" ");
        }
        printf("%c\n", x);
        space_between += 2;
        x++;
    }

    x = 'D';
    space_between = 5;
    for (int i = 1; i <= 3; i++) // number  of rows printing
    {
        for (int j = 1; j <= 3 + i; j++)
        {
            printf(" ");
        }
        printf("%c", x);
        for (int k = 1; k <= space_between; k++) 
        {
            printf(" ");
        }
        printf("%c\n", x);
        space_between -= 2;
        x--;
    }

    printf("       A\n");
    return 0;
}
