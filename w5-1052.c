#include <stdio.h>
int main()
{
    int n, i;
    int arr1[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    char arr2[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    scanf("%d", &n);

    for (i = 0; i < 12; i++)
    {
        if (arr1[i] == n)
        {
            printf("%s\n", arr2[i]);
            break;
        }
    }
    return 0;
}