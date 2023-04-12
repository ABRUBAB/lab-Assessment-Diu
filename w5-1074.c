#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j = 0; j < n; j++)
	{
		if (arr[j] == 0)
			printf("NULL\n");
		else if (arr[j] > 0)
		{
			if (arr[j] % 2 == 0)
			{
				printf("EVEN POSITIVE\n");
			}
			else if (arr[j] % 2 != 0)
			{
				printf("ODD POSITIVE\n");
			}
		}
		else if (arr[j] < 0)
		{
			if (arr[j] % 2 == 0)
			{
				printf("EVEN NEGATIVE\n");
			}
			else if (arr[j] % 2 != 0)
			{
				printf("ODD NEGATIVE\n");
			}
		}
	}
	return 0;
}