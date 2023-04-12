#include <stdio.h>

int main()
{

    float A, x, y;
    int z;
    scanf("%f", &A);
    if (A <= 400 && A >= 0)
    {
        x = (A * 0.15);
        y = x + A;
        z = 15;
    }

    else if (A <= 800 && A >= 400.01)
    {
        x = (A * 0.12);
        y = x + A;
        z = 12;
    }

    else if (A <= 1200 && A >= 800.01)
    {
        x = (A * 0.1);
        y = x + A;
        z = 10;
    }
    else if (A <= 2000 && A >= 1200.01)
    {
        x = (A * 0.07);
        y = x + A;
        z = 7;
    }
    else if (A > 2000)
    {
        x = (A * 0.04);
        y = x + A;
        z = 4;
    }
    printf("Novo salario: %.2f\n", y);
    printf("Reajuste ganho: %.2f\n", x);
    printf("Em percentual: %d %\n", z);

    return 0;
}