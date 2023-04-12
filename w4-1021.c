#include <stdio.h>

int main()
{

    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, h = 0;
    double n;
    int l = 0, m = 0, j = 0, k = 0, x = 0;
    scanf("%lf", &n);
    printf("NOTAS:\n");
    for (n; n >= 100; n -= 100, a++)
        ;
    for (n; n >= 50; n -= 50, b++)
        ;
    for (n; n >= 20; n -= 20, c++)
        ;
    for (n; n >= 10; n -= 10, d++)
        ;
    for (n; n >= 5; n -= 5, e++)
        ;
    for (n; n >= 2; n -= 2, f++)
        ;
    for (n; n >= 1.00; n -= 1, h++)
        ;
    for (n; n >= 0.50; n -= 0.50, j++)
        ;
    for (n; n >= 0.25; n -= 0.25, k++)
        ;
    for (n; n >= 0.10; n -= 0.10, l++)
        ;
    for (n; n >= 0.05; n -= 0.05, m++)
        ;
    for (n; n >= 0.01; n -= 0.01, x++)
        ;

    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", h);
    printf("%d moeda(s) de R$ 0.50\n", j);
    printf("%d moeda(s) de R$ 0.25\n", k);
    printf("%d moeda(s) de R$ 0.10\n", l);
    printf("%d moeda(s) de R$ 0.05\n", m);
    printf("%d moeda(s) de R$ 0.01\n", x);

    return 0;
}