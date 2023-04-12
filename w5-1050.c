#include <stdio.h>
int main()
{
    int n, i = 0;
    int arr1[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    char arr2[8][15] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    scanf("%d", &n);

    for (i; i < 8; i++)
    {
        if (arr1[i] == n)
        {
            printf("%s\n", arr2[i]);
            break;
        }
    }
    if (i == 8)
    {
        printf("DDD nao cadastrado\n");
    }
    return 0;
}