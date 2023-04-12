#include <stdio.h>
int main()
{
    char arr[10][31];
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", &arr[i]);
    }
    printf("%s\n", arr[2]);
    printf("%s\n", arr[6]);
    printf("%s\n", arr[8]);
    return 0;
}