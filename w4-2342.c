#include <stdio.h>
int main()
{
    int N, P, Q;
    char ch;
    scanf("%d %d %c %d", &N, &P, &ch, &Q);
    if (ch == '+')
    {
        if (P + Q > N)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    else if (ch == '*')
    {
        if (P * Q > N)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    return 0;
}
