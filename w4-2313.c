#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b <= c || b + c <= a || c + a <= b)
    {
        printf("Invalido\n");
    }
    else if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && a == c)
        {
            printf("Valido-Equilatero\n");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Valido-Escaleno\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Valido-Isoceles\n");
        }
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    return 0;
}